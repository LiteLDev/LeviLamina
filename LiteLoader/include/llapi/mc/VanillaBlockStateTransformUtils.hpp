/**
 * @file  VanillaBlockStateTransformUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Facing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaBlockStateTransformUtils.
 *
 */
class VanillaBlockStateTransformUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABLOCKSTATETRANSFORMUTILS
public:
    class VanillaBlockStateTransformUtils& operator=(class VanillaBlockStateTransformUtils const &) = delete;
    VanillaBlockStateTransformUtils(class VanillaBlockStateTransformUtils const &) = delete;
    VanillaBlockStateTransformUtils() = delete;
#endif

public:
    /**
     * @hash   744154490
     * @symbol  ?transformBlock\@VanillaBlockStateTransformUtils\@\@SAPEBVBlock\@\@AEBV2\@W4CommonDirection\@\@\@Z
     */
    MCAPI static class Block const * transformBlock(class Block const &, enum class CommonDirection);
    /**
     * @hash   -571356896
     * @symbol  ?transformBlock\@VanillaBlockStateTransformUtils\@\@SAPEBVBlock\@\@AEBV2\@W4Name\@Facing\@\@\@Z
     */
    MCAPI static class Block const * transformBlock(class Block const &, enum class Facing::Name);
    /**
     * @hash   1693533229
     * @symbol  ?transformBlock\@VanillaBlockStateTransformUtils\@\@SAPEBVBlock\@\@AEBV2\@W4Rotation\@\@W4Mirror\@\@\@Z
     */
    MCAPI static class Block const * transformBlock(class Block const &, enum class Rotation, enum class Mirror);

//private:
    /**
     * @hash   414536365
     * @symbol  ?_mirror\@VanillaBlockStateTransformUtils\@\@CA?AW4CommonDirection\@\@W42\@W4Mirror\@\@\@Z
     */
    MCAPI static enum class CommonDirection _mirror(enum class CommonDirection, enum class Mirror);
    /**
     * @hash   -2014344832
     * @symbol  ?_mirrorFrontBack\@VanillaBlockStateTransformUtils\@\@CA?AW4CommonDirection\@\@W42\@\@Z
     */
    MCAPI static enum class CommonDirection _mirrorFrontBack(enum class CommonDirection);
    /**
     * @hash   275502331
     * @symbol  ?_mirrorLeftRight\@VanillaBlockStateTransformUtils\@\@CA?AW4CommonDirection\@\@W42\@\@Z
     */
    MCAPI static enum class CommonDirection _mirrorLeftRight(enum class CommonDirection);
    /**
     * @hash   1926451338
     * @symbol  ?_rotate\@VanillaBlockStateTransformUtils\@\@CA?AW4CommonDirection\@\@W42\@W4Rotation\@\@\@Z
     */
    MCAPI static enum class CommonDirection _rotate(enum class CommonDirection, enum class Rotation);

private:

};