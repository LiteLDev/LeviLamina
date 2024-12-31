#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LinkPSNAccountRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk560fda;
    ::ll::UntypedStorage<1, 2>  mUnk247eba;
    ::ll::UntypedStorage<4, 8>  mUnke60644;
    ::ll::UntypedStorage<8, 32> mUnk7d9b63;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkPSNAccountRequest& operator=(LinkPSNAccountRequest const&);
    LinkPSNAccountRequest(LinkPSNAccountRequest const&);
    LinkPSNAccountRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LinkPSNAccountRequest() /*override*/ = default;

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
