#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
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
    virtual void onAppResumed() /*override*/;

#ifdef LL_PLAT_S
    virtual ~WebSocketCommManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~WebSocketCommManager() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void tick();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onAppResumed();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
