#pragma once
#include <MC/Certificate.hpp>
#include "Types.hpp"
namespace MC
{
public
ref class Certificate : ClassTemplate<Certificate, ::Certificate>
{
public:
    __ctor(Certificate, ::Certificate);

#ifdef INCLUDE_MCAPI

    property long long ExpirationDate
    {
        long long get();
    }

    property ::System::String ^ IdentityPublicKey {
        ::System::String ^ get();
    }

        property long long NotBeforeDate
    {
        long long get();
    }

    property bool IsValid
    {
        bool get();
    }

    ::System::String ^ ToString() override;

    bool Validate(long long _0);
#endif // INCLUDE_MCAPI
};
} // namespace MC
