// automatically generated by the FlatBuffers compiler, do not modify

package MyGame.Example;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class ArrayStruct extends Struct {
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public ArrayStruct __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public float a() { return bb.getFloat(bb_pos + 0); }
  public void mutateA(float a) { bb.putFloat(bb_pos + 0, a); }
  public int b(int j) { return bb.getInt(bb_pos + 4 + j * 4); }
  public void mutateB(int j, int b) { bb.putInt(bb_pos + 4 + j * 4, b); }
  public byte c() { return bb.get(bb_pos + 64); }
  public void mutateC(byte c) { bb.put(bb_pos + 64, c); }
  public MyGame.Example.NestedStruct d(MyGame.Example.NestedStruct obj, int j) { return obj.__assign(bb_pos + 72 + j * 32, bb); }
  public int e() { return bb.getInt(bb_pos + 136); }
  public void mutateE(int e) { bb.putInt(bb_pos + 136, e); }
  public long f(int j) { return bb.getLong(bb_pos + 144 + j * 8); }
  public void mutateF(int j, long f) { bb.putLong(bb_pos + 144 + j * 8, f); }

  public static int createArrayStruct(FlatBufferBuilder builder, float a, int[] b, byte c, int[][] d_a, byte[] d_b, byte[][] d_c, long[][] d_d, int e, long[] f) {
    builder.prep(8, 160);
    for (int _idx0 = 2; _idx0 > 0; _idx0--) {
      builder.putLong(f[_idx0-1]);
    }
    builder.pad(4);
    builder.putInt(e);
    for (int _idx0 = 2; _idx0 > 0; _idx0--) {
      builder.prep(8, 32);
      for (int _idx1 = 2; _idx1 > 0; _idx1--) {
        builder.putLong(d_d[_idx0-1][_idx1-1]);
      }
      builder.pad(5);
      for (int _idx1 = 2; _idx1 > 0; _idx1--) {
        builder.putByte(d_c[_idx0-1][_idx1-1]);
      }
      builder.putByte(d_b[_idx0-1]);
      for (int _idx1 = 2; _idx1 > 0; _idx1--) {
        builder.putInt(d_a[_idx0-1][_idx1-1]);
      }
    }
    builder.pad(7);
    builder.putByte(c);
    for (int _idx0 = 15; _idx0 > 0; _idx0--) {
      builder.putInt(b[_idx0-1]);
    }
    builder.putFloat(a);
    return builder.offset();
  }
}

