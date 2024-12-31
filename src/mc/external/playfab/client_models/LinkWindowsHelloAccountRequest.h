#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LinkWindowsHelloAccountRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke0fbbd;
    ::ll::UntypedStorage<1, 2>  mUnkd360ac;
    ::ll::UntypedStorage<8, 32> mUnkbf62cc;
    ::ll::UntypedStorage<8, 32> mUnkeb94d8;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkWindowsHelloAccountRequest& operator=(LinkWindowsHelloAccountRequest const&);
    LinkWindowsHelloAccountRequest(LinkWindowsHelloAccountRequest const&);
    LinkWindowsHelloAccountRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LinkWindowsHelloAccountRequest() /*override*/ = default;

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
