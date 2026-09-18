#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorVersion.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ILevel;
class SaveContext;
// clang-format on

struct IBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBlockActorComponent() = default;

    virtual void save(::CompoundTag& parentTag, ::SaveContext const& saveContext) const = 0;

    virtual void load(::CompoundTag const& parentTag, ::ILevel& level, ::BlockActorVersion version) = 0;
    // NOLINTEND
};
