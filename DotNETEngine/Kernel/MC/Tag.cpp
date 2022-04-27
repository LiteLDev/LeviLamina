#include "../../Header/MC/Tag.hpp"

#include "../../Header/MC/EndTag.hpp"
#include "../../Header/MC/ByteTag.hpp"
#include "../../Header/MC/ShortTag.hpp"
#include "../../Header/MC/IntTag.hpp"
#include "../../Header/MC/Int64Tag.hpp"
#include "../../Header/MC/FloatTag.hpp"
#include "../../Header/MC/DoubleTag.hpp"
#include "../../Header/MC/ByteArrayTag.hpp"
#include "../../Header/MC/StringTag.hpp"
#include "../../Header/MC/ListTag.hpp"
#include "../../Header/MC/IntArrayTag.hpp"
#include "../../Header/MC/CompoundTag.hpp"

namespace MC
{
Tag::Type Tag::TagType::get()
{
    return Type(NativePtr->getTagType());
}

inline System::String ^ Tag::ToJson(int formatIndent)
{
    return marshalString<Encoding::E_UTF8>(NativePtr->toJson(formatIndent));
}

inline EndTag ^ Tag::AsEndTag()
{
    return gcnew EndTag(NativePtr->asEndTag());
}

inline ByteTag ^ Tag::AsByteTag()
{
    return gcnew ByteTag(NativePtr->asByteTag());
}

inline ShortTag ^ Tag::AsShortTag()
{
    return gcnew ShortTag(NativePtr->asShortTag());
}

inline IntTag ^ Tag::AsIntTag()
{
    return gcnew IntTag(NativePtr->asIntTag());
}

inline Int64Tag ^ Tag::AsInt64Tag()
{
    return gcnew Int64Tag(NativePtr->asInt64Tag());
}

inline FloatTag ^ Tag::AsFloatTag()
{
    return gcnew FloatTag(NativePtr->asFloatTag());
}

inline DoubleTag ^ Tag::AsDoubleTag()
{
    return gcnew DoubleTag(NativePtr->asDoubleTag());
}

inline StringTag ^ Tag::AsStringTag()
{
    return gcnew StringTag(NativePtr->asStringTag());
}

inline ListTag ^ Tag::AsListTag()
{
    return gcnew ListTag(NativePtr->asListTag());
}

inline ByteArrayTag ^ Tag::AsByteArrayTag()
{
    return gcnew ByteArrayTag(NativePtr->asByteArrayTag());
}

inline IntArrayTag ^ Tag::AsIntArrayTag()
{
    return gcnew IntArrayTag(NativePtr->asIntArrayTag());
}

inline CompoundTag ^ Tag::AsCompoundTag()
{
    return gcnew CompoundTag(NativePtr->asCompoundTag());
}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::Tag::DeleteChildren()
{
    ((class ::Tag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::Tag::ToString()
{
    auto __ret = ((class ::Tag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

bool MC::Tag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::Tag*)NativePtr)->equals(__arg0);
    return __ret;
}

::System::String ^ MC::Tag::GetTagName(MC::Tag::Type _0)
{
    auto __arg0 = (enum ::Tag::Type)_0;
    auto __ret = ::Tag::getTagName(__arg0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::Tag::Id::get()
{
    auto __ret = ((class ::Tag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

unsigned long long MC::Tag::Hash::get()
{
    auto __ret = ((class ::Tag*)NativePtr)->hash();
    return __ret;
}

::System::String ^ MC::Tag::NullString::get()
{
    return clix::marshalString<clix::E_UTF8>(::Tag::NullString);
}

#endif // INCLUDE_MCAPI
