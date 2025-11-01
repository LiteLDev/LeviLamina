#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
// clang-format on

class ISignalingServiceConfigProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ISignalingServiceConfigProvider inner types declare
    // clang-format off
    struct Token;
    // clang-format on
    
    // ISignalingServiceConfigProvider inner types define
    struct Token : public ::std::string {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Token();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISignalingServiceConfigProvider() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getUrl() = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getJsonRpcUrl() = 0;

    // vIndex: 3
    virtual ::Bedrock::Threading::Async<::ISignalingServiceConfigProvider::Token> getAuthToken() = 0;

    // vIndex: 4
    virtual void reset() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
