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

class ShieldItem : public ::Item {
public:
    // prevent constructor by default
    ShieldItem& operator=(ShieldItem const&);
    ShieldItem(ShieldItem const&);
    ShieldItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShieldItem@@UEAA@XZ
    virtual ~ShieldItem() = default;

    // vIndex: 37, symbol: ?isHandEquipped@ShieldItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@ShieldItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49, symbol: ?isValidRepairItem@ShieldItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50, symbol: ?getEnchantSlot@ShieldItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 72, symbol: ?use@ShieldItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player&) const;

    // vIndex: 73, symbol: ?dispense@ShieldItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 77, symbol: ?hurtActor@ShieldItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@ShieldItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 84, symbol:
    // ?readUserData@ShieldItem@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
    virtual void
    readUserData(class ItemStackBase& stack, class IDataInput& input, class ReadOnlyBinaryStream& underlyingStream)
        const;

    // vIndex: 85, symbol: ?writeUserData@ShieldItem@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
    virtual void writeUserData(class ItemStackBase const& stack, class IDataOutput& output) const;

    // vIndex: 87, symbol: ?inventoryTick@ShieldItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool
    inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 89, symbol: ?getCooldownType@ShieldItem@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 90, symbol: ?getCooldownTime@ShieldItem@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 93, symbol:
    // ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
    virtual ::InHandUpdateType getInHandUpdateType(
        class Player const&       player,
        class ItemInstance const& oldItem,
        class ItemInstance const& newItem,
        bool                      isMainHand,
        bool                      slotChanged
    ) const;

    // vIndex: 94, symbol: ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
    virtual ::InHandUpdateType getInHandUpdateType(
        class Player const&    player,
        class ItemStack const& oldItem,
        class ItemStack const& newItem,
        bool                   isMainHand,
        bool                   slotChanged
    ) const;

    // vIndex: 98, symbol: ?getEquipSound@ShieldItem@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // symbol: ??0ShieldItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ShieldItem(std::string const& name, int id);

    // symbol: ?playBlockSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
    MCAPI void playBlockSound(class Player* player) const;

    // symbol: ?playBreakSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
    MCAPI void playBreakSound(class Player* player) const;

    // symbol: ?EFFECTIVE_BLOCK_DELAY@ShieldItem@@2HB
    MCAPI static int const EFFECTIVE_BLOCK_DELAY;

    // symbol: ?IN_HAND_BLOCK_DURATION@ShieldItem@@2HB
    MCAPI static int const IN_HAND_BLOCK_DURATION;

    // symbol: ?NO_SHIELD_PATTERN@ShieldItem@@2HB
    MCAPI static int const NO_SHIELD_PATTERN;

    // symbol: ?TIMESTAMP_TAG@ShieldItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TIMESTAMP_TAG;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getInHandUpdateType@ShieldItem@@AEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
    MCAPI ::InHandUpdateType _getInHandUpdateType(
        class Player const&    player,
        class ItemStack const& oldItem,
        class ItemStack const& newItem,
        bool,
        bool slotChanged
    ) const;

    // NOLINTEND
};
