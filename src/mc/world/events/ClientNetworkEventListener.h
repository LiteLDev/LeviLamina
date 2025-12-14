#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ClientMessageEvent;
// clang-format on

class ClientNetworkEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetworkEventListener() = default;

    virtual ::EventResult onMessage(::ClientMessageEvent const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::EventResult $onMessage(::ClientMessageEvent const&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
