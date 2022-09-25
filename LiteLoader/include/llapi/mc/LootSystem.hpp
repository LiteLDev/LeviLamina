/**
 * @file  LootSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootSystem.
 *
 */
class LootSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTSYSTEM
public:
    class LootSystem& operator=(class LootSystem const &) = delete;
    LootSystem(class LootSystem const &) = delete;
    LootSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LootSystem();
    /**
     * @hash   683116179
     * @vftbl  1
     * @symbol ?registerEvents@LootSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    /**
     * @hash   -1314725657
     * @vftbl  2
     * @symbol ?tick@LootSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

};