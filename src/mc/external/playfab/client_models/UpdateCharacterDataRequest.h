#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UpdateCharacterDataRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc2612c;
    ::ll::UntypedStorage<8, 16> mUnke94b8b;
    ::ll::UntypedStorage<8, 16> mUnk18151f;
    ::ll::UntypedStorage<4, 8>  mUnk8f8ab7;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateCharacterDataRequest& operator=(UpdateCharacterDataRequest const&);
    UpdateCharacterDataRequest(UpdateCharacterDataRequest const&);
    UpdateCharacterDataRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateCharacterDataRequest() /*override*/ = default;

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
