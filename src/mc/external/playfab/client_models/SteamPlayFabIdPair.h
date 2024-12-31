#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct SteamPlayFabIdPair : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7dffcd;
    ::ll::UntypedStorage<8, 32> mUnkbb4821;
    // NOLINTEND

public:
    // prevent constructor by default
    SteamPlayFabIdPair& operator=(SteamPlayFabIdPair const&);
    SteamPlayFabIdPair(SteamPlayFabIdPair const&);
    SteamPlayFabIdPair();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SteamPlayFabIdPair() /*override*/ = default;

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
