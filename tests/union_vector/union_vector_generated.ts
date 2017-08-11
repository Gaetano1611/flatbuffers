// automatically generated by the FlatBuffers compiler, do not modify

/**
 * @enum
 */
export namespace {
export enum Character{
  NONE= 0,
  MuLan= 1,
  Rapunzel= 2,
  Belle= 3,
  BookFan= 4,
  Other= 5,
  Unused= 6
}};

/**
 * @constructor
 */
export namespace {
export class Attacker {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  bb: flatbuffers.ByteBuffer;

  /**
   * @type {number}
   */
  bb_pos:number = 0;
/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {Attacker}
 */
__init(i:number, bb:flatbuffers.ByteBuffer):Attacker {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {Attacker=} obj
 * @returns {Attacker}
 */
static getRootAsAttacker(bb:flatbuffers.ByteBuffer, obj?:Attacker):Attacker {
  return (obj || new Attacker).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @returns {number}
 */
swordAttackDamage():number {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.readInt32(this.bb_pos + offset) : 0;
};

/**
 * @param {number} value
 * @returns {boolean}
 */
mutate_sword_attack_damage(value:number):boolean {
  var offset = this.bb.__offset(this.bb_pos, 4);

  if (offset === 0) {
    return false;
  }

  this.bb.writeInt32(this.bb_pos + offset, value);
  return true;
};

/**
 * @param {flatbuffers.Builder} builder
 */
static startAttacker(builder:flatbuffers.Builder) {
  builder.startObject(1);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} swordAttackDamage
 */
static addSwordAttackDamage(builder:flatbuffers.Builder, swordAttackDamage:number) {
  builder.addFieldInt32(0, swordAttackDamage, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
static endAttacker(builder:flatbuffers.Builder):flatbuffers.Offset {
  var offset = builder.endObject();
  return offset;
};

}
}
/**
 * @constructor
 */
export namespace {
export class Rapunzel {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  bb: flatbuffers.ByteBuffer;

  /**
   * @type {number}
   */
  bb_pos:number = 0;
/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {Rapunzel}
 */
__init(i:number, bb:flatbuffers.ByteBuffer):Rapunzel {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @returns {number}
 */
hairLength():number {
  return this.bb.readInt32(this.bb_pos);
};

/**
 * @param {number} value
 * @returns {boolean}
 */
mutate_hair_length(value:number):boolean {
  var offset = this.bb.__offset(this.bb_pos, 0);

  if (offset === 0) {
    return false;
  }

  this.bb.writeInt32(this.bb_pos + offset, value);
  return true;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} hair_length
 * @returns {flatbuffers.Offset}
 */
static createRapunzel(builder:flatbuffers.Builder, hair_length: number):flatbuffers.Offset {
  builder.prep(4, 4);
  builder.writeInt32(hair_length);
  return builder.offset();
};

}
}
/**
 * @constructor
 */
export namespace {
export class BookReader {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  bb: flatbuffers.ByteBuffer;

  /**
   * @type {number}
   */
  bb_pos:number = 0;
/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {BookReader}
 */
__init(i:number, bb:flatbuffers.ByteBuffer):BookReader {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @returns {number}
 */
booksRead():number {
  return this.bb.readInt32(this.bb_pos);
};

/**
 * @param {number} value
 * @returns {boolean}
 */
mutate_books_read(value:number):boolean {
  var offset = this.bb.__offset(this.bb_pos, 0);

  if (offset === 0) {
    return false;
  }

  this.bb.writeInt32(this.bb_pos + offset, value);
  return true;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} books_read
 * @returns {flatbuffers.Offset}
 */
static createBookReader(builder:flatbuffers.Builder, books_read: number):flatbuffers.Offset {
  builder.prep(4, 4);
  builder.writeInt32(books_read);
  return builder.offset();
};

}
}
/**
 * @constructor
 */
export namespace {
export class Movie {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  bb: flatbuffers.ByteBuffer;

  /**
   * @type {number}
   */
  bb_pos:number = 0;
/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {Movie}
 */
__init(i:number, bb:flatbuffers.ByteBuffer):Movie {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {Movie=} obj
 * @returns {Movie}
 */
static getRootAsMovie(bb:flatbuffers.ByteBuffer, obj?:Movie):Movie {
  return (obj || new Movie).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {boolean}
 */
static bufferHasIdentifier(bb:flatbuffers.ByteBuffer):boolean {
  return bb.__has_identifier('MOVI');
};

/**
 * @returns {Character}
 */
mainCharacterType():Character {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? /** @type {Character} */ (this.bb.readUint8(this.bb_pos + offset)) : Character.NONE;
};

/**
 * @param {Character} value
 * @returns {boolean}
 */
mutate_main_character_type(value:Character):boolean {
  var offset = this.bb.__offset(this.bb_pos, 4);

  if (offset === 0) {
    return false;
  }

  this.bb.writeUint8(this.bb_pos + offset, value);
  return true;
};

/**
 * @param {flatbuffers.Table} obj
 * @returns {?flatbuffers.Table}
 */
mainCharacter<T extends flatbuffers.Table>(obj:T):T|null {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__union(obj, this.bb_pos + offset) : null;
};

/**
 * @param {number} index
 * @returns {Character}
 */
charactersType(index: number):Character|null {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? /** @type {Character} */ (this.bb.readUint8(this.bb.__vector(this.bb_pos + offset) + index)) : /** @type {Character} */ (0);
};

/**
 * @returns {number}
 */
charactersTypeLength():number {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @returns {Uint8Array}
 */
charactersTypeArray():Uint8Array|null {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? new Uint8Array(this.bb.bytes().buffer, this.bb.bytes().byteOffset + this.bb.__vector(this.bb_pos + offset), this.bb.__vector_len(this.bb_pos + offset)) : null;
};

/**
 * @param {number} index
 * @param {flatbuffers.Table=} obj
 * @returns {?flatbuffers.Table}
 */
characters<T extends flatbuffers.Table>(index: number, obj:T):T|null {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? this.bb.__union(obj, this.bb.__vector(this.bb_pos + offset) + index * 4) : null;
};

/**
 * @returns {number}
 */
charactersLength():number {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {flatbuffers.Builder} builder
 */
static startMovie(builder:flatbuffers.Builder) {
  builder.startObject(4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Character} mainCharacterType
 */
static addMainCharacterType(builder:flatbuffers.Builder, mainCharacterType:Character) {
  builder.addFieldInt8(0, mainCharacterType, Character.NONE);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} mainCharacterOffset
 */
static addMainCharacter(builder:flatbuffers.Builder, mainCharacterOffset:flatbuffers.Offset) {
  builder.addFieldOffset(1, mainCharacterOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} charactersTypeOffset
 */
static addCharactersType(builder:flatbuffers.Builder, charactersTypeOffset:flatbuffers.Offset) {
  builder.addFieldOffset(2, charactersTypeOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<Character>} data
 * @returns {flatbuffers.Offset}
 */
static createCharactersTypeVector(builder:flatbuffers.Builder, data:Character[]):flatbuffers.Offset {
  builder.startVector(1, data.length, 1);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addInt8(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
static startCharactersTypeVector(builder:flatbuffers.Builder, numElems:number) {
  builder.startVector(1, numElems, 1);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} charactersOffset
 */
static addCharacters(builder:flatbuffers.Builder, charactersOffset:flatbuffers.Offset) {
  builder.addFieldOffset(3, charactersOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
static createCharactersVector(builder:flatbuffers.Builder, data:flatbuffers.Offset[]):flatbuffers.Offset {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addOffset(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
static startCharactersVector(builder:flatbuffers.Builder, numElems:number) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
static endMovie(builder:flatbuffers.Builder):flatbuffers.Offset {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
static finishMovieBuffer(builder:flatbuffers.Builder, offset:flatbuffers.Offset) {
  builder.finish(offset, 'MOVI');
};

}
}
