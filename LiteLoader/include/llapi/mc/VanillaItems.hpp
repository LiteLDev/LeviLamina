/**
 * @file  VanillaItems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -653143900
     * @symbol  ?registerHardCodedItemTags\@VanillaItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void registerHardCodedItemTags(class ItemRegistryRef);
    /**
     * @hash   -1963907375
     * @symbol  ?registerItems\@VanillaItems\@\@SAXVItemRegistryRef\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@_N\@Z
     */
    MCAPI static void registerItems(class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &, bool);
    /**
     * @hash   379604391
     * @symbol  ?serverInitCreativeItemsCallback\@VanillaItems\@\@SAXVItemRegistryRef\@\@PEAVActorInfoRegistry\@\@PEAVBlockDefinitionGroup\@\@PEAVCreativeItemRegistry\@\@_NAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void serverInitCreativeItemsCallback(class ItemRegistryRef, class ActorInfoRegistry *, class BlockDefinitionGroup *, class CreativeItemRegistry *, bool, class BaseGameVersion const &, class Experiments const &);

//private:
    /**
     * @hash   271767972
     * @symbol  ?_addCommandOnlyCategory\@VanillaItems\@\@CAXPEAVCreativeItemRegistry\@\@VItemRegistryRef\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void _addCommandOnlyCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);
    /**
     * @hash   -1753226158
     * @symbol  ?_addConstructionCategory\@VanillaItems\@\@CAXPEAVCreativeItemRegistry\@\@VItemRegistryRef\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void _addConstructionCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);
    /**
     * @hash   -71781733
     * @symbol  ?_addEquipmentCategory\@VanillaItems\@\@CAXPEAVCreativeItemRegistry\@\@VItemRegistryRef\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void _addEquipmentCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);
    /**
     * @hash   1781007997
     * @symbol  ?_addItemsCategory\@VanillaItems\@\@CAXPEAVCreativeItemRegistry\@\@VItemRegistryRef\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void _addItemsCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);
    /**
     * @hash   -2130642936
     * @symbol  ?_addNatureCategory\@VanillaItems\@\@CAXPEAVCreativeItemRegistry\@\@VItemRegistryRef\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void _addNatureCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &);

private:

};