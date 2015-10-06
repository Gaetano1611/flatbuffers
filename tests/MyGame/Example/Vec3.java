// automatically generated, do not modify

package MyGame.Example;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Vec3 extends Struct {
  public Vec3 __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public float x() { return bb.getFloat(bb_pos + 0); }
  public void mutateX(float x) { bb.putFloat(bb_pos + 0, x); }
  public float y() { return bb.getFloat(bb_pos + 4); }
  public void mutateY(float y) { bb.putFloat(bb_pos + 4, y); }
  public float z() { return bb.getFloat(bb_pos + 8); }
  public void mutateZ(float z) { bb.putFloat(bb_pos + 8, z); }
  public double test1() { return bb.getDouble(bb_pos + 16); }
  public void mutateTest1(double test1) { bb.putDouble(bb_pos + 16, test1); }
  public byte test2() { return bb.get(bb_pos + 24); }
  public void mutateTest2(byte test2) { bb.put(bb_pos + 24, test2); }
  public Test test3() { return test3(new Test()); }
  public Test test3(Test obj) { return obj.__init(bb_pos + 26, bb); }

  public static int createVec3(FlatBufferBuilder builder, float x, float y, float z, double test1, byte test2, short test3_a, byte test3_b) {
    builder.prep(16, 32);
    builder.pad(2);
    builder.prep(2, 4);
    builder.pad(1);
    builder.putByte(test3_b);
    builder.putShort(test3_a);
    builder.pad(1);
    builder.putByte(test2);
    builder.putDouble(test1);
    builder.pad(4);
    builder.putFloat(z);
    builder.putFloat(y);
    builder.putFloat(x);
    return builder.offset();
  }
};

