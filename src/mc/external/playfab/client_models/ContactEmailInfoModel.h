#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ContactEmailInfoModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcf858a;
    ::ll::UntypedStorage<8, 32> mUnkf5d928;
    ::ll::UntypedStorage<4, 8>  mUnkaed4a7;
    // NOLINTEND

public:
    // prevent constructor by default
    ContactEmailInfoModel& operator=(ContactEmailInfoModel const&);
    ContactEmailInfoModel(ContactEmailInfoModel const&);
    ContactEmailInfoModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContactEmailInfoModel() /*override*/ = default;

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
