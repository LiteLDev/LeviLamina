#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class IIdentityAssertionGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IIdentityAssertionGenerator() = default;

    virtual ::std::optional<::std::string> createAssertion(::std::string const& fingerprints) = 0;

    virtual ::std::string_view idpDomain() const = 0;

    virtual ::std::string_view idpProtocol() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string_view $idpProtocol() const;
#endif


    // NOLINTEND
};

} // namespace NetherNet
