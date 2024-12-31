#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct SubscriptionModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf36dc0;
    ::ll::UntypedStorage<8, 8>  mUnk4a73a8;
    ::ll::UntypedStorage<1, 1>  mUnkf1b274;
    ::ll::UntypedStorage<4, 8>  mUnk4e51ab;
    ::ll::UntypedStorage<8, 32> mUnkc94a1b;
    ::ll::UntypedStorage<8, 32> mUnkf2221f;
    ::ll::UntypedStorage<8, 32> mUnkf59cb3;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionModel& operator=(SubscriptionModel const&);
    SubscriptionModel(SubscriptionModel const&);
    SubscriptionModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubscriptionModel() /*override*/ = default;

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
