#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CommonDirection.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/Facing.h"

class VanillaBlockStateTransformUtils {
public:
    // prevent constructor by default
    VanillaBlockStateTransformUtils& operator=(VanillaBlockStateTransformUtils const&);
    VanillaBlockStateTransformUtils(VanillaBlockStateTransformUtils const&);
    VanillaBlockStateTransformUtils();

public:
    // NOLINTBEGIN
    MCAPI static class Block const* transformBlock(class Block const& block, ::CommonDirection targetDirection);

    MCAPI static class Block const* transformBlock(class Block const& block, ::Facing::Name targetDirection);

    MCAPI static class Block const* transformBlock(class Block const& block, ::Rotation rotation, ::Mirror mirror);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static ::CommonDirection _mirror(::CommonDirection direction, ::Mirror mirror);

    MCAPI static ::CommonDirection _mirrorFrontBack(::CommonDirection direction);

    MCAPI static ::CommonDirection _mirrorLeftRight(::CommonDirection direction);

    MCAPI static ::CommonDirection _rotate(::CommonDirection direction, ::Rotation rotation);

    // NOLINTEND
};
