#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/IIdentityAssertionVerifier.h"

// auto generated forward declare list
// clang-format off
class WebKey;
// clang-format on

class ClientIdentityAssertionVerifier : public ::IIdentityAssertionVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Threading::Async<bool>
    verify(::std::string_view assertion, ::std::string_view fingerprintJson) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::WebKey> extractKey(::std::string_view assertion);

    MCNAPI static ::std::optional<::WebKey>
    verifyAndExtractKey(::std::string_view assertion, ::std::string_view fingerprintJson);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<bool> $verify(::std::string_view assertion, ::std::string_view fingerprintJson);


    // NOLINTEND
};
