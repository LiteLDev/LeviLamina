#include "../../Header/MC/FloatTag.hpp"
namespace MC
{
inline float ^ FloatTag::Value()
{
    return NativePtr->value();
}

inline FloatTag ^ FloatTag::operator=(float val)
{
    *NativePtr = val;
    return this;
}

inline FloatTag ^ FloatTag::Create()
{
    return gcnew FloatTag(::FloatTag::create().release(), true);
}

inline FloatTag ^ FloatTag::Create(float val)
{
    return gcnew FloatTag(::FloatTag::create(val).release(), true);
}

inline bool FloatTag::Set(float val)
{
    return NativePtr->set(val);
}

inline float FloatTag::Get()
{
    return NativePtr->get();
}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::FloatTag::DeleteChildren()
{
    ((class ::FloatTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::FloatTag::ToString()
{
    auto __ret = ((class ::FloatTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::FloatTag::GetId()
{
    auto __ret = ((class ::FloatTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::FloatTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::FloatTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::FloatTag::hash()
{
    auto __ret = ((class ::FloatTag*)NativePtr)->hash();
    return __ret;
}

MC::FloatTag::operator MC::FloatTag ^(float _0) {
    auto __ret = new ::FloatTag(_0);
    return (__ret == nullptr) ? nullptr : gcnew ::MC::FloatTag((class ::FloatTag*)__ret, true);
}

#endif // INCLUDE_MCAPI
