#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/IIdentityAssertionVerifier.h"

class ServerIdentityAssertionVerifier : public ::IIdentityAssertionVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Threading::Async<bool>
    verify(::std::string_view assertion, ::std::string_view fingerprintJson) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::std::string>
    verifyAndExtractKey(::std::string_view assertion, ::std::string_view fingerprintJson);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<bool> $verify(::std::string_view assertion, ::std::string_view fingerprintJson);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
