#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct RegisterPlayFabUserRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk1311f4;
    ::ll::UntypedStorage<8, 32>  mUnkdc6bd0;
    ::ll::UntypedStorage<8, 32>  mUnk5d9528;
    ::ll::UntypedStorage<8, 128> mUnkf53bf5;
    ::ll::UntypedStorage<8, 32>  mUnke06c35;
    ::ll::UntypedStorage<8, 32>  mUnk248ab2;
    ::ll::UntypedStorage<1, 2>   mUnkd3c4a4;
    ::ll::UntypedStorage<8, 32>  mUnk35c0df;
    ::ll::UntypedStorage<8, 32>  mUnkf96128;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisterPlayFabUserRequest& operator=(RegisterPlayFabUserRequest const&);
    RegisterPlayFabUserRequest(RegisterPlayFabUserRequest const&);
    RegisterPlayFabUserRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RegisterPlayFabUserRequest() /*override*/ = default;

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
