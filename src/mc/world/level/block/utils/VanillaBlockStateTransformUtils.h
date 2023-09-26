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
    // symbol: ?transformBlock@VanillaBlockStateTransformUtils@@SAPEBVBlock@@AEBV2@W4CommonDirection@@@Z
    MCAPI static class Block const* transformBlock(class Block const&, ::CommonDirection);

    // symbol: ?transformBlock@VanillaBlockStateTransformUtils@@SAPEBVBlock@@AEBV2@W4Rotation@@W4Mirror@@@Z
    MCAPI static class Block const* transformBlock(class Block const&, ::Rotation, ::Mirror);

    // symbol: ?transformBlock@VanillaBlockStateTransformUtils@@SAPEBVBlock@@AEBV2@W4Name@Facing@@@Z
    MCAPI static class Block const* transformBlock(class Block const&, ::Facing::Name);

    // symbol:
    // ?transformMultiFaceDirectionBits@VanillaBlockStateTransformUtils@@SAPEBVBlock@@AEBV2@W4Rotation@@W4Mirror@@@Z
    MCAPI static class Block const* transformMultiFaceDirectionBits(class Block const&, ::Rotation, ::Mirror);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_mirror@VanillaBlockStateTransformUtils@@CA?AW4CommonDirection@@W42@W4Mirror@@@Z
    MCAPI static ::CommonDirection _mirror(::CommonDirection, ::Mirror);

    // symbol: ?_mirrorFrontBack@VanillaBlockStateTransformUtils@@CA?AW4CommonDirection@@W42@@Z
    MCAPI static ::CommonDirection _mirrorFrontBack(::CommonDirection);

    // symbol: ?_mirrorLeftRight@VanillaBlockStateTransformUtils@@CA?AW4CommonDirection@@W42@@Z
    MCAPI static ::CommonDirection _mirrorLeftRight(::CommonDirection);

    // symbol: ?_rotate@VanillaBlockStateTransformUtils@@CA?AW4CommonDirection@@W42@W4Rotation@@@Z
    MCAPI static ::CommonDirection _rotate(::CommonDirection, ::Rotation);

    // NOLINTEND
};
