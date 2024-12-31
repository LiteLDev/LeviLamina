#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LinkedPlatformAccountModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk17687e;
    ::ll::UntypedStorage<4, 8>  mUnk80caea;
    ::ll::UntypedStorage<8, 32> mUnk1ed814;
    ::ll::UntypedStorage<8, 32> mUnk267f67;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkedPlatformAccountModel& operator=(LinkedPlatformAccountModel const&);
    LinkedPlatformAccountModel(LinkedPlatformAccountModel const&);
    LinkedPlatformAccountModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LinkedPlatformAccountModel() /*override*/ = default;

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
