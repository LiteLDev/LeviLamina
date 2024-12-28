#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetLeaderboardAroundCharacterRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5dfb76;
    ::ll::UntypedStorage<8, 32> mUnk7b7923;
    ::ll::UntypedStorage<4, 8>  mUnkf8fdd3;
    ::ll::UntypedStorage<8, 32> mUnkf95fcd;
    // NOLINTEND

public:
    // prevent constructor by default
    GetLeaderboardAroundCharacterRequest& operator=(GetLeaderboardAroundCharacterRequest const&);
    GetLeaderboardAroundCharacterRequest(GetLeaderboardAroundCharacterRequest const&);
    GetLeaderboardAroundCharacterRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetLeaderboardAroundCharacterRequest() /*override*/;

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
