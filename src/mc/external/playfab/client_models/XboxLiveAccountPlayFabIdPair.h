#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct XboxLiveAccountPlayFabIdPair : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk62338a;
    ::ll::UntypedStorage<8, 32> mUnk201c32;
    // NOLINTEND

public:
    // prevent constructor by default
    XboxLiveAccountPlayFabIdPair& operator=(XboxLiveAccountPlayFabIdPair const&);
    XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair const&);
    XboxLiveAccountPlayFabIdPair();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~XboxLiveAccountPlayFabIdPair() /*override*/ = default;

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
