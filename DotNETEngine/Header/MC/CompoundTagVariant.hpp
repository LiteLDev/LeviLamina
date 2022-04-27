#pragma once

#include "Tag.hpp"
#include "EndTag.hpp"
#include "ByteTag.hpp"
#include "ShortTag.hpp"
#include "IntTag.hpp"
#include "Int64Tag.hpp"
#include "FloatTag.hpp"
#include "DoubleTag.hpp"
#include "StringTag.hpp"
#include "ListTag.hpp"
#include "ByteArrayTag.hpp"
#include "IntArrayTag.hpp"
#include "CompoundTag.hpp"

#include <MC/CompoundTagVariant.hpp>

namespace MC
{
public
ref class CompoundTagVariant : ClassTemplate<CompoundTagVariant, ::CompoundTagVariant>
{
public:
    __ctor(CompoundTagVariant, ::CompoundTagVariant);
    
    inline Tag ^ AsTag();
    inline ByteTag ^ AsByteTag();
    inline ShortTag ^ AsShortTag();
    inline IntTag ^ AsIntTag();
    inline Int64Tag ^ AsInt64Tag();
    inline FloatTag ^ AsFloatTag();
    inline DoubleTag ^ AsDoubleTag();
    inline StringTag ^ AsStringTag();
    inline ListTag ^ AsListTag();
    inline EndTag ^ AsEndTag();
    inline CompoundTag ^ AsCompoundTag();
    inline ByteArrayTag ^ AsByteArrayTag();
    inline IntArrayTag ^ AsIntArrayTag();

    property Tag::Type TagType
    {
        Tag::Type get();
    };
};
} // namespace MC