# Copyright (c) 2013 Google, Inc.
#
# This software is provided 'as-is', without any express or implied
# warranty.  In no event will the authors be held liable for any damages
# arising from the use of this software.
# Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
# 1. The origin of this software must not be misrepresented; you must not
# claim that you wrote the original software. If you use this software
# in a product, an acknowledgment in the product documentation would be
# appreciated but is not required.
# 2. Altered source versions must be plainly marked as such, and must not be
# misrepresented as being the original software.
# 3. This notice may not be removed or altered from any source distribution.

LOCAL_PATH := $(call my-dir)

# Empty static library so that other projects can include FlatBuffers as a
# module.
include $(CLEAR_VARS)
LOCAL_MODULE := flatbuffers
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../include
LOCAL_EXPORT_CPPFLAGS := -std=c++11 -fexceptions -Wall -Wno-literal-suffix
include $(BUILD_STATIC_LIBRARY)

# FlatBuffers test
include $(CLEAR_VARS)
LOCAL_MODULE := FlatBufferTest
LOCAL_SRC_FILES := main.cpp \
                   ../../tests/test.cpp \
                   ../../src/idl_parser.cpp \
                   ../../src/idl_gen_text.cpp \
                   ../../src/idl_gen_fbs.cpp \
                   ../../src/idl_gen_general.cpp \
                   ../../src/reflection.cpp
LOCAL_LDLIBS := -llog -landroid
LOCAL_STATIC_LIBRARIES := android_native_app_glue flatbuffers
LOCAL_ARM_MODE := arm
include $(BUILD_SHARED_LIBRARY)

$(call import-module,android/native_app_glue)

$(call import-add-path,../..)
