#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LinkAndroidDeviceIDRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6e8c67;
    ::ll::UntypedStorage<8, 32> mUnk58f153;
    ::ll::UntypedStorage<1, 2>  mUnk8ba066;
    ::ll::UntypedStorage<8, 32> mUnk7660fd;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkAndroidDeviceIDRequest& operator=(LinkAndroidDeviceIDRequest const&);
    LinkAndroidDeviceIDRequest(LinkAndroidDeviceIDRequest const&);
    LinkAndroidDeviceIDRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LinkAndroidDeviceIDRequest() /*override*/ = default;

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
