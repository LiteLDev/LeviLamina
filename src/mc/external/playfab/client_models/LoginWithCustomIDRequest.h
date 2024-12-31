#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithCustomIDRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk1238fa;
    ::ll::UntypedStorage<8, 32>  mUnkfab761;
    ::ll::UntypedStorage<8, 32>  mUnkeefd6a;
    ::ll::UntypedStorage<8, 128> mUnk474d2c;
    ::ll::UntypedStorage<8, 32>  mUnk2f839f;
    ::ll::UntypedStorage<8, 32>  mUnk8c55ca;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithCustomIDRequest& operator=(LoginWithCustomIDRequest const&);
    LoginWithCustomIDRequest(LoginWithCustomIDRequest const&);
    LoginWithCustomIDRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithCustomIDRequest() /*override*/ = default;

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
