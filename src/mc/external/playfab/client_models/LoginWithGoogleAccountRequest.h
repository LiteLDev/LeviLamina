#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithGoogleAccountRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk31eac0;
    ::ll::UntypedStorage<8, 32>  mUnk8adf83;
    ::ll::UntypedStorage<8, 128> mUnkdd66eb;
    ::ll::UntypedStorage<8, 32>  mUnk2d546e;
    ::ll::UntypedStorage<8, 32>  mUnk47e27a;
    ::ll::UntypedStorage<8, 32>  mUnk3f9d6f;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithGoogleAccountRequest& operator=(LoginWithGoogleAccountRequest const&);
    LoginWithGoogleAccountRequest(LoginWithGoogleAccountRequest const&);
    LoginWithGoogleAccountRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithGoogleAccountRequest() /*override*/;

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
