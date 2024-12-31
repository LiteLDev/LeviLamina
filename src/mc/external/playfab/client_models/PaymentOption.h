#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct PaymentOption : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5eb171;
    ::ll::UntypedStorage<4, 4>  mUnk820e2f;
    ::ll::UntypedStorage<8, 32> mUnkd9bc1f;
    ::ll::UntypedStorage<4, 4>  mUnkbbda0a;
    // NOLINTEND

public:
    // prevent constructor by default
    PaymentOption& operator=(PaymentOption const&);
    PaymentOption(PaymentOption const&);
    PaymentOption();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PaymentOption() /*override*/ = default;

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
