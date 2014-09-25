// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_MONSTERTEST_MYGAME_EXAMPLE_H_
#define FLATBUFFERS_GENERATED_MONSTERTEST_MYGAME_EXAMPLE_H_

#include "flatbuffers/flatbuffers.h"

namespace MyGame {
namespace OtherNameSpace {
struct Unused;
}  // namespace OtherNameSpace
}  // namespace MyGame

namespace MyGame {
namespace Example {

struct Test;
struct Vec3;
struct Stat;
struct Monster;

enum Color {
  Color_Red = 1,
  Color_Green = 2,
  Color_Blue = 8
};

inline const char **EnumNamesColor() {
  static const char *names[] = { "Red", "Green", "", "", "", "", "", "Blue", nullptr };
  return names;
}

inline const char *EnumNameColor(Color e) { return EnumNamesColor()[e - Color_Red]; }

enum Any {
  Any_NONE = 0,
  Any_Monster = 1
};

inline const char **EnumNamesAny() {
  static const char *names[] = { "NONE", "Monster", nullptr };
  return names;
}

inline const char *EnumNameAny(Any e) { return EnumNamesAny()[e]; }

inline bool VerifyAny(flatbuffers::Verifier &verifier, const void *union_obj, uint8_t type);

MANUALLY_ALIGNED_STRUCT(2) Test {
 private:
  int16_t a_;
  int8_t b_;
  int8_t __padding0;

 public:
  Test(int16_t a, int8_t b)
    : a_(flatbuffers::EndianScalar(a)), b_(flatbuffers::EndianScalar(b)), __padding0(0) { (void)__padding0; }

  int16_t a() const { return flatbuffers::EndianScalar(a_); }
  int8_t b() const { return flatbuffers::EndianScalar(b_); }
};
STRUCT_END(Test, 4);

MANUALLY_ALIGNED_STRUCT(16) Vec3 {
 private:
  float x_;
  float y_;
  float z_;
  int32_t __padding0;
  double test1_;
  int8_t test2_;
  int8_t __padding1;
  Test test3_;
  int16_t __padding2;

 public:
  Vec3(float x, float y, float z, double test1, Color test2, const Test &test3)
    : x_(flatbuffers::EndianScalar(x)), y_(flatbuffers::EndianScalar(y)), z_(flatbuffers::EndianScalar(z)), __padding0(0), test1_(flatbuffers::EndianScalar(test1)), test2_(flatbuffers::EndianScalar(static_cast<int8_t>(test2))), __padding1(0), test3_(test3), __padding2(0) { (void)__padding0; (void)__padding1; (void)__padding2; }

  float x() const { return flatbuffers::EndianScalar(x_); }
  float y() const { return flatbuffers::EndianScalar(y_); }
  float z() const { return flatbuffers::EndianScalar(z_); }
  double test1() const { return flatbuffers::EndianScalar(test1_); }
  Color test2() const { return static_cast<Color>(flatbuffers::EndianScalar(test2_)); }
  const Test &test3() const { return test3_; }
};
STRUCT_END(Vec3, 32);

struct Stat : private flatbuffers::Table {
  const flatbuffers::String *id() const { return GetPointer<const flatbuffers::String *>(4); }
  int64_t val() const { return GetField<int64_t>(6, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* id */) &&
           verifier.Verify(id()) &&
           VerifyField<int64_t>(verifier, 6 /* val */) &&
           verifier.EndTable();
  }
};

struct StatBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(flatbuffers::Offset<flatbuffers::String> id) { fbb_.AddOffset(4, id); }
  void add_val(int64_t val) { fbb_.AddElement<int64_t>(6, val, 0); }
  StatBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  StatBuilder &operator=(const StatBuilder &);
  flatbuffers::Offset<Stat> Finish() {
    auto o = flatbuffers::Offset<Stat>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<Stat> CreateStat(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> id = 0,
   int64_t val = 0) {
  StatBuilder builder_(_fbb);
  builder_.add_val(val);
  builder_.add_id(id);
  return builder_.Finish();
}

struct Monster : private flatbuffers::Table {
  const Vec3 *pos() const { return GetStruct<const Vec3 *>(4); }
  int16_t mana() const { return GetField<int16_t>(6, 150); }
  int16_t hp() const { return GetField<int16_t>(8, 100); }
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(10); }
  const flatbuffers::Vector<uint8_t> *inventory() const { return GetPointer<const flatbuffers::Vector<uint8_t> *>(14); }
  Color color() const { return static_cast<Color>(GetField<int8_t>(16, 8)); }
  Any test_type() const { return static_cast<Any>(GetField<uint8_t>(18, 0)); }
  const void *test() const { return GetPointer<const void *>(20); }
  const flatbuffers::Vector<const Test *> *test4() const { return GetPointer<const flatbuffers::Vector<const Test *> *>(22); }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *testarrayofstring() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(24); }
  /// an example documentation comment: this will end up in the generated code
  /// multiline too
  const flatbuffers::Vector<flatbuffers::Offset<Monster>> *testarrayoftables() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Monster>> *>(26); }
  const Monster *enemy() const { return GetPointer<const Monster *>(28); }
  const flatbuffers::Vector<uint8_t> *testnestedflatbuffer() const { return GetPointer<const flatbuffers::Vector<uint8_t> *>(30); }
  const Monster *testnestedflatbuffer_nested_root() { return flatbuffers::GetRoot<Monster>(testnestedflatbuffer()->Data()); }
  const Stat *testempty() const { return GetPointer<const Stat *>(32); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Vec3>(verifier, 4 /* pos */) &&
           VerifyField<int16_t>(verifier, 6 /* mana */) &&
           VerifyField<int16_t>(verifier, 8 /* hp */) &&
           VerifyFieldRequired<flatbuffers::uoffset_t>(verifier, 10 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* inventory */) &&
           verifier.Verify(inventory()) &&
           VerifyField<int8_t>(verifier, 16 /* color */) &&
           VerifyField<uint8_t>(verifier, 18 /* test_type */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 20 /* test */) &&
           VerifyAny(verifier, test(), test_type()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 22 /* test4 */) &&
           verifier.Verify(test4()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 24 /* testarrayofstring */) &&
           verifier.Verify(testarrayofstring()) &&
           verifier.VerifyVectorOfStrings(testarrayofstring()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 26 /* testarrayoftables */) &&
           verifier.Verify(testarrayoftables()) &&
           verifier.VerifyVectorOfTables(testarrayoftables()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 28 /* enemy */) &&
           verifier.VerifyTable(enemy()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 30 /* testnestedflatbuffer */) &&
           verifier.Verify(testnestedflatbuffer()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 32 /* testempty */) &&
           verifier.VerifyTable(testempty()) &&
           verifier.EndTable();
  }
};

struct MonsterBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pos(const Vec3 *pos) { fbb_.AddStruct(4, pos); }
  void add_mana(int16_t mana) { fbb_.AddElement<int16_t>(6, mana, 150); }
  void add_hp(int16_t hp) { fbb_.AddElement<int16_t>(8, hp, 100); }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(10, name); }
  void add_inventory(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> inventory) { fbb_.AddOffset(14, inventory); }
  void add_color(Color color) { fbb_.AddElement<int8_t>(16, static_cast<int8_t>(color), 8); }
  void add_test_type(Any test_type) { fbb_.AddElement<uint8_t>(18, static_cast<uint8_t>(test_type), 0); }
  void add_test(flatbuffers::Offset<void> test) { fbb_.AddOffset(20, test); }
  void add_test4(flatbuffers::Offset<flatbuffers::Vector<const Test *>> test4) { fbb_.AddOffset(22, test4); }
  void add_testarrayofstring(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> testarrayofstring) { fbb_.AddOffset(24, testarrayofstring); }
  void add_testarrayoftables(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Monster>>> testarrayoftables) { fbb_.AddOffset(26, testarrayoftables); }
  void add_enemy(flatbuffers::Offset<Monster> enemy) { fbb_.AddOffset(28, enemy); }
  void add_testnestedflatbuffer(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> testnestedflatbuffer) { fbb_.AddOffset(30, testnestedflatbuffer); }
  void add_testempty(flatbuffers::Offset<Stat> testempty) { fbb_.AddOffset(32, testempty); }
  MonsterBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MonsterBuilder &operator=(const MonsterBuilder &);
  flatbuffers::Offset<Monster> Finish() {
    auto o = flatbuffers::Offset<Monster>(fbb_.EndTable(start_, 15));
    fbb_.Required(o, 10);  // name
    return o;
  }
};

inline flatbuffers::Offset<Monster> CreateMonster(flatbuffers::FlatBufferBuilder &_fbb,
   const Vec3 *pos = 0,
   int16_t mana = 150,
   int16_t hp = 100,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   flatbuffers::Offset<flatbuffers::Vector<uint8_t>> inventory = 0,
   Color color = Color_Blue,
   Any test_type = Any_NONE,
   flatbuffers::Offset<void> test = 0,
   flatbuffers::Offset<flatbuffers::Vector<const Test *>> test4 = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> testarrayofstring = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Monster>>> testarrayoftables = 0,
   flatbuffers::Offset<Monster> enemy = 0,
   flatbuffers::Offset<flatbuffers::Vector<uint8_t>> testnestedflatbuffer = 0,
   flatbuffers::Offset<Stat> testempty = 0) {
  MonsterBuilder builder_(_fbb);
  builder_.add_testempty(testempty);
  builder_.add_testnestedflatbuffer(testnestedflatbuffer);
  builder_.add_enemy(enemy);
  builder_.add_testarrayoftables(testarrayoftables);
  builder_.add_testarrayofstring(testarrayofstring);
  builder_.add_test4(test4);
  builder_.add_test(test);
  builder_.add_inventory(inventory);
  builder_.add_name(name);
  builder_.add_pos(pos);
  builder_.add_hp(hp);
  builder_.add_mana(mana);
  builder_.add_test_type(test_type);
  builder_.add_color(color);
  return builder_.Finish();
}

inline bool VerifyAny(flatbuffers::Verifier &verifier, const void *union_obj, uint8_t type) {
  switch (type) {
    case Any_NONE: return true;
    case Any_Monster: return verifier.VerifyTable(reinterpret_cast<const Monster *>(union_obj));
    default: return false;
  }
}

inline const Monster *GetMonster(const void *buf) { return flatbuffers::GetRoot<Monster>(buf); }

inline bool VerifyMonsterBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Monster>(); }

inline void FinishMonsterBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Monster> root) { fbb.Finish(root, "MONS"); }

inline bool MonsterBufferHasIdentifier(const void *buf) { return flatbuffers::BufferHasIdentifier(buf, "MONS"); }

}  // namespace Example
}  // namespace MyGame

#endif  // FLATBUFFERS_GENERATED_MONSTERTEST_MYGAME_EXAMPLE_H_
