// automatically generated by the FlatBuffers compiler, do not modify

package NamespaceA.NamespaceB;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
@javax.annotation.Generated(value="flatc")
public final class StructInNestedNS extends Struct {
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public StructInNestedNS __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public int a() { return bb.getInt(bb_pos + 0); }
  public void mutateA(int a) { bb.putInt(bb_pos + 0, a); }
  public int b() { return bb.getInt(bb_pos + 4); }
  public void mutateB(int b) { bb.putInt(bb_pos + 4, b); }

  public static int createStructInNestedNS(FlatBufferBuilder builder, int a, int b) {
    builder.prep(4, 8);
    builder.putInt(b);
    builder.putInt(a);
    return builder.offset();
  }
}

