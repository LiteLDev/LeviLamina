#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithNintendoServiceAccountRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnka1b418;
    ::ll::UntypedStorage<8, 32>  mUnk2c6b14;
    ::ll::UntypedStorage<8, 32>  mUnk2c85f7;
    ::ll::UntypedStorage<8, 128> mUnk5d24f4;
    ::ll::UntypedStorage<8, 32>  mUnk2babf8;
    ::ll::UntypedStorage<8, 32>  mUnka77f76;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithNintendoServiceAccountRequest& operator=(LoginWithNintendoServiceAccountRequest const&);
    LoginWithNintendoServiceAccountRequest(LoginWithNintendoServiceAccountRequest const&);
    LoginWithNintendoServiceAccountRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithNintendoServiceAccountRequest() /*override*/;

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
