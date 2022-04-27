#include "../../Header/MC/IntTag.hpp"
namespace MC
{
inline int ^ IntTag::Value()
{
    return NativePtr->value();
}

inline IntTag ^ IntTag::operator=(int val)
{
    *NativePtr = val;
    return this;
}

inline IntTag ^ IntTag::Create()
{
    return gcnew IntTag(::IntTag::create().release(), true);
}

inline IntTag ^ IntTag::Create(int val)
{
    return gcnew IntTag(::IntTag::create(val).release(), true);
}

inline bool IntTag::Set(int val)
{
    return NativePtr->set(val);
}

inline short IntTag::Get()
{
    return NativePtr->get();
}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::IntTag::DeleteChildren()
{
    ((class ::IntTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::IntTag::ToString()
{
    auto __ret = ((class ::IntTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::IntTag::GetId()
{
    auto __ret = ((class ::IntTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::IntTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::IntTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::IntTag::hash()
{
    auto __ret = ((class ::IntTag*)NativePtr)->hash();
    return __ret;
}


MC::IntTag::operator MC::IntTag ^(int _0) {
    auto __ret = new ::IntTag(_0);
    return (__ret == nullptr) ? nullptr : gcnew ::MC::IntTag((class ::IntTag*)__ret, true);
}
#endif // INCLUDE_MCAPI
