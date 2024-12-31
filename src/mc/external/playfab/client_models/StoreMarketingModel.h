#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct StoreMarketingModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkec0c38;
    ::ll::UntypedStorage<8, 32> mUnkd78c75;
    ::ll::UntypedStorage<8, 16> mUnka8e50a;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreMarketingModel& operator=(StoreMarketingModel const&);
    StoreMarketingModel(StoreMarketingModel const&);
    StoreMarketingModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoreMarketingModel() /*override*/ = default;

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
