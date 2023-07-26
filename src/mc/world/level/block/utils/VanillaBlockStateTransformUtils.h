#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Facing.h"

class VanillaBlockStateTransformUtils {

public:
    // prevent constructor by default
    VanillaBlockStateTransformUtils& operator=(VanillaBlockStateTransformUtils const&) = delete;
    VanillaBlockStateTransformUtils(VanillaBlockStateTransformUtils const&)            = delete;
    VanillaBlockStateTransformUtils()                                                  = delete;

public:
    /**
     * @symbol ?transformBlock\@VanillaBlockStateTransformUtils\@\@SAPEBVBlock\@\@AEBV2\@W4CommonDirection\@\@\@Z
     */
    MCAPI static class Block const* transformBlock(class Block const&, enum class CommonDirection); // NOLINT
    /**
     * @symbol ?transformBlock\@VanillaBlockStateTransformUtils\@\@SAPEBVBlock\@\@AEBV2\@W4Name\@Facing\@\@\@Z
     */
    MCAPI static class Block const* transformBlock(class Block const&, enum class Facing::Name); // NOLINT
    /**
     * @symbol ?transformBlock\@VanillaBlockStateTransformUtils\@\@SAPEBVBlock\@\@AEBV2\@W4Rotation\@\@W4Mirror\@\@\@Z
     */
    MCAPI static class Block const*
    transformBlock(class Block const&, enum class Rotation, enum class Mirror); // NOLINT

    // private:
    /**
     * @symbol ?_mirror\@VanillaBlockStateTransformUtils\@\@CA?AW4CommonDirection\@\@W42\@W4Mirror\@\@\@Z
     */
    MCAPI static enum class CommonDirection _mirror(enum class CommonDirection, enum class Mirror); // NOLINT
    /**
     * @symbol ?_mirrorFrontBack\@VanillaBlockStateTransformUtils\@\@CA?AW4CommonDirection\@\@W42\@\@Z
     */
    MCAPI static enum class CommonDirection _mirrorFrontBack(enum class CommonDirection); // NOLINT
    /**
     * @symbol ?_mirrorLeftRight\@VanillaBlockStateTransformUtils\@\@CA?AW4CommonDirection\@\@W42\@\@Z
     */
    MCAPI static enum class CommonDirection _mirrorLeftRight(enum class CommonDirection); // NOLINT
    /**
     * @symbol ?_rotate\@VanillaBlockStateTransformUtils\@\@CA?AW4CommonDirection\@\@W42\@W4Rotation\@\@\@Z
     */
    MCAPI static enum class CommonDirection _rotate(enum class CommonDirection, enum class Rotation); // NOLINT

private:
};
