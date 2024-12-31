#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct StartGameRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf9b1cf;
    ::ll::UntypedStorage<8, 32> mUnkae6a73;
    ::ll::UntypedStorage<8, 32> mUnkfd11e7;
    ::ll::UntypedStorage<8, 32> mUnk21e834;
    ::ll::UntypedStorage<4, 4>  mUnkbd863d;
    ::ll::UntypedStorage<8, 32> mUnk6a5f71;
    // NOLINTEND

public:
    // prevent constructor by default
    StartGameRequest& operator=(StartGameRequest const&);
    StartGameRequest(StartGameRequest const&);
    StartGameRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StartGameRequest() /*override*/ = default;

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
