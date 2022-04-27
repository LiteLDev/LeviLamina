#include "../../Header/MC/StringTag.hpp"
namespace MC
{

inline System::String ^ StringTag::Value()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->value());
}

inline StringTag ^ StringTag::operator=(std::string val)
{
    *NativePtr = val;
    return this;
}

inline StringTag ^ StringTag::Create()
{
    return gcnew StringTag(::StringTag::create().release(), true);
}

inline bool StringTag::Set(System::String ^ val)
{
    return NativePtr->set(marshalString<Encoding::E_UTF8>(val));
}

inline System::String ^ StringTag::Get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->get());
}
} // namespace MC


#ifdef INCLUDE_MCAPI
void MC::StringTag::DeleteChildren()
{
    ((class ::StringTag*)NativePtr)->deleteChildren();
}

::System::String ^ MC::StringTag::ToString()
{
    auto __ret = ((class ::StringTag*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

MC::Tag::Type MC::StringTag::GetId()
{
    auto __ret = ((class ::StringTag*)NativePtr)->getId();
    return (MC::Tag::Type)__ret;
}

bool MC::StringTag::Equals(MC::Tag ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Tag*)_0->NativePtr;
    auto __ret = ((class ::StringTag*)NativePtr)->equals(__arg0);
    return __ret;
}

unsigned long long MC::StringTag::hash()
{
    auto __ret = ((class ::StringTag*)NativePtr)->hash();
    return __ret;
}

MC::StringTag::StringTag(::System::String ^ _0)
    : MC::Tag((::Tag*)nullptr)
{
    OwnsNativeInstance = true;
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    NativePtr = new class ::StringTag(__arg0);
}

MC::StringTag::StringTag()
    : MC::Tag((::Tag*)nullptr)
{
    OwnsNativeInstance = true;
    NativePtr = new class ::StringTag();
}
#endif // INCLUDE_MCAPI
