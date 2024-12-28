#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithAndroidDeviceIDRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk3264ef;
    ::ll::UntypedStorage<8, 32>  mUnk6a4ea1;
    ::ll::UntypedStorage<1, 2>   mUnkb7ff40;
    ::ll::UntypedStorage<8, 32>  mUnk17e8f6;
    ::ll::UntypedStorage<8, 128> mUnk167196;
    ::ll::UntypedStorage<8, 32>  mUnk1cc85d;
    ::ll::UntypedStorage<8, 32>  mUnkdd055c;
    ::ll::UntypedStorage<8, 32>  mUnk8dbad7;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithAndroidDeviceIDRequest& operator=(LoginWithAndroidDeviceIDRequest const&);
    LoginWithAndroidDeviceIDRequest(LoginWithAndroidDeviceIDRequest const&);
    LoginWithAndroidDeviceIDRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithAndroidDeviceIDRequest() /*override*/;

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
