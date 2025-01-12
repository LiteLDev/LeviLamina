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
    // vIndex: 0
    virtual ~ClientUnknownBlockTypeRegistry() /*override*/ = default;

    // vIndex: 1
    virtual ::Block const& getUnknownBlock(::CompoundTag const&) /*override*/;
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
