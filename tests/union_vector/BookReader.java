// automatically generated by the FlatBuffers compiler, do not modify

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class BookReader extends Struct {
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public BookReader __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public int booksRead() { return bb.getInt(bb_pos + 0); }
  public void mutateBooksRead(int books_read) { bb.putInt(bb_pos + 0, books_read); }

  public static int createBookReader(FlatBufferBuilder builder, int booksRead) {
    builder.prep(4, 4);
    builder.putInt(booksRead);
    return builder.offset();
  }
}

