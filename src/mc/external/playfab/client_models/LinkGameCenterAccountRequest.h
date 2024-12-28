#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LinkGameCenterAccountRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk4d1589;
    ::ll::UntypedStorage<8, 32> mUnk7c9267;
    ::ll::UntypedStorage<8, 32> mUnkf1f393;
    ::ll::UntypedStorage<8, 32> mUnk4da1b8;
    ::ll::UntypedStorage<8, 32> mUnkaf16c7;
    ::ll::UntypedStorage<8, 32> mUnk73fb13;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkGameCenterAccountRequest& operator=(LinkGameCenterAccountRequest const&);
    LinkGameCenterAccountRequest(LinkGameCenterAccountRequest const&);
    LinkGameCenterAccountRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LinkGameCenterAccountRequest() /*override*/;

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
