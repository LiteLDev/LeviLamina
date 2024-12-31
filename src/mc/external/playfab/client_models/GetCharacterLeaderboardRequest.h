#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetCharacterLeaderboardRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk293524;
    ::ll::UntypedStorage<4, 8>  mUnkd3c9d2;
    ::ll::UntypedStorage<4, 4>  mUnk10684c;
    ::ll::UntypedStorage<8, 32> mUnkb3423d;
    // NOLINTEND

public:
    // prevent constructor by default
    GetCharacterLeaderboardRequest& operator=(GetCharacterLeaderboardRequest const&);
    GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest const&);
    GetCharacterLeaderboardRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetCharacterLeaderboardRequest() /*override*/ = default;

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
