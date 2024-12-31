#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetAccountInfoRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1a28f1;
    ::ll::UntypedStorage<8, 32> mUnk9b74ef;
    ::ll::UntypedStorage<8, 32> mUnk3e7bfc;
    ::ll::UntypedStorage<8, 32> mUnk415bce;
    // NOLINTEND

public:
    // prevent constructor by default
    GetAccountInfoRequest& operator=(GetAccountInfoRequest const&);
    GetAccountInfoRequest(GetAccountInfoRequest const&);
    GetAccountInfoRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetAccountInfoRequest() /*override*/ = default;

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
