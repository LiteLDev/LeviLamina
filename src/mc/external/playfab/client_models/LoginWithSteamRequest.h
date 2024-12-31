#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithSteamRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk875d45;
    ::ll::UntypedStorage<8, 32>  mUnk899d66;
    ::ll::UntypedStorage<8, 128> mUnk9da897;
    ::ll::UntypedStorage<8, 32>  mUnkb4ffaa;
    ::ll::UntypedStorage<8, 32>  mUnkf4c102;
    ::ll::UntypedStorage<8, 32>  mUnk9246f3;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithSteamRequest& operator=(LoginWithSteamRequest const&);
    LoginWithSteamRequest(LoginWithSteamRequest const&);
    LoginWithSteamRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithSteamRequest() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels
