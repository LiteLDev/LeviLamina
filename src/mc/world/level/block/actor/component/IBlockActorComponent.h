#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorVersion.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct IBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBlockActorComponent();

    virtual void save(::CompoundTag& parentTag) const = 0;

    virtual void load(::CompoundTag const& parentTag, ::BlockActorVersion version) = 0;
    // NOLINTEND
};
