/**
 * @file  VanillaBlockStateTransformUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   61536970
     * @symbol ?transformBlock@VanillaBlockStateTransformUtils@@SAPEBVBlock@@AEBV2@W4CommonDirection@@@Z
     */
    MCAPI static class Block const * transformBlock(class Block const &, enum CommonDirection);
    /**
     * @hash   -1253974416
     * @symbol ?transformBlock@VanillaBlockStateTransformUtils@@SAPEBVBlock@@AEBV2@W4Name@Facing@@@Z
     */
    MCAPI static class Block const * transformBlock(class Block const &, enum Facing::Name);
    /**
     * @hash   1010915709
     * @symbol ?transformBlock@VanillaBlockStateTransformUtils@@SAPEBVBlock@@AEBV2@W4Rotation@@W4Mirror@@@Z
     */
    MCAPI static class Block const * transformBlock(class Block const &, enum Rotation, enum Mirror);

//private:
    /**
     * @hash   -268081155
     * @symbol ?_mirror@VanillaBlockStateTransformUtils@@CA?AW4CommonDirection@@W42@W4Mirror@@@Z
     */
    MCAPI static enum CommonDirection _mirror(enum CommonDirection, enum Mirror);
    /**
     * @hash   1598004944
     * @symbol ?_mirrorFrontBack@VanillaBlockStateTransformUtils@@CA?AW4CommonDirection@@W42@@Z
     */
    MCAPI static enum CommonDirection _mirrorFrontBack(enum CommonDirection);
    /**
     * @hash   -407115189
     * @symbol ?_mirrorLeftRight@VanillaBlockStateTransformUtils@@CA?AW4CommonDirection@@W42@@Z
     */
    MCAPI static enum CommonDirection _mirrorLeftRight(enum CommonDirection);
    /**
     * @hash   1243833818
     * @symbol ?_rotate@VanillaBlockStateTransformUtils@@CA?AW4CommonDirection@@W42@W4Rotation@@@Z
     */
    MCAPI static enum CommonDirection _rotate(enum CommonDirection, enum Rotation);

private:

};