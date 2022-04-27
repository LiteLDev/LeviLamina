#pragma once
#include "Types.hpp"
#include <MC/Tag.hpp>

namespace MC
{
ref class EndTag;
ref class ByteTag;
ref class ShortTag;
ref class IntTag;
ref class Int64Tag;
ref class FloatTag;
ref class DoubleTag;
ref class StringTag;
ref class ListTag;
ref class ByteArrayTag;
ref class EndTag;
ref class IntArrayTag;
ref class CompoundTag;
} // namespace MC

namespace MC
{
public ref class Tag : ClassTemplate<Tag, ::Tag>
{
public:
    __ctor(Tag, ::Tag);

public:
    enum class Type : uint8_t
    {
        End,
        Byte,
        Short,
        Int,
        Int64,
        Float,
        Double,
        ByteArray,
        String,
        List,
        Compound,
        IntArray,
    };
    property Type TagType
    {
        Type get();
    };

    inline EndTag ^ AsEndTag();
    inline ByteTag ^ AsByteTag();
    inline ShortTag ^ AsShortTag();
    inline IntTag ^ AsIntTag();
    inline Int64Tag ^ AsInt64Tag();
    inline FloatTag ^ AsFloatTag();
    inline DoubleTag ^ AsDoubleTag();
    inline StringTag ^ AsStringTag();
    inline ListTag ^ AsListTag();
    inline ByteArrayTag ^ AsByteArrayTag();
    inline IntArrayTag ^ AsIntArrayTag();
    inline CompoundTag ^ AsCompoundTag();

    inline System::String ^ ToJson(int formatIndent);

#ifdef INCLUDE_MCAPI

    property MC::Tag::Type Id
    {
        MC::Tag::Type get();
    }

    property unsigned long long Hash
    {
        unsigned long long get();
    }

    virtual void DeleteChildren();

    virtual ::System::String ^ ToString() override;

    virtual bool Equals(MC::Tag ^ _0);

    static ::System::String ^ GetTagName(MC::Tag::Type _0);

    static property ::System::String ^ NullString {
        ::System::String ^ get();
    }
#endif // INCLUDE_MCAPI
};
} // namespace MC
