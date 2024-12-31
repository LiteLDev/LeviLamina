#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LinkIOSDeviceIDRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk16901a;
    ::ll::UntypedStorage<8, 32> mUnk9c8f16;
    ::ll::UntypedStorage<1, 2>  mUnkd68af8;
    ::ll::UntypedStorage<8, 32> mUnkf1089e;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkIOSDeviceIDRequest& operator=(LinkIOSDeviceIDRequest const&);
    LinkIOSDeviceIDRequest(LinkIOSDeviceIDRequest const&);
    LinkIOSDeviceIDRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LinkIOSDeviceIDRequest() /*override*/ = default;

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
