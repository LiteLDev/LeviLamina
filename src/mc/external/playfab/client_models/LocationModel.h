#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LocationModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6ee87;
    ::ll::UntypedStorage<4, 8>  mUnk72144f;
    ::ll::UntypedStorage<4, 8>  mUnka78c50;
    ::ll::UntypedStorage<8, 16> mUnkf301f0;
    ::ll::UntypedStorage<8, 16> mUnk19c8bf;
    // NOLINTEND

public:
    // prevent constructor by default
    LocationModel& operator=(LocationModel const&);
    LocationModel(LocationModel const&);
    LocationModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LocationModel() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels
