#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class CompoundTag;
// clang-format on

class UnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkfa461f;
    ::ll::UntypedStorage<8, 16> mUnk65fe59;
    // NOLINTEND

public:
    // prevent constructor by default
    UnknownBlockTypeRegistry& operator=(UnknownBlockTypeRegistry const&);
    UnknownBlockTypeRegistry(UnknownBlockTypeRegistry const&);
    UnknownBlockTypeRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnknownBlockTypeRegistry() /*override*/ = default;

    virtual ::Block const& getUnknownBlock(::CompoundTag const& serId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _registerBlock(::std::string const& name, uint64 serIdHash);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getUnknownBlock(::CompoundTag const& serId);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
