#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

class ClientUnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientUnknownBlockTypeRegistry() /*override*/ = default;

    virtual ::Block const& getUnknownBlock(::CompoundTag const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::Block const& $getUnknownBlock(::CompoundTag const&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
