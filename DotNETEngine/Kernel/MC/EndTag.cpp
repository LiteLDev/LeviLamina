#include "../../Header/MC/EndTag.hpp"
namespace MC
{
inline const nullptr_t EndTag::Value()
{
    return NativePtr->value();
}

inline EndTag ^ EndTag::Create()
{
    return gcnew EndTag(::EndTag::create().release(), true);
}

inline bool EndTag::Set()
{
    return NativePtr->set();
}

inline const nullptr_t EndTag::Get()
{
    return NativePtr->get();
}

} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::EndTag::DeleteChildren()
{
    ((class ::EndTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::EndTag::ToString()
{
    auto __ret = ((class ::EndTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::EndTag::GetId()
{
    auto __ret = ((class ::EndTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::EndTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::EndTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::EndTag::hash()
{
    auto __ret = ((class ::EndTag*)NativePtr)->hash();
    return __ret;
}

#endif // INCLUDE_MCAPI
