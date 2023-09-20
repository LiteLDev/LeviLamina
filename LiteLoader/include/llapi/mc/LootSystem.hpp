/**
 * @file  LootSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ITickingSystem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootSystem.
 *
 */
class LootSystem : public ITickingSystem {

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerEvents\@LootSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTSYSTEM
    /**
     * @symbol ?tick\@LootSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCVAPI void tick(class EntityRegistry &);
#endif

};
