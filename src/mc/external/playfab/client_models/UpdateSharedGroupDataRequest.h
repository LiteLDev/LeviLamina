#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UpdateSharedGroupDataRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk128c87;
    ::ll::UntypedStorage<8, 16> mUnke592e8;
    ::ll::UntypedStorage<4, 8>  mUnk7efafa;
    ::ll::UntypedStorage<8, 32> mUnk97ef29;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSharedGroupDataRequest& operator=(UpdateSharedGroupDataRequest const&);
    UpdateSharedGroupDataRequest(UpdateSharedGroupDataRequest const&);
    UpdateSharedGroupDataRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateSharedGroupDataRequest() /*override*/ = default;

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
