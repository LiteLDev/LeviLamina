/**
 * @file  DyeableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DyeableComponent.
 *
 */
class DyeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYEABLECOMPONENT
public:
    class DyeableComponent& operator=(class DyeableComponent const &) = delete;
    DyeableComponent(class DyeableComponent const &) = delete;
    DyeableComponent() = delete;
#endif

public:
    /**
     * @hash   -1566115336
     * @symbol  ?appendFormattedHovertext\@DyeableComponent\@\@QEBAXAEBVItemStackBase\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void appendFormattedHovertext(class ItemStackBase const &, std::string &, bool) const;
    /**
     * @hash   1456075592
     * @symbol  ?clearColor\@DyeableComponent\@\@QEBAXAEAVItemStackBase\@\@\@Z
     */
    MCAPI void clearColor(class ItemStackBase &) const;
    /**
     * @hash   -591097913
     * @symbol  ?getColor\@DyeableComponent\@\@QEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCAPI class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @hash   1010454111
     * @symbol  ?hasCustomColor\@DyeableComponent\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @hash   2097566813
     * @symbol  ?setColor\@DyeableComponent\@\@QEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI void setColor(class ItemStackBase &, class mce::Color const &) const;
    /**
     * @hash   -184986423
     * @symbol  ?DEFAULT_HORSE_LEATHER_COLOR\@DyeableComponent\@\@2VColor\@mce\@\@A
     */
    MCAPI static class mce::Color DEFAULT_HORSE_LEATHER_COLOR;
    /**
     * @hash   267643133
     * @symbol  ?DEFAULT_LEATHER_COLOR\@DyeableComponent\@\@2VColor\@mce\@\@A
     */
    MCAPI static class mce::Color DEFAULT_LEATHER_COLOR;
    /**
     * @hash   35093699
     * @symbol  ?ResetDefaultLeatherColor\@DyeableComponent\@\@SAXXZ
     */
    MCAPI static void ResetDefaultLeatherColor();
    /**
     * @hash   896605410
     * @symbol  ?getIdentifier\@DyeableComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};