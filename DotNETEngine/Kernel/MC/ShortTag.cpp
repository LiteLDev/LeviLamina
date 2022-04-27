#include "../../Header/MC/ShortTag.hpp"
namespace MC
{
inline short ^ ShortTag::Value()
{
    return NativePtr->value();
}

inline ShortTag ^ ShortTag::operator=(short val)
{
    *NativePtr = val;
    return this;
}

inline ShortTag ^ ShortTag::Create()
{
    return gcnew ShortTag(::ShortTag::create().release(), true);
}

inline ShortTag ^ ShortTag::Create(short val)
{
    return gcnew ShortTag(::ShortTag::create(val).release(), true);
}

inline bool ShortTag::Set(short val)
{
    return NativePtr->set(val);
}

inline short ShortTag::Get()
{
    return NativePtr->get();
}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::ShortTag::DeleteChildren()
{
    ((class ::ShortTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::ShortTag::ToString()
{
    auto __ret = ((class ::ShortTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::ShortTag::GetId()
{
    auto __ret = ((class ::ShortTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::ShortTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::ShortTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::ShortTag::hash()
{
    auto __ret = ((class ::ShortTag*)NativePtr)->hash();
    return __ret;
}

MC::ShortTag::operator MC::ShortTag ^(short _0) {
    auto __ret = new ::ShortTag(_0);
    return (__ret == nullptr) ? nullptr : gcnew ::MC::ShortTag((class ::ShortTag*)__ret, true);
}


#endif // INCLUDE_MCAPI
