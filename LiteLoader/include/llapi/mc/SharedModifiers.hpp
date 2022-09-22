/**
 * @file  SharedModifiers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SharedModifiers.
 *
 */
class SharedModifiers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDMODIFIERS
public:
    class SharedModifiers& operator=(class SharedModifiers const &) = delete;
    SharedModifiers(class SharedModifiers const &) = delete;
    SharedModifiers() = delete;
#endif

public:
    /**
     * @hash   -2082544408
     * @symbol ?DAMAGE_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> DAMAGE_BOOST;
    /**
     * @hash   1155839432
     * @symbol ?HEALTH_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> HEALTH_BOOST;
    /**
     * @hash   -2086511514
     * @symbol ?MOVEMENT_SLOWDOWN@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> MOVEMENT_SLOWDOWN;
    /**
     * @hash   -2038106824
     * @symbol ?MOVEMENT_SPEED@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> MOVEMENT_SPEED;
    /**
     * @hash   2086673014
     * @symbol ?SPRINTING_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> SPRINTING_BOOST;
    /**
     * @hash   -471484136
     * @symbol ?WEAKNESS@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> WEAKNESS;

};