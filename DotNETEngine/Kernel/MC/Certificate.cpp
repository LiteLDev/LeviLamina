#include "../../Header/MC/Certificate.hpp"
namespace MC
{
}



#ifdef INCLUDE_MCAPI

::System::String ^ MC::Certificate::ToString()
{
    auto __ret = ((class ::Certificate*)NativePtr)->toString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

bool MC::Certificate::Validate(long long _0)
{
    auto __ret = ((class ::Certificate*)NativePtr)->validate(_0);
    return __ret;
}

long long MC::Certificate::ExpirationDate::get()
{
    auto __ret = ((class ::Certificate*)NativePtr)->getExpirationDate();
    return __ret;
}

::System::String ^ MC::Certificate::IdentityPublicKey::get()
{
    auto __ret = ((class ::Certificate*)NativePtr)->getIdentityPublicKey();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

long long MC::Certificate::NotBeforeDate::get()
{
    auto __ret = ((class ::Certificate*)NativePtr)->getNotBeforeDate();
    return __ret;
}

bool MC::Certificate::IsValid::get()
{
    auto __ret = ((class ::Certificate*)NativePtr)->isValid();
    return __ret;
}

#endif // INCCLUDE_MCAPI
