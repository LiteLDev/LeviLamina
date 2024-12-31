#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UserSettings : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkf81012;
    ::ll::UntypedStorage<1, 1> mUnkce3fd0;
    ::ll::UntypedStorage<1, 1> mUnk26e227;
    // NOLINTEND

public:
    // prevent constructor by default
    UserSettings& operator=(UserSettings const&);
    UserSettings(UserSettings const&);
    UserSettings();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UserSettings() /*override*/ = default;

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
