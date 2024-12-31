#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetLeaderboardAroundPlayerResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk176980;
    ::ll::UntypedStorage<8, 16> mUnk80a034;
    ::ll::UntypedStorage<4, 4>  mUnk6ba55f;
    // NOLINTEND

public:
    // prevent constructor by default
    GetLeaderboardAroundPlayerResult& operator=(GetLeaderboardAroundPlayerResult const&);
    GetLeaderboardAroundPlayerResult(GetLeaderboardAroundPlayerResult const&);
    GetLeaderboardAroundPlayerResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetLeaderboardAroundPlayerResult() /*override*/ = default;

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
