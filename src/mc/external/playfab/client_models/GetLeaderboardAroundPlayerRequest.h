#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetLeaderboardAroundPlayerRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkaa2453;
    ::ll::UntypedStorage<8, 32> mUnk1aee8b;
    ::ll::UntypedStorage<1, 32> mUnk269473;
    ::ll::UntypedStorage<8, 32> mUnkd72c25;
    ::ll::UntypedStorage<4, 8>  mUnkd6d076;
    // NOLINTEND

public:
    // prevent constructor by default
    GetLeaderboardAroundPlayerRequest& operator=(GetLeaderboardAroundPlayerRequest const&);
    GetLeaderboardAroundPlayerRequest(GetLeaderboardAroundPlayerRequest const&);
    GetLeaderboardAroundPlayerRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetLeaderboardAroundPlayerRequest() /*override*/;

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
