#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DyeableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYEABLECOMPONENT
public:
    DyeableComponent& operator=(DyeableComponent const&) = delete;
    DyeableComponent(DyeableComponent const&)            = delete;
    DyeableComponent()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?appendFormattedHovertext\@DyeableComponent\@\@QEBAXAEBVItemStackBase\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void appendFormattedHovertext(class ItemStackBase const&, std::string&, bool) const;
    /**
     * @symbol ?clearColor\@DyeableComponent\@\@QEBAXAEAVItemStackBase\@\@\@Z
     */
    MCAPI void clearColor(class ItemStackBase&) const;
    /**
     * @symbol ?getColor\@DyeableComponent\@\@QEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCAPI class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /**
     * @symbol ?hasCustomColor\@DyeableComponent\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool hasCustomColor(class ItemStackBase const&) const;
    /**
     * @symbol ?setColor\@DyeableComponent\@\@QEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI void setColor(class ItemStackBase&, class mce::Color const&) const;
    /**
     * @symbol ?DEFAULT_HORSE_LEATHER_COLOR\@DyeableComponent\@\@2VColor\@mce\@\@A
     */
    MCAPI static class mce::Color DEFAULT_HORSE_LEATHER_COLOR;
    /**
     * @symbol ?DEFAULT_LEATHER_COLOR\@DyeableComponent\@\@2VColor\@mce\@\@A
     */
    MCAPI static class mce::Color DEFAULT_LEATHER_COLOR;
    /**
     * @symbol ?ResetDefaultLeatherColor\@DyeableComponent\@\@SAXXZ
     */
    MCAPI static void ResetDefaultLeatherColor();
    /**
     * @symbol ?getIdentifier\@DyeableComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
};
