#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class CompoundTag;
// clang-format on

class UnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {
public:
    // UnknownBlockTypeRegistry inner types define
    using UnknownBlockLookupMap = ::std::map<uint64, ::SharedPtr<::BlockType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                  mMutex;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::SharedPtr<::BlockType>>> mUnknownBlockLookupMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnknownBlockTypeRegistry() /*override*/ = default;

    virtual ::Block const& getUnknownBlock(::CompoundTag const& serId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _registerBlock(::std::string const& name, uint64 serIdHash);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const& $getUnknownBlock(::CompoundTag const& serId);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
