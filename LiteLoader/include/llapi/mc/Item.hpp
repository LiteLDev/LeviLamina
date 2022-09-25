/**
 * @file  Item.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Item();
    /**
     * @hash   1360186178
     * @vftbl  1
     * @symbol ?initServer@Item@@UEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual bool initServer(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1374571352
     * @vftbl  2
     * @symbol ?tearDown@Item@@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @hash   1619744892
     * @vftbl  3
     * @symbol ?setDescriptionId@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class Item & setDescriptionId(std::string const &);
    /**
     * @hash   1045512838
     * @vftbl  4
     * @symbol ?getDescriptionId@Item@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getDescriptionId() const;
    /**
     * @hash   1271005310
     * @vftbl  5
     * @symbol ?getMaxUseDuration@Item@@UEBAHPEBVItemInstance@@@Z
     */
    virtual int getMaxUseDuration(class ItemInstance const *) const;
    /**
     * @hash   -363427927
     * @vftbl  6
     * @symbol ?getMaxUseDuration@Item@@UEBAHPEBVItemStack@@@Z
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   1856365452
     * @vftbl  8
     * @symbol ?hasTag@Item@@UEBA_NAEBVHashedString@@@Z
     */
    virtual bool hasTag(class HashedString const &) const;
    /**
     * @hash   939067486
     * @vftbl  9
     * @symbol ?hasTag@Item@@UEBA_NAEBUItemTag@@@Z
     */
    virtual bool hasTag(struct ItemTag const &) const;
    /**
     * @hash   903582968
     * @vftbl  10
     * @symbol ?executeEvent@Item@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @hash   2049273434
     * @vftbl  12
     * @symbol ?isArmor@Item@@UEBA_NXZ
     */
    virtual bool isArmor() const;
    /**
     * @hash   1298169485
     * @vftbl  13
     * @symbol ?isBlockPlanterItem@Item@@UEBA_NXZ
     */
    virtual bool isBlockPlanterItem() const;
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @hash   1076405316
     * @vftbl  15
     * @symbol ?isCamera@Item@@UEBA_NXZ
     */
    virtual bool isCamera() const;
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   933430008
     * @vftbl  17
     * @symbol ?isDamageable@Item@@UEBA_NXZ
     */
    virtual bool isDamageable() const;
    /**
     * @hash   -207779707
     * @vftbl  18
     * @symbol ?isDyeable@Item@@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @hash   -880494997
     * @vftbl  19
     * @symbol ?isDye@Item@@UEBA_NXZ
     */
    virtual bool isDye() const;
    /**
     * @hash   -724944051
     * @vftbl  20
     * @symbol ?getItemColor@Item@@UEBA?AW4ItemColor@@XZ
     */
    virtual enum ItemColor getItemColor() const;
    /**
     * @hash   1482663569
     * @vftbl  21
     * @symbol ?isFertilizer@Item@@UEBA_NXZ
     */
    virtual bool isFertilizer() const;
    /**
     * @hash   -754257235
     * @vftbl  22
     * @symbol ?isFood@Item@@UEBA_NXZ
     */
    virtual bool isFood() const;
    /**
     * @hash   1161281211
     * @vftbl  23
     * @symbol ?isThrowable@Item@@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @hash   -2037829188
     * @vftbl  24
     * @symbol ?isUseable@Item@@UEBA_NXZ
     */
    virtual bool isUseable() const;
    /**
     * @hash   -988318413
     * @vftbl  25
     * @symbol ?getComponent@Item@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
     */
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    /**
     * @hash   407748776
     * @vftbl  26
     * @symbol ?getCamera@Item@@UEBAPEAVICameraItemComponent@@XZ
     */
    virtual class ICameraItemComponent * getCamera() const;
    /**
     * @hash   -2038722102
     * @vftbl  27
     * @symbol ?getFood@Item@@UEBAPEAVIFoodItemComponent@@XZ
     */
    virtual class IFoodItemComponent * getFood() const;
    /**
     * @hash   -211393066
     * @vftbl  28
     * @symbol ?getFuel@Item@@UEBAPEBVFuelItemComponent@@XZ
     */
    virtual class FuelItemComponent const * getFuel() const;
    /**
     * @hash   1441633403
     * @vftbl  29
     * @symbol ?setMaxStackSize@Item@@UEAAAEAV1@E@Z
     */
    virtual class Item & setMaxStackSize(unsigned char);
    /**
     * @hash   -1372857733
     * @vftbl  30
     * @symbol ?setStackedByData@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setStackedByData(bool);
    /**
     * @hash   -1260805645
     * @vftbl  31
     * @symbol ?setMaxDamage@Item@@UEAAAEAV1@H@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @hash   -262293093
     * @vftbl  32
     * @symbol ?setHandEquipped@Item@@UEAAAEAV1@XZ
     */
    virtual class Item & setHandEquipped();
    /**
     * @hash   -622765443
     * @vftbl  33
     * @symbol ?setUseAnimation@Item@@UEAAAEAV1@W4UseAnimation@@@Z
     */
    virtual class Item & setUseAnimation(enum UseAnimation);
    /**
     * @hash   428564171
     * @vftbl  34
     * @symbol ?setMaxUseDuration@Item@@UEAAAEAV1@H@Z
     */
    virtual class Item & setMaxUseDuration(int);
    /**
     * @hash   -1536892696
     * @vftbl  35
     * @symbol ?setRequiresWorldBuilder@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setRequiresWorldBuilder(bool);
    /**
     * @hash   -751709935
     * @vftbl  36
     * @symbol ?setExplodable@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setExplodable(bool);
    /**
     * @hash   -1497368980
     * @vftbl  37
     * @symbol ?setFireResistant@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setFireResistant(bool);
    /**
     * @hash   180050403
     * @vftbl  38
     * @symbol ?setIsGlint@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setIsGlint(bool);
    /**
     * @hash   1984049180
     * @vftbl  39
     * @symbol ?setShouldDespawn@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setShouldDespawn(bool);
    /**
     * @hash   -1044344288
     * @vftbl  40
     * @symbol ?buildNetworkTag@Item@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -1162170238
     * @vftbl  41
     * @symbol ?initializeFromNetwork@Item@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   798591801
     * @vftbl  42
     * @symbol ?validateFromNetwork@Item@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /**
     * @hash   -890145085
     * @vftbl  43
     * @symbol ?getBlockShape@Item@@UEBA?AW4BlockShape@@XZ
     */
    virtual enum BlockShape getBlockShape() const;
    /**
     * @hash   1275434339
     * @vftbl  44
     * @symbol ?canBeDepleted@Item@@UEBA_NXZ
     */
    virtual bool canBeDepleted() const;
    /**
     * @hash   1815313414
     * @vftbl  45
     * @symbol ?canDestroySpecial@Item@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @hash   -1993216825
     * @vftbl  46
     * @symbol ?getLevelDataForAuxValue@Item@@UEBAHH@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @hash   315661907
     * @vftbl  47
     * @symbol ?isStackedByData@Item@@UEBA_NXZ
     */
    virtual bool isStackedByData() const;
    /**
     * @hash   -1053712856
     * @vftbl  48
     * @symbol ?getMaxDamage@Item@@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @hash   -1239851691
     * @vftbl  49
     * @symbol ?getAttackDamage@Item@@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @hash   -993632499
     * @vftbl  50
     * @symbol ?isHandEquipped@Item@@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
    /**
     * @hash   925590652
     * @vftbl  51
     * @symbol ?isGlint@Item@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @hash   -1803732864
     * @vftbl  53
     * @symbol ?getPatternIndex@Item@@UEBAHXZ
     */
    virtual int getPatternIndex() const;
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -487549237
     * @vftbl  55
     * @symbol ?isWearableThroughLootTable@Item@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /**
     * @hash   -966980349
     * @vftbl  56
     * @symbol ?canDestroyInCreative@Item@@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @hash   -159256208
     * @vftbl  57
     * @symbol ?isDestructive@Item@@UEBA_NH@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @hash   -189013953
     * @vftbl  58
     * @symbol ?isLiquidClipItem@Item@@UEBA_NH@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @hash   2019218601
     * @vftbl  59
     * @symbol ?shouldInteractionWithBlockBypassLiquid@Item@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @hash   1488215817
     * @vftbl  60
     * @symbol ?requiresInteract@Item@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   1356362508
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   -1569728069
     * @vftbl  62
     * @symbol ?isValidRepairItem@Item@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   -2016157687
     * @vftbl  63
     * @symbol ?getEnchantSlot@Item@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   1537640886
     * @vftbl  64
     * @symbol ?getEnchantValue@Item@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @hash   415096912
     * @vftbl  65
     * @symbol ?getArmorValue@Item@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   -995157763
     * @vftbl  66
     * @symbol ?getToughnessValue@Item@@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   512929065
     * @vftbl  68
     * @symbol ?isValidAuxValue@Item@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @hash   -1754222644
     * @vftbl  69
     * @symbol ?getDamageChance@Item@@UEBAHH@Z
     */
    virtual int getDamageChance(int) const;
    /**
     * @hash   -812109870
     * @vftbl  70
     * @symbol ?getViewDamping@Item@@UEBAMXZ
     */
    virtual float getViewDamping() const;
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @hash   242279094
     * @vftbl  74
     * @symbol ?getColor@Item@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @hash   -1039487529
     * @vftbl  75
     * @symbol ?hasCustomColor@Item@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @hash   -1371296773
     * @vftbl  77
     * @symbol ?clearColor@Item@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @hash   -417338866
     * @vftbl  78
     * @symbol ?clearColor@Item@@UEBAXPEAVCompoundTag@@@Z
     */
    virtual void clearColor(class CompoundTag *) const;
    /**
     * @hash   -1992837805
     * @vftbl  79
     * @symbol ?setColor@Item@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   451257348
     * @vftbl  82
     * @symbol ?getActorIdentifier@Item@@UEBA?AUActorDefinitionIdentifier@@AEBVItemStack@@@Z
     */
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /**
     * @hash   672161127
     * @vftbl  83
     * @symbol ?buildIdAux@Item@@UEBAHFPEBVCompoundTag@@@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @hash   -282847869
     * @vftbl  84
     * @symbol ?canUseOnSimTick@Item@@UEBA_NXZ
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @hash   -1059107205
     * @vftbl  85
     * @symbol ?use@Item@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   239562527
     * @vftbl  86
     * @symbol ?dispense@Item@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -1351773965
     * @vftbl  87
     * @symbol ?useTimeDepleted@Item@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   -1799980315
     * @vftbl  88
     * @symbol ?releaseUsing@Item@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   588420103
     * @vftbl  89
     * @symbol ?getDestroySpeed@Item@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @hash   555136417
     * @vftbl  90
     * @symbol ?hurtActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -272676875
     * @vftbl  91
     * @symbol ?hitActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -471170092
     * @vftbl  92
     * @symbol ?hitBlock@Item@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
     */
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @hash   -1210423917
     * @vftbl  93
     * @symbol ?mineBlock@Item@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   -457950312
     * @vftbl  94
     * @symbol ?mineBlock@Item@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   -2040773119
     * @vftbl  95
     * @symbol ?buildDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   -1206757449
     * @vftbl  96
     * @symbol ?buildDescriptionId@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   1668157858
     * @vftbl  97
     * @symbol ?buildEffectDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   -2106500318
     * @vftbl  98
     * @symbol ?buildCategoryDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string buildCategoryDescriptionName() const;
    /**
     * @hash   -535569222
     * @vftbl  99
     * @symbol ?readUserData@Item@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @hash   1228637468
     * @vftbl  100
     * @symbol ?writeUserData@Item@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @hash   -1781048724
     * @vftbl  101
     * @symbol ?getMaxStackSize@Item@@UEBAEAEBVItemDescriptor@@@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @hash   1734820435
     * @vftbl  102
     * @symbol ?inventoryTick@Item@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @hash   184184378
     * @vftbl  103
     * @symbol ?refreshedInContainer@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
     */
    virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /**
     * @hash   1668305463
     * @vftbl  104
     * @symbol ?getCooldownType@Item@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @hash   1392812470
     * @vftbl  105
     * @symbol ?getCooldownTime@Item@@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @hash   1170696550
     * @vftbl  106
     * @symbol ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void fixupCommon(class ItemStackBase &) const;
    /**
     * @hash   -1382647696
     * @vftbl  107
     * @symbol ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
     */
    virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /**
     * @hash   -1726377091
     * @vftbl  108
     * @symbol ?getDamageValue@Item@@UEBAFPEBVCompoundTag@@@Z
     */
    virtual short getDamageValue(class CompoundTag const *) const;
    /**
     * @hash   -1156483185
     * @vftbl  109
     * @symbol ?setDamageValue@Item@@UEBAXAEAVItemStackBase@@F@Z
     */
    virtual void setDamageValue(class ItemStackBase &, short) const;
    /**
     * @hash   1703907947
     * @vftbl  110
     * @symbol ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
     */
    virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @hash   -472721117
     * @vftbl  111
     * @symbol ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     */
    virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @hash   725983914
     * @vftbl  112
     * @symbol ?validFishInteraction@Item@@UEBA_NH@Z
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @hash   -563326871
     * @vftbl  113
     * @symbol ?enchantProjectile@Item@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @hash   -455189128
     * @vftbl  114
     * @symbol ?getEquipLocation@Item@@UEBA?AW4ActorLocation@@XZ
     */
    virtual enum ActorLocation getEquipLocation() const;
    /**
     * @hash   495550873
     * @vftbl  115
     * @symbol ?getEquipSound@Item@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getEquipSound() const;
    /**
     * @hash   -1307957528
     * @vftbl  116
     * @symbol ?isSameItem@Item@@UEBA_NAEBVItemStackBase@@0@Z
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @hash   446793096
     * @vftbl  117
     * @symbol ?initClient@Item@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void initClient(class Json::Value &, class SemVersion const &);
    /**
     * @hash   850137358
     * @vftbl  118
     * @symbol ?getInteractText@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   1677143682
     * @vftbl  119
     * @symbol ?getAnimationFrameFor@Item@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @hash   -2080047321
     * @vftbl  120
     * @symbol ?isEmissive@Item@@UEBA_NH@Z
     */
    virtual bool isEmissive(int) const;
    /**
     * @hash   -1974726658
     * @vftbl  121
     * @symbol ?getLightEmission@Item@@UEBA?AUBrightness@@H@Z
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @hash   2079670902
     * @vftbl  122
     * @symbol ?getIcon@Item@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   2104215365
     * @vftbl  123
     * @symbol ?getIconYOffset@Item@@UEBAHXZ
     */
    virtual int getIconYOffset() const;
    /**
     * @hash   -5309751
     * @vftbl  124
     * @symbol ?setIcon@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   -312928358
     * @vftbl  125
     * @symbol ?setIcon@Item@@UEAAAEAV1@AEBUTextureUVCoordinateSet@@@Z
     */
    virtual class Item & setIcon(struct TextureUVCoordinateSet const &);
    /**
     * @hash   -350228546
     * @vftbl  126
     * @symbol ?setIconAtlas@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIconAtlas(std::string const &, int);
    /**
     * @hash   1674651618
     * @vftbl  127
     * @symbol ?canBeCharged@Item@@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @hash   -1611302302
     * @vftbl  128
     * @symbol ?playSoundIncrementally@Item@@UEBAXAEBVItemInstance@@AEAVMob@@@Z
     */
    virtual void playSoundIncrementally(class ItemInstance const &, class Mob &) const;
    /**
     * @hash   2094397335
     * @vftbl  129
     * @symbol ?playSoundIncrementally@Item@@UEBAXAEBVItemStack@@AEAVMob@@@Z
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @hash   1404865338
     * @vftbl  130
     * @symbol ?getFurnaceBurnIntervalMultipler@Item@@UEBAMAEBVItemStackBase@@@Z
     */
    virtual float getFurnaceBurnIntervalMultipler(class ItemStackBase const &) const;
    /**
     * @hash   -1699608261
     * @vftbl  131
     * @symbol ?getFurnaceXPmultiplier@Item@@UEBAMAEBVItemStackBase@@@Z
     */
    virtual float getFurnaceXPmultiplier(class ItemStackBase const &) const;
    /**
     * @hash   -2098803309
     * @vftbl  132
     * @symbol ?getAuxValuesDescription@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @hash   1659575727
     * @vftbl  133
     * @symbol ?_checkUseOnPermissions@Item@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
     */
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /**
     * @hash   1723581838
     * @vftbl  134
     * @symbol ?_calculatePlacePos@Item@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @hash   1604972977
     * @vftbl  135
     * @symbol ?_useOn@Item@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEM
    /**
     * @hash   794875654
     * @symbol ?getBaseColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
     */
    MCVAPI class mce::Color getBaseColor(class ItemStack const &) const;
    /**
     * @hash   -1333771491
     * @symbol ?getSecondaryColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
     */
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const &) const;
    /**
     * @hash   622800644
     * @symbol ?hasCustomColor@Item@@UEBA_NAEBVItemStackBase@@@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @hash   778063598
     * @symbol ?isActorPlacerItem@Item@@UEBA_NXZ
     */
    MCVAPI bool isActorPlacerItem() const;
    /**
     * @hash   -1259498311
     * @symbol ?isBucket@Item@@UEBA_NXZ
     */
    MCVAPI bool isBucket() const;
    /**
     * @hash   262652924
     * @symbol ?isCandle@Item@@UEBA_NXZ
     */
    MCVAPI bool isCandle() const;
    /**
     * @hash   533885355
     * @symbol ?isComplex@Item@@UEBA_NXZ
     */
    MCVAPI bool isComplex() const;
    /**
     * @hash   -1663332859
     * @symbol ?isComponentBased@Item@@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const;
    /**
     * @hash   1003873087
     * @symbol ?isMultiColorTinted@Item@@UEBA_NAEBVItemStack@@@Z
     */
    MCVAPI bool isMultiColorTinted(class ItemStack const &) const;
    /**
     * @hash   -1271214691
     * @symbol ?isMusicDisk@Item@@UEBA_NXZ
     */
    MCVAPI bool isMusicDisk() const;
    /**
     * @hash   -761189237
     * @symbol ?isPattern@Item@@UEBA_NXZ
     */
    MCVAPI bool isPattern() const;
    /**
     * @hash   -1477348232
     * @symbol ?showsDurabilityInCreative@Item@@UEBA_NXZ
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @hash   -2058325926
     * @symbol ?uniqueAuxValues@Item@@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @hash   -1349648458
     * @symbol ??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     */
    MCAPI Item(std::string const &, short);
    /**
     * @hash   -1539868248
     * @symbol ?addOnResetBAIcallback@Item@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void addOnResetBAIcallback(class std::function<void (void)> const &);
    /**
     * @hash   -475722045
     * @symbol ?addTag@Item@@QEAAAEAV1@AEBUItemTag@@@Z
     */
    MCAPI class Item & addTag(struct ItemTag const &);
    /**
     * @hash   1256474437
     * @symbol ?addTag@Item@@QEAAAEAV1@AEBVHashedString@@@Z
     */
    MCAPI class Item & addTag(class HashedString const &);
    /**
     * @hash   -1748977694
     * @symbol ?allowOffhand@Item@@QEBA_NXZ
     */
    MCAPI bool allowOffhand() const;
    /**
     * @hash   -2016792074
     * @symbol ?buildDescriptor@Item@@QEBA?AVItemDescriptor@@FPEBVCompoundTag@@@Z
     */
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    /**
     * @hash   -1932295500
     * @symbol ?calculatePlacePos@Item@@QEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     */
    MCAPI bool calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @hash   -404494957
     * @symbol ?destroySpeedBonus@Item@@QEBAMAEBVItemStackBase@@@Z
     */
    MCAPI float destroySpeedBonus(class ItemStackBase const &) const;
    /**
     * @hash   -1305812310
     * @symbol ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@@Z
     */
    MCAPI void fixupOnLoad(class ItemStackBase &) const;
    /**
     * @hash   -132431715
     * @symbol ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@AEAVLevel@@@Z
     */
    MCAPI void fixupOnLoad(class ItemStackBase &, class Level &) const;
    /**
     * @hash   1164193982
     * @symbol ?getCommandNames@Item@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    /**
     * @hash   1592131528
     * @symbol ?getCreativeCategory@Item@@QEBA?AW4CreativeItemCategory@@XZ
     */
    MCAPI enum CreativeItemCategory getCreativeCategory() const;
    /**
     * @hash   -305202402
     * @symbol ?getCreativeGroup@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getCreativeGroup() const;
    /**
     * @hash   -870043354
     * @symbol ?getFrameCount@Item@@QEBAHXZ
     */
    MCAPI int getFrameCount() const;
    /**
     * @hash   826901660
     * @symbol ?getFullItemName@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getFullItemName() const;
    /**
     * @hash   502913782
     * @symbol ?getFullNameHash@Item@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getFullNameHash() const;
    /**
     * @hash   -165914693
     * @symbol ?getId@Item@@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @hash   1495374251
     * @symbol ?getLegacyBlock@Item@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @hash   1358846718
     * @symbol ?getNamespace@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @hash   710375758
     * @symbol ?getRawNameHash@Item@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @hash   -1574154130
     * @symbol ?getRawNameId@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getRawNameId() const;
    /**
     * @hash   -1815727192
     * @symbol ?getRequiredBaseGameVersion@Item@@QEBAAEBVBaseGameVersion@@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @hash   -1360148366
     * @symbol ?getSerializedName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getSerializedName() const;
    /**
     * @hash   -947775506
     * @symbol ?getUseAnimation@Item@@QEBA?AW4UseAnimation@@XZ
     */
    MCAPI enum UseAnimation getUseAnimation() const;
    /**
     * @symbol ?hasDamageValue@Item@@QEBA_NPEBVCompoundTag@@@Z
     */
    MCAPI bool hasDamageValue(class CompoundTag const *) const;
    /**
     * @hash   119323727
     * @symbol ?hasTag@Item@@QEBA_NAEB_K@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @hash   367081982
     * @symbol ?isElytra@Item@@QEBA_NXZ
     */
    MCAPI bool isElytra() const;
    /**
     * @hash   1590363912
     * @symbol ?isExplodable@Item@@QEBA_NXZ
     */
    MCAPI bool isExplodable() const;
    /**
     * @hash   559921316
     * @symbol ?isFireResistant@Item@@QEBA_NXZ
     */
    MCAPI bool isFireResistant() const;
    /**
     * @hash   901388020
     * @symbol ?isNameTag@Item@@QEBA_NXZ
     */
    MCAPI bool isNameTag() const;
    /**
     * @hash   -1398546178
     * @symbol ?isSeed@Item@@QEBA_NXZ
     */
    MCAPI bool isSeed() const;
    /**
     * @symbol ?removeDamageValue@Item@@QEBAXAEAVItemStackBase@@@Z
     */
    MCAPI void removeDamageValue(class ItemStackBase &) const;
    /**
     * @hash   -1000093145
     * @symbol ?setAllowOffhand@Item@@QEAAAEAV1@_N@Z
     */
    MCAPI class Item & setAllowOffhand(bool);
    /**
     * @hash   -1822011551
     * @symbol ?setCategory@Item@@QEAAAEAV1@W4CreativeItemCategory@@@Z
     */
    MCAPI class Item & setCategory(enum CreativeItemCategory);
    /**
     * @hash   787304689
     * @symbol ?setCreativeGroup@Item@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class Item & setCreativeGroup(std::string const &);
    /**
     * @hash   971514191
     * @symbol ?setFurnaceBurnIntervalMultiplier@Item@@QEAAAEAV1@M@Z
     */
    MCAPI class Item & setFurnaceBurnIntervalMultiplier(float);
    /**
     * @hash   683246743
     * @symbol ?setFurnaceXPmultiplier@Item@@QEAAAEAV1@M@Z
     */
    MCAPI class Item & setFurnaceXPmultiplier(float);
    /**
     * @hash   290282117
     * @symbol ?setIsMirroredArt@Item@@QEAAAEAV1@_N@Z
     */
    MCAPI class Item & setIsMirroredArt(bool);
    /**
     * @hash   -422582711
     * @symbol ?setMinRequiredBaseGameVersion@Item@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
     */
    MCAPI class Item & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   -141223192
     * @symbol ?shouldDespawn@Item@@QEBA_NXZ
     */
    MCAPI bool shouldDespawn() const;
    /**
     * @hash   1415278641
     * @symbol ?updateCustomBlockEntityTag@Item@@QEBA_NAEAVBlockSource@@AEAVItemStackBase@@AEBVBlockPos@@@Z
     */
    MCAPI bool updateCustomBlockEntityTag(class BlockSource &, class ItemStackBase &, class BlockPos const &) const;
    /**
     * @hash   109448376
     * @symbol ?useOn@Item@@QEBA_NAEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@@Z
     */
    MCAPI bool useOn(class ItemStack &, class Actor &, int, int, int, unsigned char, class Vec3 const &) const;
    /**
     * @hash   899721701
     * @symbol ?ICON_DESCRIPTION_PREFIX@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;
    /**
     * @hash   1750386453
     * @symbol ?TAG_DAMAGE@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_DAMAGE;
    /**
     * @hash   1989556398
     * @symbol ?addCreativeItem@Item@@SAXAEBVBlock@@@Z
     */
    MCAPI static void addCreativeItem(class Block const &);
    /**
     * @hash   -1415670494
     * @symbol ?addCreativeItem@Item@@SAXAEBVItemInstance@@@Z
     */
    MCAPI static void addCreativeItem(class ItemInstance const &);
    /**
     * @hash   -1240140274
     * @symbol ?addCreativeItem@Item@@SAXAEBVItemStack@@@Z
     */
    MCAPI static void addCreativeItem(class ItemStack const &);
    /**
     * @hash   988437715
     * @symbol ?addLooseCreativeItems@Item@@SAX_NAEBVBaseGameVersion@@@Z
     */
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const &);
    /**
     * @hash   1358540392
     * @symbol ?endCreativeItemDefinitions@Item@@SAX_N@Z
     */
    MCAPI static void endCreativeItemDefinitions(bool);
    /**
     * @hash   917242679
     * @symbol ?getIconTextureUVSet@Item@@SAAEBUTextureUVCoordinateSet@@AEBVTextureAtlasItem@@HH@Z
     */
    MCAPI static struct TextureUVCoordinateSet const & getIconTextureUVSet(class TextureAtlasItem const &, int, int);
    /**
     * @hash   1757440125
     * @symbol ?getTextureItem@Item@@SAAEBVTextureAtlasItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class TextureAtlasItem const & getTextureItem(std::string const &);
    /**
     * @hash   1284718530
     * @symbol ?getTextureUVCoordinateSet@Item@@SA?AUTextureUVCoordinateSet@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI static struct TextureUVCoordinateSet getTextureUVCoordinateSet(std::string const &, int);
    /**
     * @hash   4505041
     * @symbol ?isElytra@Item@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isElytra(class ItemDescriptor const &);
    /**
     * @hash   389951613
     * @symbol ?isElytraBroken@Item@@SA_NH@Z
     */
    MCAPI static bool isElytraBroken(int);
    /**
     * @hash   -76234923
     * @symbol ?isFlyEnabled@Item@@SA_NAEBVItemInstance@@@Z
     */
    MCAPI static bool isFlyEnabled(class ItemInstance const &);
    /**
     * @hash   1364392058
     * @symbol ?isSameTypeAndItem@Item@@SA_NAEBVItemStackBase@@0@Z
     */
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const &, class ItemStackBase const &);
    /**
     * @hash   -1578269109
     * @symbol ?mActiveCreativeGroupInfo@Item@@2PEAVCreativeGroupInfo@@EA
     */
    MCAPI static class CreativeGroupInfo * mActiveCreativeGroupInfo;
    /**
     * @hash   1393582867
     * @symbol ?mActiveCreativeItemCategory@Item@@2PEAVCreativeItemGroupCategory@@EA
     */
    MCAPI static class CreativeItemGroupCategory * mActiveCreativeItemCategory;
    /**
     * @hash   -1891189127
     * @symbol ?mActiveCreativeItemRegistry@Item@@2PEAVCreativeItemRegistry@@EA
     */
    MCAPI static class CreativeItemRegistry * mActiveCreativeItemRegistry;
    /**
     * @hash   -1430753435
     * @symbol ?mGenerateDenyParticleEffect@Item@@2_NB
     */
    MCAPI static bool const mGenerateDenyParticleEffect;
    /**
     * @hash   309475539
     * @symbol ?mInvalidTextureUVCoordinateSet@Item@@2UTextureUVCoordinateSet@@A
     */
    MCAPI static struct TextureUVCoordinateSet mInvalidTextureUVCoordinateSet;
    /**
     * @hash   -1986187068
     * @symbol ?mItemTextureItems@Item@@2V?$weak_ptr@VAtlasItemManager@@@std@@A
     */
    MCAPI static class std::weak_ptr<class AtlasItemManager> mItemTextureItems;
    /**
     * @hash   -292991199
     * @symbol ?setAtlasItemManager@Item@@SAXV?$shared_ptr@VAtlasItemManager@@@std@@@Z
     */
    MCAPI static void setAtlasItemManager(class std::shared_ptr<class AtlasItemManager>);
    /**
     * @hash   1868651992
     * @symbol ?startCreativeItemDefinitions@Item@@SAX_NPEAVCreativeItemRegistry@@@Z
     */
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry *);
    /**
     * @hash   432536328
     * @symbol ?toBlockId@Item@@SA?AUNewBlockID@@F@Z
     */
    MCAPI static struct NewBlockID toBlockId(short);

//protected:
    /**
     * @hash   128973754
     * @symbol ?_helpChangeInventoryItemInPlace@Item@@IEBAXAEAVActor@@AEAVItemStack@@1W4ItemAcquisitionMethod@@@Z
     */
    MCAPI void _helpChangeInventoryItemInPlace(class Actor &, class ItemStack &, class ItemStack &, enum ItemAcquisitionMethod) const;

//private:
    /**
     * @hash   -1794412835
     * @symbol ?_addLooseCreativeItemsClient@Item@@CAXXZ
     */
    MCAPI static void _addLooseCreativeItemsClient();

protected:

private:
    /**
     * @hash   -2059562241
     * @symbol ?mServerItemsUsedInCreativeItems@Item@@0V?$unique_ptr@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@U?$default_delete@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@@2@@std@@A
     */
    MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>> mServerItemsUsedInCreativeItems;

};