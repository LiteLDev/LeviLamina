#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct VirtualCurrencyRechargeTime : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk20388a;
    ::ll::UntypedStorage<8, 8> mUnkcbe870;
    ::ll::UntypedStorage<4, 4> mUnka598ca;
    // NOLINTEND

public:
    // prevent constructor by default
    VirtualCurrencyRechargeTime& operator=(VirtualCurrencyRechargeTime const&);
    VirtualCurrencyRechargeTime(VirtualCurrencyRechargeTime const&);
    VirtualCurrencyRechargeTime();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VirtualCurrencyRechargeTime() /*override*/;

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
