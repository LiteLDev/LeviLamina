#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct PlayerLeaderboardEntry : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk122f51;
    ::ll::UntypedStorage<8, 32>  mUnk1bcd7c;
    ::ll::UntypedStorage<4, 4>   mUnkb44239;
    ::ll::UntypedStorage<8, 384> mUnkae9973;
    ::ll::UntypedStorage<4, 4>   mUnk27f18a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLeaderboardEntry& operator=(PlayerLeaderboardEntry const&);
    PlayerLeaderboardEntry(PlayerLeaderboardEntry const&);
    PlayerLeaderboardEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerLeaderboardEntry() /*override*/ = default;

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
