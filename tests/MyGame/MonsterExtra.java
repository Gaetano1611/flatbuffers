// automatically generated by the FlatBuffers compiler, do not modify

package MyGame;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class MonsterExtra extends Table {
  public static MonsterExtra getRootAsMonsterExtra(ByteBuffer _bb) { return getRootAsMonsterExtra(_bb, new MonsterExtra()); }
  public static MonsterExtra getRootAsMonsterExtra(ByteBuffer _bb, MonsterExtra obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public MonsterExtra __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public float testfNan() { int o = __offset(4); return o != 0 ? bb.getFloat(o + bb_pos) : Float.NaN; }
  public boolean mutateTestfNan(float testf_nan) { int o = __offset(4); if (o != 0) { bb.putFloat(o + bb_pos, testf_nan); return true; } else { return false; } }
  public float testfPinf() { int o = __offset(6); return o != 0 ? bb.getFloat(o + bb_pos) : Float.POSITIVE_INFINITY; }
  public boolean mutateTestfPinf(float testf_pinf) { int o = __offset(6); if (o != 0) { bb.putFloat(o + bb_pos, testf_pinf); return true; } else { return false; } }
  public float testfNinf() { int o = __offset(8); return o != 0 ? bb.getFloat(o + bb_pos) : Float.NEGATIVE_INFINITY; }
  public boolean mutateTestfNinf(float testf_ninf) { int o = __offset(8); if (o != 0) { bb.putFloat(o + bb_pos, testf_ninf); return true; } else { return false; } }
  public double testdNan() { int o = __offset(10); return o != 0 ? bb.getDouble(o + bb_pos) : Double.NaN; }
  public boolean mutateTestdNan(double testd_nan) { int o = __offset(10); if (o != 0) { bb.putDouble(o + bb_pos, testd_nan); return true; } else { return false; } }
  public double testdPinf() { int o = __offset(12); return o != 0 ? bb.getDouble(o + bb_pos) : Double.POSITIVE_INFINITY; }
  public boolean mutateTestdPinf(double testd_pinf) { int o = __offset(12); if (o != 0) { bb.putDouble(o + bb_pos, testd_pinf); return true; } else { return false; } }
  public double testdNinf() { int o = __offset(14); return o != 0 ? bb.getDouble(o + bb_pos) : Double.NEGATIVE_INFINITY; }
  public boolean mutateTestdNinf(double testd_ninf) { int o = __offset(14); if (o != 0) { bb.putDouble(o + bb_pos, testd_ninf); return true; } else { return false; } }

  public static int createMonsterExtra(FlatBufferBuilder builder,
      float testf_nan,
      float testf_pinf,
      float testf_ninf,
      double testd_nan,
      double testd_pinf,
      double testd_ninf) {
    builder.startObject(6);
    MonsterExtra.addTestdNinf(builder, testd_ninf);
    MonsterExtra.addTestdPinf(builder, testd_pinf);
    MonsterExtra.addTestdNan(builder, testd_nan);
    MonsterExtra.addTestfNinf(builder, testf_ninf);
    MonsterExtra.addTestfPinf(builder, testf_pinf);
    MonsterExtra.addTestfNan(builder, testf_nan);
    return MonsterExtra.endMonsterExtra(builder);
  }

  public static void startMonsterExtra(FlatBufferBuilder builder) { builder.startObject(6); }
  public static void addTestfNan(FlatBufferBuilder builder, float testfNan) { builder.addFloat(0, testfNan, Float.NaN); }
  public static void addTestfPinf(FlatBufferBuilder builder, float testfPinf) { builder.addFloat(1, testfPinf, Float.POSITIVE_INFINITY); }
  public static void addTestfNinf(FlatBufferBuilder builder, float testfNinf) { builder.addFloat(2, testfNinf, Float.NEGATIVE_INFINITY); }
  public static void addTestdNan(FlatBufferBuilder builder, double testdNan) { builder.addDouble(3, testdNan, Double.NaN); }
  public static void addTestdPinf(FlatBufferBuilder builder, double testdPinf) { builder.addDouble(4, testdPinf, Double.POSITIVE_INFINITY); }
  public static void addTestdNinf(FlatBufferBuilder builder, double testdNinf) { builder.addDouble(5, testdNinf, Double.NEGATIVE_INFINITY); }
  public static int endMonsterExtra(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
}

