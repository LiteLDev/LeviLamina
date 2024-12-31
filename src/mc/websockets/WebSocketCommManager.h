#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/AppPlatformListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class WebSocketCommunicator;
// clang-format on

class WebSocketCommManager : public ::Bedrock::EnableNonOwnerReferences, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk17f299;
    ::ll::UntypedStorage<8, 24> mUnkf4891e;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocketCommManager& operator=(WebSocketCommManager const&);
    WebSocketCommManager(WebSocketCommManager const&);
    WebSocketCommManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void onAppResumed() /*override*/;

    // vIndex: 0
    virtual ~WebSocketCommManager() /*override*/ = default;
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
