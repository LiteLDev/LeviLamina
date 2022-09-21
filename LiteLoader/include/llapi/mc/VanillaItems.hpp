/**
 * @file  MC/VanillaItems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaItems.
 *
 */
class VanillaItems {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAITEMS
public:
    class VanillaItems& operator=(class VanillaItems const &) = delete;
    VanillaItems(class VanillaItems const &) = delete;
    VanillaItems() = delete;
#endif

public:
    /**
     * @hash   1510704193
     * @symbol ?registerItems@VanillaItems@@SAXVItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@_N@Z
     */
    MCAPI static void registerItems(class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &, bool);
    /**
     * @hash   -445933049
     * @symbol ?serverInitCreativeItemsCallback@VanillaItems@@SAXVItemRegistryRef@@PEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@PEAVCreativeItemRegistry@@_NAEBVBaseGameVersion@@AEBVExperiments@@@Z
     */
    MCAPI static void serverInitCreativeItemsCallback(class ItemRegistryRef, class ActorInfoRegistry *, class BlockDefinitionGroup *, class CreativeItemRegistry *, bool, class BaseGameVersion const &, class Experiments const &);
    /**
     * @hash   -70075359
     * @symbol ?unregisterItems@VanillaItems@@SAXXZ
     */
    MCAPI static void unregisterItems();

//private:
    /**
     * @symbol ?_addConstructionCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
     */
    MCAPI static void _addConstructionCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);
    /**
     * @symbol ?_addEquipmentCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
     */
    MCAPI static void _addEquipmentCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);
    /**
     * @symbol ?_addItemsCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
     */
    MCAPI static void _addItemsCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);
    /**
     * @symbol ?_addNatureCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
     */
    MCAPI static void _addNatureCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);

private:

};