#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/CreativeItemCategory.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ItemAcquisitionMethod.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class Item {
public:
    // Item inner types declare
    // clang-format off
    class ScopedCreativeGroup;
    class Tier;
    // clang-format on

    // Item inner types define
    class ScopedCreativeGroup {
    public:
        // prevent constructor by default
        ScopedCreativeGroup& operator=(ScopedCreativeGroup const&);
        ScopedCreativeGroup(ScopedCreativeGroup const&);
        ScopedCreativeGroup();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, class ItemInstance const&);

        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVBlock@@PEBVCompoundTag@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, class Block const*, class CompoundTag const*);

        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV1@FPEBVCompoundTag@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, class Item*, short, class CompoundTag const*);

        // symbol: ??1ScopedCreativeGroup@Item@@QEAA@XZ
        MCAPI ~ScopedCreativeGroup();

        // NOLINTEND
    };

    class Tier {
    public:
        // prevent constructor by default
        Tier& operator=(Tier const&);
        Tier(Tier const&);
        Tier();

    public:
        // NOLINTBEGIN
        // symbol: ??0Tier@Item@@QEAA@HHMHH@Z
        MCAPI Tier(int, int, float, int, int);

        // symbol: ?getAttackDamageBonus@Tier@Item@@QEBAHXZ
        MCAPI int getAttackDamageBonus() const;

        // symbol: ?getEnchantmentValue@Tier@Item@@QEBAHXZ
        MCAPI int getEnchantmentValue() const;

        // symbol: ?getLevel@Tier@Item@@QEBAHXZ
        MCAPI int getLevel() const;

        // symbol: ?getSpeed@Tier@Item@@QEBAMXZ
        MCAPI float getSpeed() const;

        // symbol: ?getUses@Tier@Item@@QEBAHXZ
        MCAPI int getUses() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Item& operator=(Item const&);
    Item(Item const&);
    Item();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initServer@Item@@UEAA_NAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual bool initServer(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 2, symbol: ?tearDown@Item@@UEAAXXZ
    virtual void tearDown();

    // vIndex: 3, symbol:
    // ?setDescriptionId@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Item& setDescriptionId(std::string const&);

    // vIndex: 4, symbol:
    // ?getDescriptionId@Item@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getDescriptionId() const;

    // vIndex: 5, symbol: ?getMaxUseDuration@Item@@UEBAHPEBVItemInstance@@@Z
    virtual int getMaxUseDuration(class ItemInstance const*) const;

    // vIndex: 6, symbol: ?getMaxUseDuration@Item@@UEBAHPEBVItemStack@@@Z
    virtual int getMaxUseDuration(class ItemStack const*) const;

    // vIndex: 7, symbol: ?isMusicDisk@Item@@UEBA_NXZ
    virtual bool isMusicDisk() const;

    // vIndex: 8, symbol: ?hasTag@Item@@UEBA_NAEBVHashedString@@@Z
    virtual bool hasTag(class HashedString const&) const;

    // vIndex: 9, symbol: ?hasTag@Item@@UEBA_NAEBUItemTag@@@Z
    virtual bool hasTag(struct ItemTag const&) const;

    // vIndex: 10, symbol:
    // ?executeEvent@Item@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: ?isArmor@Item@@UEBA_NXZ
    virtual bool isArmor() const;

    // vIndex: 13, symbol: ?isBlockPlanterItem@Item@@UEBA_NXZ
    virtual bool isBlockPlanterItem() const;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: ?isCamera@Item@@UEBA_NXZ
    virtual bool isCamera() const;

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: ?isDamageable@Item@@UEBA_NXZ
    virtual bool isDamageable() const;

    // vIndex: 18, symbol: ?isDyeable@Item@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 19, symbol: ?isDye@Item@@UEBA_NXZ
    virtual bool isDye() const;

    // vIndex: 20, symbol: ?getItemColor@Item@@UEBA?AW4ItemColor@@XZ
    virtual ::ItemColor getItemColor() const;

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol: ?isFood@Item@@UEBA_NXZ
    virtual bool isFood() const;

    // vIndex: 23, symbol: ?isThrowable@Item@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 24, symbol: ?isUseable@Item@@UEBA_NXZ
    virtual bool isUseable() const;

    // vIndex: 25, symbol: ?getComponent@Item@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
    virtual class ItemComponent* getComponent(class HashedString const&) const;

    // vIndex: 26, symbol: ?getCamera@Item@@UEBAPEAVICameraItemComponent@@XZ
    virtual class ICameraItemComponent* getCamera() const;

    // vIndex: 27, symbol: ?getFood@Item@@UEBAPEAVIFoodItemComponent@@XZ
    virtual class IFoodItemComponent* getFood() const;

    // vIndex: 28, symbol: ?setMaxStackSize@Item@@UEAAAEAV1@E@Z
    virtual class Item& setMaxStackSize(uchar);

    // vIndex: 29, symbol: ?setStackedByData@Item@@UEAAAEAV1@_N@Z
    virtual class Item& setStackedByData(bool);

    // vIndex: 30, symbol: ?setMaxDamage@Item@@UEAAAEAV1@H@Z
    virtual class Item& setMaxDamage(int);

    // vIndex: 31, symbol: ?setHandEquipped@Item@@UEAAAEAV1@XZ
    virtual class Item& setHandEquipped();

    // vIndex: 32, symbol: ?setUseAnimation@Item@@UEAAAEAV1@W4UseAnimation@@@Z
    virtual class Item& setUseAnimation(::UseAnimation);

    // vIndex: 33, symbol: ?setMaxUseDuration@Item@@UEAAAEAV1@H@Z
    virtual class Item& setMaxUseDuration(int);

    // vIndex: 34, symbol: ?setRequiresWorldBuilder@Item@@UEAAAEAV1@_N@Z
    virtual class Item& setRequiresWorldBuilder(bool);

    // vIndex: 35, symbol: ?setExplodable@Item@@UEAAAEAV1@_N@Z
    virtual class Item& setExplodable(bool);

    // vIndex: 36, symbol: ?setFireResistant@Item@@UEAAAEAV1@_N@Z
    virtual class Item& setFireResistant(bool);

    // vIndex: 37, symbol: ?setIsGlint@Item@@UEAAAEAV1@_N@Z
    virtual class Item& setIsGlint(bool);

    // vIndex: 38, symbol: ?setShouldDespawn@Item@@UEAAAEAV1@_N@Z
    virtual class Item& setShouldDespawn(bool);

    // vIndex: 39, symbol:
    // ?buildNetworkTag@Item@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 40, symbol: ?initializeFromNetwork@Item@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&);

    // vIndex: 41, symbol:
    // ?validateFromNetwork@Item@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const&);

    // vIndex: 42, symbol: ?getBlockShape@Item@@UEBA?AW4BlockShape@@XZ
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 43, symbol: ?canBeDepleted@Item@@UEBA_NXZ
    virtual bool canBeDepleted() const;

    // vIndex: 44, symbol: ?canDestroySpecial@Item@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const&) const;

    // vIndex: 45, symbol: ?getLevelDataForAuxValue@Item@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int) const;

    // vIndex: 46, symbol: ?isStackedByData@Item@@UEBA_NXZ
    virtual bool isStackedByData() const;

    // vIndex: 47, symbol: ?getMaxDamage@Item@@UEBAFXZ
    virtual short getMaxDamage() const;

    // vIndex: 48, symbol: ?getAttackDamage@Item@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 49, symbol: ?isHandEquipped@Item@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 50, symbol: ?isGlint@Item@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool isGlint(class ItemStackBase const&) const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 52, symbol: ?getPatternIndex@Item@@UEBAHXZ
    virtual int getPatternIndex() const;

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 54, symbol: ?isWearableThroughLootTable@Item@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool isWearableThroughLootTable(class CompoundTag const*) const;

    // vIndex: 55, symbol: ?canDestroyInCreative@Item@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 56, symbol: ?isDestructive@Item@@UEBA_NH@Z
    virtual bool isDestructive(int) const;

    // vIndex: 57, symbol: ?isLiquidClipItem@Item@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 58, symbol: ?shouldInteractionWithBlockBypassLiquid@Item@@UEBA_NAEBVBlock@@@Z
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;

    // vIndex: 59, symbol: ?requiresInteract@Item@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 61, symbol: ?isValidRepairItem@Item@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 62, symbol: ?getEnchantSlot@Item@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 63, symbol: ?getEnchantValue@Item@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 64, symbol: ?getArmorValue@Item@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 65, symbol: ?getToughnessValue@Item@@UEBAHXZ
    virtual int getToughnessValue() const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 67, symbol: ?isValidAuxValue@Item@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

    // vIndex: 68, symbol: ?getDamageChance@Item@@UEBAHH@Z
    virtual int getDamageChance(int) const;

    // vIndex: 69, symbol: ?getViewDamping@Item@@UEBAMXZ
    virtual float getViewDamping() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 73, symbol: ?getColor@Item@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 74, symbol: ?hasCustomColor@Item@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const*) const;

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 76, symbol: ?clearColor@Item@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 77, symbol: ?clearColor@Item@@UEBAXPEAVCompoundTag@@@Z
    virtual void clearColor(class CompoundTag*) const;

    // vIndex: 78, symbol: ?setColor@Item@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 81, symbol: ?getActorIdentifier@Item@@UEBA?AUActorDefinitionIdentifier@@AEBVItemStack@@@Z
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const;

    // vIndex: 82, symbol: ?buildIdAux@Item@@UEBAHFPEBVCompoundTag@@@Z
    virtual int buildIdAux(short, class CompoundTag const*) const;

    // vIndex: 83, symbol: ?canUseOnSimTick@Item@@UEBA_NXZ
    virtual bool canUseOnSimTick() const;

    // vIndex: 84, symbol: ?use@Item@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 85, symbol: ?dispense@Item@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 86, symbol: ?useTimeDepleted@Item@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;

    // vIndex: 87, symbol: ?releaseUsing@Item@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack&, class Player*, int) const;

    // vIndex: 88, symbol: ?getDestroySpeed@Item@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;

    // vIndex: 89, symbol: ?hurtActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 90, symbol: ?hitActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 91, symbol: ?hitBlock@Item@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;

    // vIndex: 92, symbol: ?mineBlock@Item@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 93, symbol: ?mineBlock@Item@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 94, symbol:
    // ?buildDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildDescriptionName(class ItemStackBase const&) const;

    // vIndex: 95, symbol:
    // ?buildDescriptionId@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 96, symbol:
    // ?buildEffectDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 97, symbol:
    // ?buildCategoryDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string buildCategoryDescriptionName() const;

    // vIndex: 98, symbol: ?readUserData@Item@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
    virtual void readUserData(class ItemStackBase&, class IDataInput&, class ReadOnlyBinaryStream&) const;

    // vIndex: 99, symbol: ?writeUserData@Item@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
    virtual void writeUserData(class ItemStackBase const&, class IDataOutput&) const;

    // vIndex: 100, symbol: ?getMaxStackSize@Item@@UEBAEAEBVItemDescriptor@@@Z
    virtual uchar getMaxStackSize(class ItemDescriptor const&) const;

    // vIndex: 101, symbol: ?inventoryTick@Item@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;

    // vIndex: 102, symbol: ?refreshedInContainer@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;

    // vIndex: 103, symbol: ?getCooldownType@Item@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 104, symbol: ?getCooldownTime@Item@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 105, symbol: ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase&) const;

    // vIndex: 106, symbol: ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    virtual void fixupCommon(class ItemStackBase&, class Level&) const;

    // vIndex: 107, symbol: ?getDamageValue@Item@@UEBAFPEBVCompoundTag@@@Z
    virtual short getDamageValue(class CompoundTag const*) const;

    // vIndex: 108, symbol: ?setDamageValue@Item@@UEBAXAEAVItemStackBase@@F@Z
    virtual void setDamageValue(class ItemStackBase&, short) const;

    // vIndex: 109, symbol: ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
    virtual ::InHandUpdateType
    getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool) const;

    // vIndex: 110, symbol: ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
    virtual ::InHandUpdateType
    getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;

    // vIndex: 111, symbol: ?validFishInteraction@Item@@UEBA_NH@Z
    virtual bool validFishInteraction(int) const;

    // vIndex: 112, symbol: ?enchantProjectile@Item@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
    virtual void enchantProjectile(class ItemStackBase const&, class Actor&) const;

    // vIndex: 113, symbol: ?getEquipLocation@Item@@UEBA?AW4ActorLocation@@XZ
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 114, symbol: ?getEquipSound@Item@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getEquipSound() const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 117, symbol: ?hasSameRelevantUserData@Item@@UEBA_NAEBVItemStackBase@@0@Z
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const;

    // vIndex: 118, symbol: ?initClient@Item@@UEAAXAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual void initClient(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 119, symbol:
    // ?setIconInfo@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 120, symbol: ?getIconInfo@Item@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 121, symbol:
    // ?getInteractText@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 122, symbol: ?getAnimationFrameFor@Item@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;

    // vIndex: 123, symbol: ?isEmissive@Item@@UEBA_NH@Z
    virtual bool isEmissive(int) const;

    // vIndex: 124, symbol: ?getLightEmission@Item@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int) const;

    // vIndex: 125, symbol: ?getIconYOffset@Item@@UEBAHXZ
    virtual int getIconYOffset() const;

    // vIndex: 126, symbol: ?canBeCharged@Item@@UEBA_NXZ
    virtual bool canBeCharged() const;

    // vIndex: 127, symbol: ?playSoundIncrementally@Item@@UEBAXAEBVItemInstance@@AEAVMob@@@Z
    virtual void playSoundIncrementally(class ItemInstance const&, class Mob&) const;

    // vIndex: 128, symbol: ?playSoundIncrementally@Item@@UEBAXAEBVItemStack@@AEAVMob@@@Z
    virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;

    // vIndex: 129, symbol: ?getFurnaceBurnIntervalMultipler@Item@@UEBAMXZ
    virtual float getFurnaceBurnIntervalMultipler() const;

    // vIndex: 130, symbol: ?getFurnaceXPmultiplier@Item@@UEBAMAEBVItemStackBase@@@Z
    virtual float getFurnaceXPmultiplier(class ItemStackBase const&) const;

    // vIndex: 131, symbol:
    // ?getAuxValuesDescription@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 132, symbol: ?_checkUseOnPermissions@Item@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
    virtual bool _checkUseOnPermissions(class Actor&, class ItemStackBase&, uchar const&, class BlockPos const&) const;

    // vIndex: 133, symbol: ?_calculatePlacePos@Item@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, uchar&, class BlockPos&) const;

    // vIndex: 134, symbol: ?_shouldAutoCalculatePlacePos@Item@@EEBA_NXZ
    virtual bool _shouldAutoCalculatePlacePos() const;

    // vIndex: 135, symbol: ?_useOn@Item@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&) const;

    // symbol: ?getBaseColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    MCVAPI class mce::Color getBaseColor(class ItemStack const&) const;

    // symbol: ?getSecondaryColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const&) const;

    // symbol: ?hasCustomColor@Item@@UEBA_NAEBVItemStackBase@@@Z
    MCVAPI bool hasCustomColor(class ItemStackBase const&) const;

    // symbol: ?isActorPlacerItem@Item@@UEBA_NXZ
    MCVAPI bool isActorPlacerItem() const;

    // symbol: ?isBucket@Item@@UEBA_NXZ
    MCVAPI bool isBucket() const;

    // symbol: ?isCandle@Item@@UEBA_NXZ
    MCVAPI bool isCandle() const;

    // symbol: ?isComplex@Item@@UEBA_NXZ
    MCVAPI bool isComplex() const;

    // symbol: ?isComponentBased@Item@@UEBA_NXZ
    MCVAPI bool isComponentBased() const;

    // symbol: ?isFertilizer@Item@@UEBA_NXZ
    MCVAPI bool isFertilizer() const;

    // symbol: ?isMultiColorTinted@Item@@UEBA_NAEBVItemStack@@@Z
    MCVAPI bool isMultiColorTinted(class ItemStack const&) const;

    // symbol: ?isPattern@Item@@UEBA_NXZ
    MCVAPI bool isPattern() const;

    // symbol: ?shouldSendInteractionGameEvents@Item@@UEBA_NXZ
    MCVAPI bool shouldSendInteractionGameEvents() const;

    // symbol: ?showsDurabilityInCreative@Item@@UEBA_NXZ
    MCVAPI bool showsDurabilityInCreative() const;

    // symbol: ?uniqueAuxValues@Item@@UEBA_NXZ
    MCVAPI bool uniqueAuxValues() const;

    // symbol: ?useInterruptedByAttacking@Item@@UEBA_NXZ
    MCVAPI bool useInterruptedByAttacking() const;

    // symbol: ??1Item@@UEAA@XZ
    MCVAPI ~Item();

    // symbol: ??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI Item(std::string const&, short);

    // symbol: ?addOnResetBAIcallback@Item@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z
    MCAPI void addOnResetBAIcallback(std::function<void(void)> const&);

    // symbol: ?addTag@Item@@QEAAAEAV1@AEBVHashedString@@@Z
    MCAPI class Item& addTag(class HashedString const&);

    // symbol: ?addTag@Item@@QEAAAEAV1@AEBUItemTag@@@Z
    MCAPI class Item& addTag(struct ItemTag const&);

    // symbol: ?addTags@Item@@QEAAAEAV1@V?$initializer_list@V?$reference_wrapper@$$CBUItemTag@@@std@@@std@@@Z
    MCAPI class Item& addTags(std::initializer_list<std::reference_wrapper<struct ItemTag const>>);

    // symbol: ?allowOffhand@Item@@QEBA_NXZ
    MCAPI bool allowOffhand() const;

    // symbol: ?buildDescriptor@Item@@QEBA?AVItemDescriptor@@FPEBVCompoundTag@@@Z
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const*) const;

    // symbol: ?calculatePlacePos@Item@@QEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    MCAPI bool calculatePlacePos(class ItemStackBase&, class Actor&, uchar&, class BlockPos&) const;

    // symbol: ?canBeUsedInCommands@Item@@QEBA_NAEBVBaseGameVersion@@@Z
    MCAPI bool canBeUsedInCommands(class BaseGameVersion const&) const;

    // symbol: ?destroySpeedBonus@Item@@QEBAMAEBVItemStackBase@@@Z
    MCAPI float destroySpeedBonus(class ItemStackBase const&) const;

    // symbol: ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@@Z
    MCAPI void fixupOnLoad(class ItemStackBase&) const;

    // symbol: ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    MCAPI void fixupOnLoad(class ItemStackBase&, class Level&) const;

    // symbol: ?getCommandNames@Item@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
    MCAPI std::vector<struct CommandName> getCommandNames() const;

    // symbol: ?getCreativeCategory@Item@@QEBA?AW4CreativeItemCategory@@XZ
    MCAPI ::CreativeItemCategory getCreativeCategory() const;

    // symbol: ?getCreativeGroup@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCreativeGroup() const;

    // symbol: ?getFrameCount@Item@@QEBAHXZ
    MCAPI int getFrameCount() const;

    // symbol: ?getFullItemName@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFullItemName() const;

    // symbol: ?getFullNameHash@Item@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getFullNameHash() const;

    // symbol: ?getId@Item@@QEBAFXZ
    MCAPI short getId() const;

    // symbol: ?getLegacyBlock@Item@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const;

    // symbol: ?getNamespace@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNamespace() const;

    // symbol: ?getRawNameHash@Item@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getRawNameHash() const;

    // symbol: ?getRawNameId@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getRawNameId() const;

    // symbol: ?getRequiredBaseGameVersion@Item@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    // symbol: ?getSerializedName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSerializedName() const;

    // symbol: ?getUseAnimation@Item@@QEBA?AW4UseAnimation@@XZ
    MCAPI ::UseAnimation getUseAnimation() const;

    // symbol: ?hasDamageValue@Item@@QEBA_NPEBVCompoundTag@@@Z
    MCAPI bool hasDamageValue(class CompoundTag const*) const;

    // symbol: ?hasTag@Item@@QEBA_NAEB_K@Z
    MCAPI bool hasTag(uint64 const&) const;

    // symbol: ?isCommandOnly@Item@@QEBA_NAEBVBaseGameVersion@@@Z
    MCAPI bool isCommandOnly(class BaseGameVersion const&) const;

    // symbol: ?isElytra@Item@@QEBA_NXZ
    MCAPI bool isElytra() const;

    // symbol: ?isExplodable@Item@@QEBA_NXZ
    MCAPI bool isExplodable() const;

    // symbol: ?isFireResistant@Item@@QEBA_NXZ
    MCAPI bool isFireResistant() const;

    // symbol: ?isNameTag@Item@@QEBA_NXZ
    MCAPI bool isNameTag() const;

    // symbol: ?isSeed@Item@@QEBA_NXZ
    MCAPI bool isSeed() const;

    // symbol: ??8Item@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class Item const&) const;

    // symbol: ?removeDamageValue@Item@@QEBAXAEAVItemStackBase@@@Z
    MCAPI void removeDamageValue(class ItemStackBase&) const;

    // symbol: ?setAllowOffhand@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setAllowOffhand(bool);

    // symbol: ?setCategory@Item@@QEAAAEAV1@W4CreativeItemCategory@@@Z
    MCAPI class Item& setCategory(::CreativeItemCategory);

    // symbol: ?setCreativeGroup@Item@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Item& setCreativeGroup(std::string const&);

    // symbol: ?setFurnaceBurnIntervalMultiplier@Item@@QEAAAEAV1@M@Z
    MCAPI class Item& setFurnaceBurnIntervalMultiplier(float);

    // symbol: ?setFurnaceXPmultiplier@Item@@QEAAAEAV1@M@Z
    MCAPI class Item& setFurnaceXPmultiplier(float);

    // symbol: ?setHoverTextColorFormat@Item@@QEAAXAEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void setHoverTextColorFormat(std::string_view const&);

    // symbol: ?setIsMirroredArt@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setIsMirroredArt(bool);

    // symbol: ?setMinRequiredBaseGameVersion@Item@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
    MCAPI class Item& setMinRequiredBaseGameVersion(class BaseGameVersion const&);

    // symbol: ?shouldDespawn@Item@@QEBA_NXZ
    MCAPI bool shouldDespawn() const;

    // symbol: ?updateCustomBlockEntityTag@Item@@QEBA_NAEAVBlockSource@@AEAVItemStackBase@@AEBVBlockPos@@@Z
    MCAPI bool updateCustomBlockEntityTag(class BlockSource&, class ItemStackBase&, class BlockPos const&) const;

    // symbol: ?useOn@Item@@QEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@@Z
    MCAPI class InteractionResult useOn(class ItemStack&, class Actor&, int, int, int, uchar, class Vec3 const&) const;

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVBlock@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class Block const&);

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVItemInstance@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemInstance const&);

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVItemStack@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemStack const&);

    // symbol: ?addLooseCreativeItems@Item@@SAX_NAEBVBaseGameVersion@@VItemRegistryRef@@@Z
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const&, class ItemRegistryRef);

    // symbol: ?endCreativeItemDefinitions@Item@@SAX_N@Z
    MCAPI static void endCreativeItemDefinitions(bool);

    // symbol: ?isElytra@Item@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isElytra(class ItemDescriptor const&);

    // symbol: ?isElytraBroken@Item@@SA_NH@Z
    MCAPI static bool isElytraBroken(int);

    // symbol: ?isFlyEnabled@Item@@SA_NAEBVItemInstance@@@Z
    MCAPI static bool isFlyEnabled(class ItemInstance const&);

    // symbol: ?isSameTypeAndItem@Item@@SA_NAEBVItemStackBase@@0@Z
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const&, class ItemStackBase const&);

    // symbol: ?startCreativeItemDefinitions@Item@@SAX_NPEAVCreativeItemRegistry@@@Z
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry*);

    // symbol: ?toBlockId@Item@@SA?AUNewBlockID@@F@Z
    MCAPI static struct NewBlockID toBlockId(short);

    // symbol: ?ICON_DESCRIPTION_PREFIX@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;

    // symbol: ?TAG_DAMAGE@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_DAMAGE;

    // symbol: ?mActiveCreativeGroupInfo@Item@@2PEAVCreativeGroupInfo@@EA
    MCAPI static class CreativeGroupInfo* mActiveCreativeGroupInfo;

    // symbol: ?mActiveCreativeItemCategory@Item@@2PEAVCreativeItemGroupCategory@@EA
    MCAPI static class CreativeItemGroupCategory* mActiveCreativeItemCategory;

    // symbol: ?mActiveCreativeItemRegistry@Item@@2PEAVCreativeItemRegistry@@EA
    MCAPI static class CreativeItemRegistry* mActiveCreativeItemRegistry;

    // symbol: ?mGenerateDenyParticleEffect@Item@@2_NB
    MCAPI static bool const mGenerateDenyParticleEffect;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_helpChangeInventoryItemInPlace@Item@@IEBAXAEAVActor@@AEAVItemStack@@1W4ItemAcquisitionMethod@@@Z
    MCAPI void
    _helpChangeInventoryItemInPlace(class Actor&, class ItemStack&, class ItemStack&, ::ItemAcquisitionMethod) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addLooseCreativeItemsClient@Item@@CAXXZ
    MCAPI static void _addLooseCreativeItemsClient();

    // symbol: ?_addLooseCreativeItemsServer@Item@@CAXAEBVBaseGameVersion@@VItemRegistryRef@@@Z
    MCAPI static void _addLooseCreativeItemsServer(class BaseGameVersion const&, class ItemRegistryRef);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mServerItemsUsedInCreativeItems@Item@@0V?$unique_ptr@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@U?$default_delete@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@@2@@std@@A
    MCAPI static std::unique_ptr<std::set<short>> mServerItemsUsedInCreativeItems;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mServerItemsUsedInCreativeItems() { return mServerItemsUsedInCreativeItems; }

    // NOLINTEND
};
