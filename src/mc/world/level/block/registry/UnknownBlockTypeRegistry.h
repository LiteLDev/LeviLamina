#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

class UnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {
public:
    // prevent constructor by default
    UnknownBlockTypeRegistry& operator=(UnknownBlockTypeRegistry const&);
    UnknownBlockTypeRegistry(UnknownBlockTypeRegistry const&);
    UnknownBlockTypeRegistry();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnknownBlockTypeRegistry() = default;

    // vIndex: 1
    virtual class Block const& getUnknownBlock(class CompoundTag const& serId);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _registerBlock(std::string const& name, uint64 serIdHash);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Block const& getUnknownBlock$(class CompoundTag const& serId);

    // NOLINTEND
};
