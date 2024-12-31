#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetLeaderboardRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk91eab9;
    ::ll::UntypedStorage<1, 32> mUnkdda788;
    ::ll::UntypedStorage<4, 4>  mUnk78c324;
    ::ll::UntypedStorage<8, 32> mUnk137f0b;
    ::ll::UntypedStorage<4, 8>  mUnk720b8a;
    // NOLINTEND

public:
    // prevent constructor by default
    GetLeaderboardRequest& operator=(GetLeaderboardRequest const&);
    GetLeaderboardRequest(GetLeaderboardRequest const&);
    GetLeaderboardRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetLeaderboardRequest() /*override*/ = default;

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
