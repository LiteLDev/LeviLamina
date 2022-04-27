#include "../../Header/MC/DoubleTag.hpp"
namespace MC
{
inline double ^ DoubleTag::Value()
{
    return NativePtr->value();
}

inline DoubleTag ^ DoubleTag::operator=(double val)
{
    *NativePtr = val;
    return this;
}

inline DoubleTag ^ DoubleTag::Create()
{
    return gcnew DoubleTag(::DoubleTag::create().release(), true);
}

inline DoubleTag ^ DoubleTag::Create(double val)
{
    return gcnew DoubleTag(::DoubleTag::create(val).release(), true);
}

inline bool DoubleTag::Set(double val)
{
    return NativePtr->set(val);
}

inline double DoubleTag::Get()
{
    return NativePtr->get();
}
} // namespace MC

#ifdef INCLUDE_MCAPI

void MC::DoubleTag::DeleteChildren()
{
    ((class ::DoubleTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::DoubleTag::ToString()
{
    auto __ret = ((class ::DoubleTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::DoubleTag::GetId()
{
    auto __ret = ((class ::DoubleTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::DoubleTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::DoubleTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::DoubleTag::hash()
{
    auto __ret = ((class ::DoubleTag*)NativePtr)->hash();
    return __ret;
}
#endif // INCLUDE_MCAPI
