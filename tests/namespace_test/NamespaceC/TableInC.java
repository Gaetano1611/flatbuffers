// automatically generated by the FlatBuffers compiler, do not modify

package NamespaceC;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class TableInC extends Table {
  public static TableInC getRootAsTableInC(ByteBuffer _bb) { return getRootAsTableInC(_bb, new TableInC()); }
  public static TableInC getRootAsTableInC(ByteBuffer _bb, TableInC obj) { Constants.FLATBUFFERS_1_11_1(); _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; vtable_start = bb_pos - bb.getInt(bb_pos); vtable_size = bb.getShort(vtable_start); }
  public TableInC __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public NamespaceA.TableInFirstNS referToA1() { return referToA1(new NamespaceA.TableInFirstNS()); }
  public NamespaceA.TableInFirstNS referToA1(NamespaceA.TableInFirstNS obj) { int o = __offset(4); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public NamespaceA.SecondTableInA referToA2() { return referToA2(new NamespaceA.SecondTableInA()); }
  public NamespaceA.SecondTableInA referToA2(NamespaceA.SecondTableInA obj) { int o = __offset(6); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }

  public static int createTableInC(FlatBufferBuilder builder,
      int refer_to_a1Offset,
      int refer_to_a2Offset) {
    builder.startTable(2);
    TableInC.addReferToA2(builder, refer_to_a2Offset);
    TableInC.addReferToA1(builder, refer_to_a1Offset);
    return TableInC.endTableInC(builder);
  }

  public static void startTableInC(FlatBufferBuilder builder) { builder.startTable(2); }
  public static void addReferToA1(FlatBufferBuilder builder, int referToA1Offset) { builder.addOffset(0, referToA1Offset, 0); }
  public static void addReferToA2(FlatBufferBuilder builder, int referToA2Offset) { builder.addOffset(1, referToA2Offset, 0); }
  public static int endTableInC(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
}

