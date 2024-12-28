#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ValidateAmazonReceiptRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk130491;
    ::ll::UntypedStorage<8, 32> mUnk36287d;
    ::ll::UntypedStorage<4, 4>  mUnk1e942f;
    ::ll::UntypedStorage<8, 32> mUnk8cf913;
    ::ll::UntypedStorage<8, 32> mUnk87e448;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidateAmazonReceiptRequest& operator=(ValidateAmazonReceiptRequest const&);
    ValidateAmazonReceiptRequest(ValidateAmazonReceiptRequest const&);
    ValidateAmazonReceiptRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ValidateAmazonReceiptRequest() /*override*/;

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
