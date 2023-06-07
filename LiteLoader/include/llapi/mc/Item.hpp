/**
 * @file  Item.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#define ENABLE_VIRTUAL_FAKESYMBOL_ITEM
#undef BEFORE_EXTRA

/**
 * @brief MC class Item.
 *
 */
class Item {

#define AFTER_EXTRA
// Add Member There
public:
class Tier {
public:
    Tier() = delete;
    Tier(Tier const&) = delete;
    Tier(Tier const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEM
public:
    class Item& operator=(class Item const &) = delete;
    Item(class Item const &) = delete;
    Item() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initServer\@Item\@\@UEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    virtual bool initServer(class Json::Value &, class SemVersion const &, bool, class Experiments const &);
    /**
     * @vftbl 2
     * @symbol ?tearDown\@Item\@\@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @vftbl 3
     * @symbol ?setDescriptionId\@Item\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Item & setDescriptionId(std::string const &);
    /**
     * @vftbl 4
     * @symbol ?getDescriptionId\@Item\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getDescriptionId() const;
    /**
     * @vftbl 5
     * @symbol ?getMaxUseDuration\@Item\@\@UEBAHPEBVItemInstance\@\@\@Z
     */
    virtual int getMaxUseDuration(class ItemInstance const *) const;
    /**
     * @vftbl 6
     * @symbol ?getMaxUseDuration\@Item\@\@UEBAHPEBVItemStack\@\@\@Z
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
    /**
     * @vftbl 7
     * @symbol ?isMusicDisk\@Item\@\@UEBA_NXZ
     */
    virtual bool isMusicDisk() const;
    /**
     * @vftbl 8
     * @symbol ?hasTag\@Item\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool hasTag(class HashedString const &) const;
    /**
     * @vftbl 9
     * @symbol ?hasTag\@Item\@\@UEBA_NAEBUItemTag\@\@\@Z
     */
    virtual bool hasTag(struct ItemTag const &) const;
    /**
     * @vftbl 10
     * @symbol ?executeEvent\@Item\@\@UEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol ?isArmor\@Item\@\@UEBA_NXZ
     */
    virtual bool isArmor() const;
    /**
     * @vftbl 13
     * @symbol ?isBlockPlanterItem\@Item\@\@UEBA_NXZ
     */
    virtual bool isBlockPlanterItem() const;
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol ?isCamera\@Item\@\@UEBA_NXZ
     */
    virtual bool isCamera() const;
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol ?isDamageable\@Item\@\@UEBA_NXZ
     */
    virtual bool isDamageable() const;
    /**
     * @vftbl 18
     * @symbol ?isDyeable\@Item\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 20
     * @symbol ?getItemColor\@Item\@\@UEBA?AW4ItemColor\@\@XZ
     */
    virtual enum class ItemColor getItemColor() const;
    /**
     * @vftbl 21
     * @symbol ?isFertilizer\@Item\@\@UEBA_NXZ
     */
    virtual bool isFertilizer() const;
    /**
     * @vftbl 22
     * @symbol ?isFood\@Item\@\@UEBA_NXZ
     */
    virtual bool isFood() const;
    /**
     * @vftbl 23
     * @symbol ?isThrowable\@Item\@\@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @vftbl 24
     * @symbol ?isUseable\@Item\@\@UEBA_NXZ
     */
    virtual bool isUseable() const;
    /**
     * @vftbl 25
     * @symbol ?getComponent\@Item\@\@UEBAPEAVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    /**
     * @vftbl 26
     * @symbol ?getCamera\@Item\@\@UEBAPEAVICameraItemComponent\@\@XZ
     */
    virtual class ICameraItemComponent * getCamera() const;
    /**
     * @vftbl 27
     * @symbol ?getFood\@Item\@\@UEBAPEAVIFoodItemComponent\@\@XZ
     */
    virtual class IFoodItemComponent * getFood() const;
    /**
     * @vftbl 28
     * @symbol ?setMaxStackSize\@Item\@\@UEAAAEAV1\@E\@Z
     */
    virtual class Item & setMaxStackSize(unsigned char);
    /**
     * @vftbl 29
     * @symbol ?setStackedByData\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setStackedByData(bool);
    /**
     * @vftbl 30
     * @symbol ?setMaxDamage\@Item\@\@UEAAAEAV1\@H\@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @vftbl 31
     * @symbol ?setHandEquipped\@Item\@\@UEAAAEAV1\@XZ
     */
    virtual class Item & setHandEquipped();
    /**
     * @vftbl 32
     * @symbol ?setUseAnimation\@Item\@\@UEAAAEAV1\@W4UseAnimation\@\@\@Z
     */
    virtual class Item & setUseAnimation(enum class UseAnimation);
    /**
     * @vftbl 33
     * @symbol ?setMaxUseDuration\@Item\@\@UEAAAEAV1\@H\@Z
     */
    virtual class Item & setMaxUseDuration(int);
    /**
     * @vftbl 34
     * @symbol ?setRequiresWorldBuilder\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setRequiresWorldBuilder(bool);
    /**
     * @vftbl 35
     * @symbol ?setExplodable\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setExplodable(bool);
    /**
     * @vftbl 36
     * @symbol ?setFireResistant\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setFireResistant(bool);
    /**
     * @vftbl 37
     * @symbol ?setIsGlint\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setIsGlint(bool);
    /**
     * @vftbl 38
     * @symbol ?setShouldDespawn\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setShouldDespawn(bool);
    /**
     * @vftbl 39
     * @symbol ?buildNetworkTag\@Item\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 40
     * @symbol ?initializeFromNetwork\@Item\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @vftbl 41
     * @symbol ?validateFromNetwork\@Item\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /**
     * @vftbl 42
     * @symbol ?getBlockShape\@Item\@\@UEBA?AW4BlockShape\@\@XZ
     */
    virtual enum class BlockShape getBlockShape() const;
    /**
     * @vftbl 43
     * @symbol ?canBeDepleted\@Item\@\@UEBA_NXZ
     */
    virtual bool canBeDepleted() const;
    /**
     * @vftbl 44
     * @symbol ?canDestroySpecial\@Item\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @vftbl 45
     * @symbol ?getLevelDataForAuxValue\@Item\@\@UEBAHH\@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @vftbl 46
     * @symbol ?isStackedByData\@Item\@\@UEBA_NXZ
     */
    virtual bool isStackedByData() const;
    /**
     * @vftbl 47
     * @symbol ?getMaxDamage\@Item\@\@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @vftbl 48
     * @symbol ?getAttackDamage\@Item\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @vftbl 49
     * @symbol ?isHandEquipped\@Item\@\@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
    /**
     * @vftbl 50
     * @symbol ?isGlint\@Item\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 52
     * @symbol ?getPatternIndex\@Item\@\@UEBAHXZ
     */
    virtual int getPatternIndex() const;
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 54
     * @symbol ?isWearableThroughLootTable\@Item\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /**
     * @vftbl 55
     * @symbol ?canDestroyInCreative\@Item\@\@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @vftbl 56
     * @symbol ?isDestructive\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @vftbl 57
     * @symbol ?isLiquidClipItem\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl 58
     * @symbol ?shouldInteractionWithBlockBypassLiquid\@Item\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @vftbl 59
     * @symbol ?requiresInteract\@Item\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl 60
     * @symbol ?appendFormattedHovertext\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl 61
     * @symbol ?isValidRepairItem\@Item\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl 62
     * @symbol ?getEnchantSlot\@Item\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl 63
     * @symbol ?getEnchantValue\@Item\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl 64
     * @symbol ?getArmorValue\@Item\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 65
     * @symbol ?getToughnessValue\@Item\@\@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl 68
     * @symbol ?getDamageChance\@Item\@\@UEBAHH\@Z
     */
    virtual int getDamageChance(int) const;
    /**
     * @vftbl 69
     * @symbol ?getViewDamping\@Item\@\@UEBAMXZ
     */
    virtual float getViewDamping() const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl 73
     * @symbol ?getColor\@Item\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl 74
     * @symbol ?hasCustomColor\@Item\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 76
     * @symbol ?clearColor\@Item\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @vftbl 77
     * @symbol ?clearColor\@Item\@\@UEBAXPEAVCompoundTag\@\@\@Z
     */
    virtual void clearColor(class CompoundTag *) const;
    /**
     * @vftbl 78
     * @symbol ?setColor\@Item\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 81
     * @symbol ?getActorIdentifier\@Item\@\@UEBA?AUActorDefinitionIdentifier\@\@AEBVItemStack\@\@\@Z
     */
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /**
     * @vftbl 82
     * @symbol ?buildIdAux\@Item\@\@UEBAHFPEBVCompoundTag\@\@\@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @vftbl 83
     * @symbol ?canUseOnSimTick\@Item\@\@UEBA_NXZ
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @vftbl 84
     * @symbol ?use\@Item\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl 85
     * @symbol ?dispense\@Item\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl 86
     * @symbol ?useTimeDepleted\@Item\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl 87
     * @symbol ?releaseUsing\@Item\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vftbl 88
     * @symbol ?getDestroySpeed\@Item\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@Item\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl 90
     * @symbol ?hitActor\@Item\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl 91
     * @symbol ?hitBlock\@Item\@\@UEBAXAEAVItemStack\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVMob\@\@\@Z
     */
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @vftbl 92
     * @symbol ?mineBlock\@Item\@\@UEBA_NAEAVItemInstance\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@Item\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl 94
     * @symbol ?buildDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /**
     * @vftbl 95
     * @symbol ?buildDescriptionId\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl 96
     * @symbol ?buildEffectDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @vftbl 97
     * @symbol ?buildCategoryDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string buildCategoryDescriptionName() const;
    /**
     * @vftbl 98
     * @symbol ?readUserData\@Item\@\@UEBAXAEAVItemStackBase\@\@AEAVIDataInput\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @vftbl 99
     * @symbol ?writeUserData\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVIDataOutput\@\@\@Z
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @vftbl 100
     * @symbol ?getMaxStackSize\@Item\@\@UEBAEAEBVItemDescriptor\@\@\@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @vftbl 101
     * @symbol ?inventoryTick\@Item\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl 102
     * @symbol ?refreshedInContainer\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /**
     * @vftbl 103
     * @symbol ?getCooldownType\@Item\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @vftbl 104
     * @symbol ?getCooldownTime\@Item\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @vftbl 105
     * @symbol ?fixupCommon\@Item\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase &) const;
    /**
     * @vftbl 106
     * @symbol ?fixupCommon\@Item\@\@UEBAXAEAVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /**
     * @vftbl 107
     * @symbol ?getDamageValue\@Item\@\@UEBAFPEBVCompoundTag\@\@\@Z
     */
    virtual short getDamageValue(class CompoundTag const *) const;
    /**
     * @vftbl 108
     * @symbol ?setDamageValue\@Item\@\@UEBAXAEAVItemStackBase\@\@F\@Z
     */
    virtual void setDamageValue(class ItemStackBase &, short) const;
    /**
     * @vftbl 109
     * @symbol ?getInHandUpdateType\@Item\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemInstance\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @vftbl 110
     * @symbol ?getInHandUpdateType\@Item\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemStack\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @vftbl 111
     * @symbol ?validFishInteraction\@Item\@\@UEBA_NH\@Z
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @vftbl 112
     * @symbol ?enchantProjectile\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVActor\@\@\@Z
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @vftbl 113
     * @symbol ?getEquipLocation\@Item\@\@UEBA?AW4ActorLocation\@\@XZ
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @vftbl 114
     * @symbol ?getEquipSound\@Item\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115();
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116();
    /**
     * @vftbl 117
     * @symbol ?hasSameRelevantUserData\@Item\@\@UEBA_NAEBVItemStackBase\@\@0\@Z
     */
    virtual bool hasSameRelevantUserData(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @vftbl 118
     * @symbol ?initClient\@Item\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    virtual void initClient(class Json::Value &, class SemVersion const &, bool, class Experiments const &);
    /**
     * @vftbl 119
     * @symbol ?setIconInfo\@Item\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@Item\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl 121
     * @symbol ?getInteractText\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @vftbl 122
     * @symbol ?getAnimationFrameFor\@Item\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @vftbl 123
     * @symbol ?isEmissive\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isEmissive(int) const;
    /**
     * @vftbl 124
     * @symbol ?getLightEmission\@Item\@\@UEBA?AUBrightness\@\@H\@Z
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @vftbl 125
     * @symbol ?getIconYOffset\@Item\@\@UEBAHXZ
     */
    virtual int getIconYOffset() const;
    /**
     * @vftbl 126
     * @symbol ?canBeCharged\@Item\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @vftbl 127
     * @symbol ?playSoundIncrementally\@Item\@\@UEBAXAEBVItemInstance\@\@AEAVMob\@\@\@Z
     */
    virtual void playSoundIncrementally(class ItemInstance const &, class Mob &) const;
    /**
     * @vftbl 128
     * @symbol ?playSoundIncrementally\@Item\@\@UEBAXAEBVItemStack\@\@AEAVMob\@\@\@Z
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @vftbl 129
     * @symbol ?getFurnaceBurnIntervalMultipler\@Item\@\@UEBAMXZ
     */
    virtual float getFurnaceBurnIntervalMultipler() const;
    /**
     * @vftbl 130
     * @symbol ?getFurnaceXPmultiplier\@Item\@\@UEBAMAEBVItemStackBase\@\@\@Z
     */
    virtual float getFurnaceXPmultiplier(class ItemStackBase const &) const;
    /**
     * @vftbl 131
     * @symbol ?getAuxValuesDescription\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @vftbl 132
     * @symbol ?_checkUseOnPermissions\@Item\@\@EEBA_NAEAVActor\@\@AEAVItemStackBase\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /**
     * @vftbl 133
     * @symbol ?_calculatePlacePos\@Item\@\@EEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl 134
     * @symbol ?_useOn\@Item\@\@EEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual class InteractionResult _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEM
    /**
     * @symbol ?getBaseColor\@Item\@\@UEBA?AVColor\@mce\@\@AEBVItemStack\@\@\@Z
     */
    MCVAPI class mce::Color getBaseColor(class ItemStack const &) const;
    /**
     * @symbol ?getSecondaryColor\@Item\@\@UEBA?AVColor\@mce\@\@AEBVItemStack\@\@\@Z
     */
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const &) const;
    /**
     * @symbol ?hasCustomColor\@Item\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @symbol ?isActorPlacerItem\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isActorPlacerItem() const;
    /**
     * @symbol ?isBucket\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isBucket() const;
    /**
     * @symbol ?isCandle\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isCandle() const;
    /**
     * @symbol ?isComplex\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isComplex() const;
    /**
     * @symbol ?isComponentBased\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const;
    /**
     * @symbol ?isDye\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isDye() const;
    /**
     * @symbol ?isMultiColorTinted\@Item\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool isMultiColorTinted(class ItemStack const &) const;
    /**
     * @symbol ?isPattern\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isPattern() const;
    /**
     * @symbol ?shouldSendInteractionGameEvents\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool shouldSendInteractionGameEvents() const;
    /**
     * @symbol ?showsDurabilityInCreative\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @symbol ?uniqueAuxValues\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
    /**
     * @symbol ?useInterruptedByAttacking\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool useInterruptedByAttacking() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Item();
#endif
    /**
     * @symbol ??0Item\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI Item(std::string const &, short);
    /**
     * @symbol ?addOnResetBAIcallback\@Item\@\@QEAAXAEBV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void addOnResetBAIcallback(class std::function<void (void)> const &);
    /**
     * @symbol ?addTag\@Item\@\@QEAAAEAV1\@AEBUItemTag\@\@\@Z
     */
    MCAPI class Item & addTag(struct ItemTag const &);
    /**
     * @symbol ?addTag\@Item\@\@QEAAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Item & addTag(class HashedString const &);
    /**
     * @symbol ?addTags\@Item\@\@QEAAAEAV1\@V?$initializer_list\@V?$reference_wrapper\@$$CBUItemTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Item & addTags(class std::initializer_list<class std::reference_wrapper<struct ItemTag const>>);
    /**
     * @symbol ?buildDescriptor\@Item\@\@QEBA?AVItemDescriptor\@\@FPEBVCompoundTag\@\@\@Z
     */
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    /**
     * @symbol ?calculatePlacePos\@Item\@\@QEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    MCAPI bool calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @symbol ?destroySpeedBonus\@Item\@\@QEBAMAEBVItemStackBase\@\@\@Z
     */
    MCAPI float destroySpeedBonus(class ItemStackBase const &) const;
    /**
     * @symbol ?getCommandNames\@Item\@\@QEBA?AV?$vector\@UCommandName\@\@V?$allocator\@UCommandName\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    /**
     * @symbol ?getCreativeCategory\@Item\@\@QEBA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @symbol ?getCreativeGroup\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getCreativeGroup() const;
    /**
     * @symbol ?getFrameCount\@Item\@\@QEBAHXZ
     */
    MCAPI int getFrameCount() const;
    /**
     * @symbol ?getFullItemName\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFullItemName() const;
    /**
     * @symbol ?getFullNameHash\@Item\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getFullNameHash() const;
    /**
     * @symbol ?getId\@Item\@\@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @symbol ?getLegacyBlock\@Item\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @symbol ?getNamespace\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @symbol ?getRawNameHash\@Item\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @symbol ?getRawNameId\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getRawNameId() const;
    /**
     * @symbol ?getRequiredBaseGameVersion\@Item\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @symbol ?getSerializedName\@Item\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSerializedName() const;
    /**
     * @symbol ?isCommandOnly\@Item\@\@QEBA_NAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI bool isCommandOnly(class BaseGameVersion const &) const;
    /**
     * @symbol ?isElytra\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isElytra() const;
    /**
     * @symbol ?isNameTag\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isNameTag() const;
    /**
     * @symbol ?isSeed\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isSeed() const;
    /**
     * @symbol ??8Item\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Item const &) const;
    /**
     * @symbol ?setAllowOffhand\@Item\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class Item & setAllowOffhand(bool);
    /**
     * @symbol ?setCategory\@Item\@\@QEAAAEAV1\@W4CreativeItemCategory\@\@\@Z
     */
    MCAPI class Item & setCategory(enum class CreativeItemCategory);
    /**
     * @symbol ?setCreativeGroup\@Item\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Item & setCreativeGroup(std::string const &);
    /**
     * @symbol ?setFurnaceBurnIntervalMultiplier\@Item\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class Item & setFurnaceBurnIntervalMultiplier(float);
    /**
     * @symbol ?setFurnaceXPmultiplier\@Item\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class Item & setFurnaceXPmultiplier(float);
    /**
     * @symbol ?setIsMirroredArt\@Item\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class Item & setIsMirroredArt(bool);
    /**
     * @symbol ?setMinRequiredBaseGameVersion\@Item\@\@QEAAAEAV1\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI class Item & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?shouldDespawn\@Item\@\@QEBA_NXZ
     */
    MCAPI bool shouldDespawn() const;
    /**
     * @symbol ?updateCustomBlockEntityTag\@Item\@\@QEBA_NAEAVBlockSource\@\@AEAVItemStackBase\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool updateCustomBlockEntityTag(class BlockSource &, class ItemStackBase &, class BlockPos const &) const;
    /**
     * @symbol ?useOn\@Item\@\@QEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@HHHEAEBVVec3\@\@\@Z
     */
    MCAPI class InteractionResult useOn(class ItemStack &, class Actor &, int, int, int, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ?ICON_DESCRIPTION_PREFIX\@Item\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;
    /**
     * @symbol ?TAG_DAMAGE\@Item\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DAMAGE;
    /**
     * @symbol ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class Block const &);
    /**
     * @symbol ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemStack const &);
    /**
     * @symbol ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemInstance const &);
    /**
     * @symbol ?addLooseCreativeItems\@Item\@\@SAX_NAEBVBaseGameVersion\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const &, class ItemRegistryRef);
    /**
     * @symbol ?endCreativeItemDefinitions\@Item\@\@SAX_N\@Z
     */
    MCAPI static void endCreativeItemDefinitions(bool);
    /**
     * @symbol ?isElytra\@Item\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isElytra(class ItemDescriptor const &);
    /**
     * @symbol ?isElytraBroken\@Item\@\@SA_NH\@Z
     */
    MCAPI static bool isElytraBroken(int);
    /**
     * @symbol ?isFlyEnabled\@Item\@\@SA_NAEBVItemInstance\@\@\@Z
     */
    MCAPI static bool isFlyEnabled(class ItemInstance const &);
    /**
     * @symbol ?isSameTypeAndItem\@Item\@\@SA_NAEBVItemStackBase\@\@0\@Z
     */
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const &, class ItemStackBase const &);
    /**
     * @symbol ?mActiveCreativeGroupInfo\@Item\@\@2PEAVCreativeGroupInfo\@\@EA
     */
    MCAPI static class CreativeGroupInfo * mActiveCreativeGroupInfo;
    /**
     * @symbol ?mActiveCreativeItemCategory\@Item\@\@2PEAVCreativeItemGroupCategory\@\@EA
     */
    MCAPI static class CreativeItemGroupCategory * mActiveCreativeItemCategory;
    /**
     * @symbol ?mActiveCreativeItemRegistry\@Item\@\@2PEAVCreativeItemRegistry\@\@EA
     */
    MCAPI static class CreativeItemRegistry * mActiveCreativeItemRegistry;
    /**
     * @symbol ?mGenerateDenyParticleEffect\@Item\@\@2_NB
     */
    MCAPI static bool const mGenerateDenyParticleEffect;
    /**
     * @symbol ?startCreativeItemDefinitions\@Item\@\@SAX_NPEAVCreativeItemRegistry\@\@\@Z
     */
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry *);
    /**
     * @symbol ?toBlockId\@Item\@\@SA?AUNewBlockID\@\@F\@Z
     */
    MCAPI static struct NewBlockID toBlockId(short);

//protected:
    /**
     * @symbol ?_helpChangeInventoryItemInPlace\@Item\@\@IEBAXAEAVActor\@\@AEAVItemStack\@\@1W4ItemAcquisitionMethod\@\@\@Z
     */
    MCAPI void _helpChangeInventoryItemInPlace(class Actor &, class ItemStack &, class ItemStack &, enum class ItemAcquisitionMethod) const;

//private:
    /**
     * @symbol ?_addLooseCreativeItemsClient\@Item\@\@CAXXZ
     */
    MCAPI static void _addLooseCreativeItemsClient();
    /**
     * @symbol ?_addLooseCreativeItemsServer\@Item\@\@CAXAEBVBaseGameVersion\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI static void _addLooseCreativeItemsServer(class BaseGameVersion const &, class ItemRegistryRef);

protected:

private:
    /**
     * @symbol ?mServerItemsUsedInCreativeItems\@Item\@\@0V?$unique_ptr\@V?$set\@FU?$less\@F\@std\@\@V?$allocator\@F\@2\@\@std\@\@U?$default_delete\@V?$set\@FU?$less\@F\@std\@\@V?$allocator\@F\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>> mServerItemsUsedInCreativeItems;

};
