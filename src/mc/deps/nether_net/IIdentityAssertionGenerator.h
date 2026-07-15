#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class IIdentityAssertionGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IIdentityAssertionGenerator() = default;

    virtual ::std::optional<::std::string> createAssertion(::std::string const&) = 0;

    virtual ::std::string_view idpDomain() const = 0;

    virtual ::std::string_view idpProtocol() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
