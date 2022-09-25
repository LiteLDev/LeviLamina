/**
 * @file  HungerAttributeDelegate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AttributeInstanceDelegate.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HungerAttributeDelegate.
 *
 */
class HungerAttributeDelegate : public AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUNGERATTRIBUTEDELEGATE
public:
    class HungerAttributeDelegate& operator=(class HungerAttributeDelegate const &) = delete;
    HungerAttributeDelegate(class HungerAttributeDelegate const &) = delete;
    HungerAttributeDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HungerAttributeDelegate();
    /**
     * @hash   -1643539834
     * @vftbl  1
     * @symbol ?tick@HungerAttributeDelegate@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -655274201
     * @vftbl  2
     * @symbol ?notify@HungerAttributeDelegate@@UEAAX_J@Z
     */
    virtual void notify(__int64);
    /**
     * @hash   -1980116871
     * @symbol ??0HungerAttributeDelegate@@QEAA@AEBVAttributeInstance@@PEAVPlayer@@@Z
     */
    MCAPI HungerAttributeDelegate(class AttributeInstance const &, class Player *);

};