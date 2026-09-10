#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

class IIdentityAssertionVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IIdentityAssertionVerifier() = default;

    virtual ::Bedrock::Threading::Async<bool>
    verify(::std::string_view assertion, ::std::string_view fingerprintJson) = 0;
    // NOLINTEND
};
