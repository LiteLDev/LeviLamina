#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaItems {
public:
    // prevent constructor by default
    VanillaItems& operator=(VanillaItems const&);
    VanillaItems(VanillaItems const&);
    VanillaItems();

public:
    // NOLINTBEGIN
    // symbol: ?registerHardCodedItemTags@VanillaItems@@SAXVItemRegistryRef@@@Z
    MCAPI static void registerHardCodedItemTags(class ItemRegistryRef);

    // symbol:
    // ?registerItems@VanillaItems@@SAXAEAUReflectionCtx@cereal@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void
    registerItems(struct cereal::ReflectionCtx&, class ItemRegistryRef, class BaseGameVersion const&, class Experiments const&);

    // symbol:
    // ?serverInitCreativeItemsCallback@VanillaItems@@SAXVItemRegistryRef@@PEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@PEAVCreativeItemRegistry@@_NAEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void serverInitCreativeItemsCallback(
        class ItemRegistryRef,
        class ActorInfoRegistry*,
        class BlockDefinitionGroup*  blockDefinitionGroup,
        class CreativeItemRegistry*  creativeItemRegistry,
        bool                         isClient,
        class BaseGameVersion const& worldVersion,
        class Experiments const&     experiments
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addCommandOnlyCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void
    _addCommandOnlyCategory(class CreativeItemRegistry* creativeItemRegistry, class ItemRegistryRef, class BaseGameVersion const&, class Experiments const&);

    // symbol:
    // ?_addConstructionCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void
    _addConstructionCategory(class CreativeItemRegistry* creativeItemRegistry, class ItemRegistryRef, class BaseGameVersion const&, class Experiments const&);

    // symbol:
    // ?_addEquipmentCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void _addEquipmentCategory(
        class CreativeItemRegistry* creativeItemRegistry,
        class ItemRegistryRef,
        class BaseGameVersion const& worldVersion,
        class Experiments const&     experiments
    );

    // symbol:
    // ?_addItemsCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void
    _addItemsCategory(class CreativeItemRegistry* creativeItemRegistry, class ItemRegistryRef, class BaseGameVersion const& worldVersion, class Experiments const&);

    // symbol:
    // ?_addNatureCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void _addNatureCategory(
        class CreativeItemRegistry* creativeItemRegistry,
        class ItemRegistryRef,
        class BaseGameVersion const& worldVersion,
        class Experiments const&     experiments
    );

    // NOLINTEND
};
