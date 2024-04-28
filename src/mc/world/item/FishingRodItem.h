#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class FishingRodItem : public ::ComponentItem {
public:
    // prevent constructor by default
    FishingRodItem& operator=(FishingRodItem const&);
    FishingRodItem(FishingRodItem const&);
    FishingRodItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FishingRodItem@@UEAA@XZ
    virtual ~FishingRodItem() = default;

    // vIndex: 37, symbol: ?isHandEquipped@FishingRodItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 47, symbol: ?requiresInteract@FishingRodItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 50, symbol: ?getEnchantSlot@FishingRodItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@FishingRodItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 72, symbol: ?use@FishingRodItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 77, symbol: ?hurtActor@FishingRodItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 80, symbol: ?mineBlock@FishingRodItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& item, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@FishingRodItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 99, symbol: ?shouldSendInteractionGameEvents@FishingRodItem@@UEBA_NXZ
    virtual bool shouldSendInteractionGameEvents() const;

    // vIndex: 103, symbol:
    // ?setIconInfo@FishingRodItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 104, symbol: ?getIconInfo@FishingRodItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 105, symbol:
    // ?getInteractText@FishingRodItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 106, symbol: ?getAnimationFrameFor@FishingRodItem@@UEBAHPEAVMob@@_NPEBVItemStack@@1@Z
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // vIndex: 121, symbol: ?shouldUseJsonForRenderMatrix@FishingRodItem@@UEBA_NXZ
    virtual bool shouldUseJsonForRenderMatrix() const;

    // symbol:
    // ??0FishingRodItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAUReflectionCtx@cereal@@@Z
    MCAPI FishingRodItem(std::string const&, int, struct cereal::ReflectionCtx&);

    // NOLINTEND
};
