#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct CurrentGamesRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk232d80;
    ::ll::UntypedStorage<8, 32> mUnk955077;
    ::ll::UntypedStorage<4, 8>  mUnke752ab;
    ::ll::UntypedStorage<8, 32> mUnk9cb791;
    ::ll::UntypedStorage<8, 48> mUnk7cf3b2;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentGamesRequest& operator=(CurrentGamesRequest const&);
    CurrentGamesRequest(CurrentGamesRequest const&);
    CurrentGamesRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CurrentGamesRequest() /*override*/ = default;

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
