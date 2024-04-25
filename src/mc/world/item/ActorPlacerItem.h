#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ActorPlacerItem : public ::Item {
public:
    // prevent constructor by default
    ActorPlacerItem& operator=(ActorPlacerItem const&);
    ActorPlacerItem(ActorPlacerItem const&);
    ActorPlacerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorPlacerItem@@UEAA@XZ
    virtual ~ActorPlacerItem() = default;

    // vIndex: 2, symbol: ?tearDown@ActorPlacerItem@@UEAAXXZ
    virtual void tearDown();

    // vIndex: 45, symbol: ?isLiquidClipItem@ActorPlacerItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 46, symbol: ?shouldInteractionWithBlockBypassLiquid@ActorPlacerItem@@UEBA_NAEBVBlock@@@Z
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const& block) const;

    // vIndex: 56, symbol: ?isValidAuxValue@ActorPlacerItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 60, symbol: ?isActorPlacerItem@ActorPlacerItem@@UEBA_NXZ
    virtual bool isActorPlacerItem() const;

    // vIndex: 61, symbol: ?isMultiColorTinted@ActorPlacerItem@@UEBA_NAEBVItemStack@@@Z
    virtual bool isMultiColorTinted(class ItemStack const&) const;

    // vIndex: 67, symbol: ?getBaseColor@ActorPlacerItem@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    virtual class mce::Color getBaseColor(class ItemStack const&) const;

    // vIndex: 68, symbol: ?getSecondaryColor@ActorPlacerItem@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    virtual class mce::Color getSecondaryColor(class ItemStack const&) const;

    // vIndex: 69, symbol: ?getActorIdentifier@ActorPlacerItem@@UEBA?AUActorDefinitionIdentifier@@AEBVItemStack@@@Z
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const;

    // vIndex: 73, symbol: ?dispense@ActorPlacerItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@ActorPlacerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104, symbol: ?getIconInfo@ActorPlacerItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 118, symbol:
    // ?_useOn@ActorPlacerItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol:
    // ??0ActorPlacerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBUActorDefinitionIdentifier@@@Z
    MCAPI ActorPlacerItem(std::string const& name, int id, struct ActorDefinitionIdentifier const& actorID);

    // symbol: ?forEachCustomEgg@ActorPlacerItem@@SAXVItemRegistryRef@@AEBV?$function@$$A6AXAEBVItem@@@Z@std@@@Z
    MCAPI static void forEachCustomEgg(class ItemRegistryRef, std::function<void(class Item const&)> const& callback);

    // symbol:
    // ?getCustomSpawnEggName@ActorPlacerItem@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI static std::string getCustomSpawnEggName(int);

    // symbol: ?registerCustomEggs@ActorPlacerItem@@SAXVItemRegistryRef@@AEBVActorInfoRegistry@@@Z
    MCAPI static void registerCustomEggs(class ItemRegistryRef, class ActorInfoRegistry const& registry);

    // symbol: ?spawnOrMoveAgent@ActorPlacerItem@@SAPEAVActor@@AEBVVec3@@AEAV2@@Z
    MCAPI static class Actor* spawnOrMoveAgent(class Vec3 const& pos, class Actor& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getActorID@ActorPlacerItem@@AEBA?AUActorDefinitionIdentifier@@AEAVBlockSource@@@Z
    MCAPI struct ActorDefinitionIdentifier _getActorID(class BlockSource& region) const;

    // symbol: ?_spawnActorAt@ActorPlacerItem@@AEBAPEAVActor@@AEAVBlockSource@@AEBVVec3@@1AEBVItemStack@@PEAV2@@Z
    MCAPI class Actor* _spawnActorAt(
        class BlockSource&     region,
        class Vec3 const&      pos,
        class Vec3 const&      playerFeetPos,
        class ItemStack const& item,
        class Actor*           spawner
    ) const;

    // symbol: ?_setAgentOwner@ActorPlacerItem@@CAXAEAVPlayer@@AEAVAgent@@@Z
    MCAPI static void _setAgentOwner(class Player& owner, class Agent& agent);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?EGG_MASK_ID@ActorPlacerItem@@0HB
    MCAPI static int const EGG_MASK_ID;

    // symbol: ?NUM_SPAWN_EGG_TEXTURES@ActorPlacerItem@@0HB
    MCAPI static int const NUM_SPAWN_EGG_TEXTURES;

    // symbol:
    // ?mCustomSpawnEggs@ActorPlacerItem@@0V?$unordered_map@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@A
    MCAPI static std::unordered_map<uint, std::string> mCustomSpawnEggs;

    // symbol:
    // ?mEggTextureInfoMap@ActorPlacerItem@@0V?$unordered_map@VHashedString@@UResolvedItemIconInfo@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@UResolvedItemIconInfo@@@std@@@4@@std@@A
    MCAPI static std::unordered_map<class HashedString, struct ResolvedItemIconInfo> mEggTextureInfoMap;

    // NOLINTEND
};
