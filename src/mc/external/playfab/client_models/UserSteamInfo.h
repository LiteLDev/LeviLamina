#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UserSteamInfo : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk777890;
    ::ll::UntypedStorage<8, 32> mUnke0f73f;
    ::ll::UntypedStorage<4, 8>  mUnk10d1de;
    ::ll::UntypedStorage<8, 32> mUnk4ad4ad;
    // NOLINTEND

public:
    // prevent constructor by default
    UserSteamInfo& operator=(UserSteamInfo const&);
    UserSteamInfo(UserSteamInfo const&);
    UserSteamInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UserSteamInfo() /*override*/ = default;

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
