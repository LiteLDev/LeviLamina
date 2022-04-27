#include "../../Header/MC/CompoundTagVariant.hpp"

#include "../../Header/MC/ByteArrayTag.hpp"
#include "../../Header/MC/ByteTag.hpp"
#include "../../Header/MC/CompoundTag.hpp"
#include "../../Header/MC/DoubleTag.hpp"
#include "../../Header/MC/ShortTag.hpp"
#include "../../Header/MC/EndTag.hpp"
#include "../../Header/MC/FloatTag.hpp"
#include "../../Header/MC/Int64Tag.hpp"
#include "../../Header/MC/IntArrayTag.hpp"
#include "../../Header/MC/IntTag.hpp"
#include "../../Header/MC/ListTag.hpp"
#include "../../Header/MC/ShortTag.hpp"
#include "../../Header/MC/StringTag.hpp"
#include "../../Header/MC/Tag.hpp"

namespace MC
{

inline Tag::Type CompoundTagVariant::TagType::get()
{
    return Tag::Type(NativePtr->getTagType());
}
inline Tag ^ CompoundTagVariant::AsTag()
{
    return gcnew Tag(NativePtr->asTag());
}
inline ByteTag ^ CompoundTagVariant::AsByteTag()
{
    return gcnew ByteTag(NativePtr->asByteTag());
}
inline ShortTag ^ CompoundTagVariant::AsShortTag()
{
    return gcnew ShortTag(NativePtr->asShortTag());
}
inline IntTag ^ CompoundTagVariant::AsIntTag()
{
    return gcnew IntTag(NativePtr->asIntTag());
}
inline Int64Tag ^ CompoundTagVariant::AsInt64Tag()
{
    return gcnew Int64Tag(NativePtr->asInt64Tag());
}
inline FloatTag ^ CompoundTagVariant::AsFloatTag()
{
    return gcnew FloatTag(NativePtr->asFloatTag());
}
inline DoubleTag ^ CompoundTagVariant::AsDoubleTag()
{
    return gcnew DoubleTag(NativePtr->asDoubleTag());
}
inline StringTag ^ CompoundTagVariant::AsStringTag()
{
    return gcnew StringTag(NativePtr->asStringTag());
}
inline ListTag ^ CompoundTagVariant::AsListTag()
{
    return gcnew ListTag(NativePtr->asListTag());
}
inline EndTag ^ CompoundTagVariant::AsEndTag()
{
    return gcnew EndTag(NativePtr->asEndTag());
}

inline CompoundTag ^ CompoundTagVariant::AsCompoundTag()
{
    return gcnew CompoundTag(NativePtr->asCompoundTag());
}

inline ByteArrayTag ^ CompoundTagVariant::AsByteArrayTag()
{
    return gcnew ByteArrayTag(NativePtr->asByteArrayTag());
}
inline IntArrayTag ^ CompoundTagVariant::AsIntArrayTag()
{
    return gcnew IntArrayTag(NativePtr->asIntArrayTag());
}
} // namespace MC