#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ValueToDateModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk348808;
    ::ll::UntypedStorage<4, 4>  mUnk4c08de;
    ::ll::UntypedStorage<8, 32> mUnk3655d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ValueToDateModel& operator=(ValueToDateModel const&);
    ValueToDateModel(ValueToDateModel const&);
    ValueToDateModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ValueToDateModel() /*override*/ = default;

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
