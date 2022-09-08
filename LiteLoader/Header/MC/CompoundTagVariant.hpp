/**
 * @file  CompoundTagVariant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Tag.hpp"
class EndTag;
class ByteTag;
class ShortTag;
class IntTag;
class Int64Tag;
class FloatTag;
class DoubleTag;
class ByteArrayTag;
class StringTag;
class ListTag;
class CompoundTag;
class IntArrayTag;

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundTagVariant.
 *
 */
class CompoundTagVariant {

#define AFTER_EXTRA
// Add Member There
//#define AllTagTypes EndTag, ByteTag, ShortTag, IntTag, Int64Tag, FloatTag, DoubleTag, ByteArrayTag, StringTag, ListTag, CompoundTag, IntArrayTag
//std::variant<AllTagTypes> tagStorage;
char filler[0x30]; // IDA CompoundTagVariant::emplace

public:
    inline Tag::Type getTagType() {
        return dAccess<Tag::Type, 40>(this);
    }
    inline Tag* asTag() {
        return (Tag*)this;
    }
    inline EndTag* asEndTag() {
        return (EndTag*)this;
    }
    inline ByteTag* asByteTag() {
        return (ByteTag*)this;
    }
    inline ShortTag* asShortTag(){
        return (ShortTag*)this;
    }
    inline IntTag* asIntTag(){
        return (IntTag*)this;
    }
    inline Int64Tag* asInt64Tag(){
        return (Int64Tag*)this;
    }
    inline FloatTag* asFloatTag(){
        return (FloatTag*)this;
    }
    inline DoubleTag* asDoubleTag(){
        return (DoubleTag*)this;
    }
    inline StringTag* asStringTag(){
        return (StringTag*)this;
    }
    inline ListTag* asListTag(){
        return (ListTag*)this;
    }
    inline CompoundTag* asCompoundTag(){
        return (CompoundTag*)this;
    }
    inline ByteArrayTag* asByteArrayTag(){
        return (ByteArrayTag*)this;
    }
    inline IntArrayTag* asIntArrayTag(){
        return (IntArrayTag*)this;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGVARIANT
public:
    class CompoundTagVariant& operator=(class CompoundTagVariant const &) = delete;
    CompoundTagVariant(class CompoundTagVariant const &) = delete;
    CompoundTagVariant() = delete;
#endif

public:
    /**
     * @symbol ??0CompoundTagVariant@@QEAA@$$QEAVTag@@@Z
     * @hash   -2137456803
     */
    MCAPI CompoundTagVariant(class Tag &&);
    /**
     * @symbol ?emplace@CompoundTagVariant@@QEAAAEAVTag@@$$QEAV2@@Z
     * @hash   -459948903
     */
    MCAPI class Tag & emplace(class Tag &&);
    /**
     * @symbol ?get@CompoundTagVariant@@QEAAPEAVTag@@XZ
     * @hash   -1073666769
     */
    MCAPI class Tag * get();
    /**
     * @symbol ?get@CompoundTagVariant@@QEBAPEBVTag@@XZ
     * @hash   200063465
     */
    MCAPI class Tag const * get() const;
    /**
     * @symbol ??1CompoundTagVariant@@QEAA@XZ
     * @hash   -635066976
     */
    MCAPI ~CompoundTagVariant();

};