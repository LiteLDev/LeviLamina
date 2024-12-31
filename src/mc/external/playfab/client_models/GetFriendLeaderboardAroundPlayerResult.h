#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetFriendLeaderboardAroundPlayerResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke5e20a;
    ::ll::UntypedStorage<8, 16> mUnk6d4e3c;
    ::ll::UntypedStorage<4, 4>  mUnk4561fd;
    // NOLINTEND

public:
    // prevent constructor by default
    GetFriendLeaderboardAroundPlayerResult& operator=(GetFriendLeaderboardAroundPlayerResult const&);
    GetFriendLeaderboardAroundPlayerResult(GetFriendLeaderboardAroundPlayerResult const&);
    GetFriendLeaderboardAroundPlayerResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetFriendLeaderboardAroundPlayerResult() /*override*/ = default;

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
