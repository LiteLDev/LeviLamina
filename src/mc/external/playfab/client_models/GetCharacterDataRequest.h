#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetCharacterDataRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2b53cd;
    ::ll::UntypedStorage<4, 8>  mUnke46c94;
    ::ll::UntypedStorage<8, 16> mUnk5d7b2d;
    ::ll::UntypedStorage<8, 32> mUnk400ff0;
    // NOLINTEND

public:
    // prevent constructor by default
    GetCharacterDataRequest& operator=(GetCharacterDataRequest const&);
    GetCharacterDataRequest(GetCharacterDataRequest const&);
    GetCharacterDataRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetCharacterDataRequest() /*override*/ = default;

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
