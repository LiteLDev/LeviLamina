#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetFriendLeaderboardAroundPlayerRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk312d92;
    ::ll::UntypedStorage<1, 2>  mUnkdea063;
    ::ll::UntypedStorage<4, 8>  mUnk3ac153;
    ::ll::UntypedStorage<8, 32> mUnk47e150;
    ::ll::UntypedStorage<1, 32> mUnk56427c;
    ::ll::UntypedStorage<8, 32> mUnk31ae50;
    ::ll::UntypedStorage<4, 8>  mUnkdc8d3b;
    ::ll::UntypedStorage<8, 32> mUnk3bcaaa;
    // NOLINTEND

public:
    // prevent constructor by default
    GetFriendLeaderboardAroundPlayerRequest& operator=(GetFriendLeaderboardAroundPlayerRequest const&);
    GetFriendLeaderboardAroundPlayerRequest(GetFriendLeaderboardAroundPlayerRequest const&);
    GetFriendLeaderboardAroundPlayerRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetFriendLeaderboardAroundPlayerRequest() /*override*/;

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
