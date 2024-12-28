#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithFacebookInstantGamesIdRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnkcc935a;
    ::ll::UntypedStorage<8, 32>  mUnk99ce7d;
    ::ll::UntypedStorage<8, 32>  mUnk3282a2;
    ::ll::UntypedStorage<8, 128> mUnk860cee;
    ::ll::UntypedStorage<8, 32>  mUnk5f7f09;
    ::ll::UntypedStorage<8, 32>  mUnk5ca9d1;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithFacebookInstantGamesIdRequest& operator=(LoginWithFacebookInstantGamesIdRequest const&);
    LoginWithFacebookInstantGamesIdRequest(LoginWithFacebookInstantGamesIdRequest const&);
    LoginWithFacebookInstantGamesIdRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithFacebookInstantGamesIdRequest() /*override*/;

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
