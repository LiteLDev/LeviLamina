#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct RegisterWithWindowsHelloRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnka04f0b;
    ::ll::UntypedStorage<8, 32>  mUnke4cb15;
    ::ll::UntypedStorage<8, 128> mUnk34247e;
    ::ll::UntypedStorage<8, 32>  mUnkcad6c8;
    ::ll::UntypedStorage<8, 32>  mUnk75bb25;
    ::ll::UntypedStorage<8, 32>  mUnk26be9a;
    ::ll::UntypedStorage<8, 32>  mUnkb2d44c;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisterWithWindowsHelloRequest& operator=(RegisterWithWindowsHelloRequest const&);
    RegisterWithWindowsHelloRequest(RegisterWithWindowsHelloRequest const&);
    RegisterWithWindowsHelloRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RegisterWithWindowsHelloRequest() /*override*/;

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
