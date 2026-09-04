#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
// clang-format on

class CommandPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mOffset;
    ::ll::TypedStorage<1, 1, bool>    mRelativeX;
    ::ll::TypedStorage<1, 1, bool>    mRelativeY;
    ::ll::TypedStorage<1, 1, bool>    mRelativeZ;
    ::ll::TypedStorage<1, 1, bool>    mLocal;
    // NOLINTEND

public:
    BlockPos getBlockPos(int version, CommandOrigin const& origin, Vec3 const& offset) const {
        BlockPos result;
        auto     pos = getPosition(version, origin, offset);
        result.x     = pos.x + 0.001f;
        result.y     = pos.y + 0.001f;
        result.z     = pos.z + 0.001f;
        return result;
    }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Vec3 getPosition(int version, ::CommandOrigin const& origin, ::Vec3 const& offsetFromBase) const;

    MCAPI void load(::CompoundTag const& tag);
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandPosition>();
// clang-format on
