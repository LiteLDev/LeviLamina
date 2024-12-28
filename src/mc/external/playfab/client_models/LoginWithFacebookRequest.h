#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithFacebookRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkac8625;
    ::ll::UntypedStorage<1, 2>   mUnkd30073;
    ::ll::UntypedStorage<8, 32>  mUnkedda5f;
    ::ll::UntypedStorage<8, 128> mUnkad1745;
    ::ll::UntypedStorage<8, 32>  mUnk1eeecd;
    ::ll::UntypedStorage<8, 32>  mUnk959d4a;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithFacebookRequest& operator=(LoginWithFacebookRequest const&);
    LoginWithFacebookRequest(LoginWithFacebookRequest const&);
    LoginWithFacebookRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithFacebookRequest() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels
