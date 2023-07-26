#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedModifiers {

public:
    // prevent constructor by default
    SharedModifiers& operator=(SharedModifiers const&) = delete;
    SharedModifiers(SharedModifiers const&)            = delete;
    SharedModifiers()                                  = delete;

public:
    /**
     * @symbol ?DAMAGE_BOOST\@SharedModifiers\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> DAMAGE_BOOST; // NOLINT
    /**
     * @symbol ?HEALTH_BOOST\@SharedModifiers\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> HEALTH_BOOST; // NOLINT
    /**
     * @symbol ?MOVEMENT_SLOWDOWN\@SharedModifiers\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> MOVEMENT_SLOWDOWN; // NOLINT
    /**
     * @symbol ?MOVEMENT_SPEED\@SharedModifiers\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> MOVEMENT_SPEED; // NOLINT
    /**
     * @symbol ?SPRINTING_BOOST\@SharedModifiers\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> SPRINTING_BOOST; // NOLINT
    /**
     * @symbol ?WEAKNESS\@SharedModifiers\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> WEAKNESS; // NOLINT
};
