#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetFriendLeaderboardRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk7548ec;
    ::ll::UntypedStorage<1, 2>  mUnkb5ebb7;
    ::ll::UntypedStorage<4, 8>  mUnk993834;
    ::ll::UntypedStorage<1, 32> mUnk111672;
    ::ll::UntypedStorage<4, 4>  mUnk7781b0;
    ::ll::UntypedStorage<8, 32> mUnkea4f33;
    ::ll::UntypedStorage<4, 8>  mUnkd5b01b;
    ::ll::UntypedStorage<8, 32> mUnk647c1c;
    // NOLINTEND

public:
    // prevent constructor by default
    GetFriendLeaderboardRequest& operator=(GetFriendLeaderboardRequest const&);
    GetFriendLeaderboardRequest(GetFriendLeaderboardRequest const&);
    GetFriendLeaderboardRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetFriendLeaderboardRequest() /*override*/ = default;

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
