#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct SignalingClientConfiguration;
// clang-format on

class ISignalingServiceConfigProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ISignalingServiceConfigProvider inner types declare
    // clang-format off
    struct Token;
    // clang-format on

    // ISignalingServiceConfigProvider inner types define
    struct Token : public ::std::string {};

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISignalingServiceConfigProvider() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<::SignalingClientConfiguration> getConfiguration(::std::string const& id) = 0;

    virtual ::Bedrock::Threading::Async<::ISignalingServiceConfigProvider::Token> getAuthToken() = 0;

    virtual void reset() = 0;
    // NOLINTEND
};
