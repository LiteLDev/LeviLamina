#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorVersion.h"
#include "mc/world/level/block/actor/component/IBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class CompoundTag;
class DataDrivenBlockContainer;
class ILevel;
class SaveContext;
// clang-format on

class ContainerBlockActorComponent : public ::IBlockActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenBlockContainer>> mContainer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerBlockActorComponent() /*override*/ = default;

    virtual void save(::CompoundTag& parentTag, ::SaveContext const& saveContext) const /*override*/;

    virtual void load(::CompoundTag const& parentTag, ::ILevel& level, ::BlockActorVersion version) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ContainerBlockActorComponent> tryCreateFor(::BlockType const& blockType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $save(::CompoundTag& parentTag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::CompoundTag const& parentTag, ::ILevel& level, ::BlockActorVersion version);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
