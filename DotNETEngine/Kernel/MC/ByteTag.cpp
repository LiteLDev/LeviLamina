#include "../../Header/MC/ByteTag.hpp"
namespace MC
{
inline unsigned char ByteTag::Value()
{
    return NativePtr->value();
}

inline ByteTag ^ ByteTag::operator=(unsigned char val)
{
    *NativePtr = val;
    return this;
}

inline ByteTag ^ ByteTag::Create()
{
    return gcnew ByteTag(::ByteTag::create().release(), true);
}

inline bool ByteTag::Set(unsigned char val)
{
    return NativePtr->set(val);
}

inline unsigned char ByteTag::Get()
{
    return NativePtr->get();
}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::ByteTag::DeleteChildren()
{
    ((class ::ByteTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::ByteTag::ToString()
{
    auto __ret = ((class ::ByteTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::ByteTag::GetId()
{
    auto __ret = ((class ::ByteTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::ByteTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::ByteTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::ByteTag::hash()
{
    auto __ret = ((class ::ByteTag*)NativePtr)->hash();
    return __ret;
}

MC::ByteTag::ByteTag()
    : MC::Tag((::Tag*)nullptr)
{
    OwnsNativeInstance = true;
    NativePtr = new class ::ByteTag();
}

MC::ByteTag::operator MC::ByteTag ^(unsigned char _0) {
    auto __ret = new ::ByteTag(_0);
    return (__ret == nullptr) ? nullptr : gcnew ::MC::ByteTag((class ::ByteTag*)__ret, true);
}
#endif // INCLUDE_MCAPI
