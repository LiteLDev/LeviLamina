#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
// clang-format on

class WorldClockRegistryClient : public ::WorldClockRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistryClient() /*override*/ = default;

    virtual void tick(::PacketSender&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $tick(::PacketSender&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
