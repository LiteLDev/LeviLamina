#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ValidateWindowsReceiptRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1a8820;
    ::ll::UntypedStorage<8, 32> mUnk6bc4e8;
    ::ll::UntypedStorage<4, 4>  mUnk300fe0;
    ::ll::UntypedStorage<8, 32> mUnk78f454;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidateWindowsReceiptRequest& operator=(ValidateWindowsReceiptRequest const&);
    ValidateWindowsReceiptRequest(ValidateWindowsReceiptRequest const&);
    ValidateWindowsReceiptRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ValidateWindowsReceiptRequest() /*override*/ = default;

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
