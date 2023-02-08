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
     * @symbol  __unk_destructor_0
     */
    virtual ~Item();
    /**
     * @hash   -2076554302
     * @vftbl  1
     * @symbol  ?initServer\@Item\@\@UEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual bool initServer(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1466458328
     * @vftbl  2
     * @symbol  ?tearDown\@Item\@\@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @hash   -1817918148
     * @vftbl  3
     * @symbol  ?setDescriptionId\@Item\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Item & setDescriptionId(std::string const &);
    /**
     * @hash   996309638
     * @vftbl  4
     * @symbol  ?getDescriptionId\@Item\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getDescriptionId() const;
    /**
     * @hash   -1883545634
     * @vftbl  5
     * @symbol  ?getMaxUseDuration\@Item\@\@UEBAHPEBVItemInstance\@\@\@Z
     */
    virtual int getMaxUseDuration(class ItemInstance const *) const;
    /**
     * @hash   776988425
     * @vftbl  6
     * @symbol  ?getMaxUseDuration\@Item\@\@UEBAHPEBVItemStack\@\@\@Z
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   -1579129572
     * @vftbl  8
     * @symbol  ?hasTag\@Item\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool hasTag(class HashedString const &) const;
    /**
     * @hash   1798478254
     * @vftbl  9
     * @symbol  ?hasTag\@Item\@\@UEBA_NAEBUItemTag\@\@\@Z
     */
    virtual bool hasTag(struct ItemTag const &) const;
    /**
     * @hash   995469944
     * @vftbl  10
     * @symbol  ?executeEvent\@Item\@\@UEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @hash   -2145073318
     * @vftbl  12
     * @symbol  ?isArmor\@Item\@\@UEBA_NXZ
     */
    virtual bool isArmor() const;
    /**
     * @hash   1398790029
     * @vftbl  13
     * @symbol  ?isBlockPlanterItem\@Item\@\@UEBA_NXZ
     */
    virtual bool isBlockPlanterItem() const;
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @hash   1934709012
     * @vftbl  15
     * @symbol  ?isCamera\@Item\@\@UEBA_NXZ
     */
    virtual bool isCamera() const;
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   1791733704
     * @vftbl  17
     * @symbol  ?isDamageable\@Item\@\@UEBA_NXZ
     */
    virtual bool isDamageable() const;
    /**
     * @hash   -107159163
     * @vftbl  18
     * @symbol  ?isDyeable\@Item\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @hash   -779874453
     * @vftbl  19
     * @symbol  ?isDye\@Item\@\@UEBA_NXZ
     */
    virtual bool isDye() const;
    /**
     * @hash   134820365
     * @vftbl  20
     * @symbol  ?getItemColor\@Item\@\@UEBA?AW4ItemColor\@\@XZ
     */
    virtual enum class ItemColor getItemColor() const;
    /**
     * @hash   1583284113
     * @vftbl  21
     * @symbol  ?isFertilizer\@Item\@\@UEBA_NXZ
     */
    virtual bool isFertilizer() const;
    /**
     * @hash   104061837
     * @vftbl  22
     * @symbol  ?isFood\@Item\@\@UEBA_NXZ
     */
    virtual bool isFood() const;
    /**
     * @hash   1261901755
     * @vftbl  23
     * @symbol  ?isThrowable\@Item\@\@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @hash   -1937208644
     * @vftbl  24
     * @symbol  ?isUseable\@Item\@\@UEBA_NXZ
     */
    virtual bool isUseable() const;
    /**
     * @hash   -891695629
     * @vftbl  25
     * @symbol  ?getComponent\@Item\@\@UEBAPEAVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    /**
     * @hash   1267666952
     * @vftbl  26
     * @symbol  ?getCamera\@Item\@\@UEBAPEAVICameraItemComponent\@\@XZ
     */
    virtual class ICameraItemComponent * getCamera() const;
    /**
     * @hash   -1178803926
     * @vftbl  27
     * @symbol  ?getFood\@Item\@\@UEBAPEAVIFoodItemComponent\@\@XZ
     */
    virtual class IFoodItemComponent * getFood() const;
    /**
     * @hash   -1996675429
     * @vftbl  28
     * @symbol  ?setMaxStackSize\@Item\@\@UEAAAEAV1\@E\@Z
     */
    virtual class Item & setMaxStackSize(unsigned char);
    /**
     * @hash   -516199269
     * @vftbl  29
     * @symbol  ?setStackedByData\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setStackedByData(bool);
    /**
     * @hash   -404147181
     * @vftbl  30
     * @symbol  ?setMaxDamage\@Item\@\@UEAAAEAV1\@H\@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @hash   595011163
     * @vftbl  31
     * @symbol  ?setHandEquipped\@Item\@\@UEAAAEAV1\@XZ
     */
    virtual class Item & setHandEquipped();
    /**
     * @hash   233893021
     * @vftbl  32
     * @symbol  ?setUseAnimation\@Item\@\@UEAAAEAV1\@W4UseAnimation\@\@\@Z
     */
    virtual class Item & setUseAnimation(enum class UseAnimation);
    /**
     * @hash   1285222635
     * @vftbl  33
     * @symbol  ?setMaxUseDuration\@Item\@\@UEAAAEAV1\@H\@Z
     */
    virtual class Item & setMaxUseDuration(int);
    /**
     * @hash   -680234232
     * @vftbl  34
     * @symbol  ?setRequiresWorldBuilder\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setRequiresWorldBuilder(bool);
    /**
     * @hash   105594321
     * @vftbl  35
     * @symbol  ?setExplodable\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setExplodable(bool);
    /**
     * @hash   -640064724
     * @vftbl  36
     * @symbol  ?setFireResistant\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setFireResistant(bool);
    /**
     * @hash   1036708867
     * @vftbl  37
     * @symbol  ?setIsGlint\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setIsGlint(bool);
    /**
     * @hash   -1454259652
     * @vftbl  38
     * @symbol  ?setShouldDespawn\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item & setShouldDespawn(bool);
    /**
     * @hash   -184549120
     * @vftbl  39
     * @symbol  ?buildNetworkTag\@Item\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -303897294
     * @vftbl  40
     * @symbol  ?initializeFromNetwork\@Item\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1002123913
     * @vftbl  41
     * @symbol  ?validateFromNetwork\@Item\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /**
     * @hash   -619081581
     * @vftbl  42
     * @symbol  ?getBlockShape\@Item\@\@UEBA?AW4BlockShape\@\@XZ
     */
    virtual enum class BlockShape getBlockShape() const;
    /**
     * @hash   2135244883
     * @vftbl  43
     * @symbol  ?canBeDepleted\@Item\@\@UEBA_NXZ
     */
    virtual bool canBeDepleted() const;
    /**
     * @hash   1915933958
     * @vftbl  44
     * @symbol  ?canDestroySpecial\@Item\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @hash   -1896594041
     * @vftbl  45
     * @symbol  ?getLevelDataForAuxValue\@Item\@\@UEBAHH\@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @hash   1173980979
     * @vftbl  46
     * @symbol  ?isStackedByData\@Item\@\@UEBA_NXZ
     */
    virtual bool isStackedByData() const;
    /**
     * @hash   -193948440
     * @vftbl  47
     * @symbol  ?getMaxDamage\@Item\@\@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @hash   -1143228907
     * @vftbl  48
     * @symbol  ?getAttackDamage\@Item\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @hash   -135313427
     * @vftbl  49
     * @symbol  ?isHandEquipped\@Item\@\@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
    /**
     * @hash   1783909724
     * @vftbl  50
     * @symbol  ?isGlint\@Item\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @hash   -1707110080
     * @vftbl  52
     * @symbol  ?getPatternIndex\@Item\@\@UEBAHXZ
     */
    virtual int getPatternIndex() const;
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @hash   -386928693
     * @vftbl  54
     * @symbol  ?isWearableThroughLootTable\@Item\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /**
     * @hash   -867082477
     * @vftbl  55
     * @symbol  ?canDestroyInCreative\@Item\@\@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @hash   -58635664
     * @vftbl  56
     * @symbol  ?isDestructive\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @hash   -88393409
     * @vftbl  57
     * @symbol  ?isLiquidClipItem\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @hash   2119839145
     * @vftbl  58
     * @symbol  ?shouldInteractionWithBlockBypassLiquid\@Item\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @hash   1588836361
     * @vftbl  59
     * @symbol  ?requiresInteract\@Item\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   -2078686612
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   -1469107525
     * @vftbl  61
     * @symbol  ?isValidRepairItem\@Item\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   -1919534903
     * @vftbl  62
     * @symbol  ?getEnchantSlot\@Item\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   1634263670
     * @vftbl  63
     * @symbol  ?getEnchantValue\@Item\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @hash   511719696
     * @vftbl  64
     * @symbol  ?getArmorValue\@Item\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   -898534979
     * @vftbl  65
     * @symbol  ?getToughnessValue\@Item\@\@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @hash   612826937
     * @vftbl  67
     * @symbol  ?isValidAuxValue\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @hash   -894304468
     * @vftbl  68
     * @symbol  ?getDamageChance\@Item\@\@UEBAHH\@Z
     */
    virtual int getDamageChance(int) const;
    /**
     * @hash   -608577758
     * @vftbl  69
     * @symbol  ?getViewDamping\@Item\@\@UEBAMXZ
     */
    virtual float getViewDamping() const;
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @hash   1102197270
     * @vftbl  73
     * @symbol  ?getColor\@Item\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @hash   -938866985
     * @vftbl  74
     * @symbol  ?hasCustomColor\@Item\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @hash   -1279409797
     * @vftbl  76
     * @symbol  ?clearColor\@Item\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @hash   -325451890
     * @vftbl  77
     * @symbol  ?clearColor\@Item\@\@UEBAXPEAVCompoundTag\@\@\@Z
     */
    virtual void clearColor(class CompoundTag *) const;
    /**
     * @hash   -1900950829
     * @vftbl  78
     * @symbol  ?setColor\@Item\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @hash   1311175524
     * @vftbl  81
     * @symbol  ?getActorIdentifier\@Item\@\@UEBA?AUActorDefinitionIdentifier\@\@AEBVItemStack\@\@\@Z
     */
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /**
     * @hash   1531956295
     * @vftbl  82
     * @symbol  ?buildIdAux\@Item\@\@UEBAHFPEBVCompoundTag\@\@\@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @hash   -182949997
     * @vftbl  83
     * @symbol  ?canUseOnSimTick\@Item\@\@UEBA_NXZ
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @hash   -202387237
     * @vftbl  84
     * @symbol  ?use\@Item\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   1099373071
     * @vftbl  85
     * @symbol  ?dispense\@Item\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -494992493
     * @vftbl  86
     * @symbol  ?useTimeDepleted\@Item\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   -942845195
     * @vftbl  87
     * @symbol  ?releaseUsing\@Item\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   791952215
     * @vftbl  88
     * @symbol  ?getDestroySpeed\@Item\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @hash   1414624065
     * @vftbl  89
     * @symbol  ?hurtActor\@Item\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -180789899
     * @vftbl  90
     * @symbol  ?hitActor\@Item\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -379283116
     * @vftbl  91
     * @symbol  ?hitBlock\@Item\@\@UEBAXAEAVItemStack\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVMob\@\@\@Z
     */
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @hash   -353319549
     * @vftbl  92
     * @symbol  ?mineBlock\@Item\@\@UEBA_NAEAVItemInstance\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   399154056
     * @vftbl  93
     * @symbol  ?mineBlock\@Item\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   -1180839567
     * @vftbl  94
     * @symbol  ?buildDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   -346823897
     * @vftbl  95
     * @symbol  ?buildDescriptionId\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   -1766829758
     * @vftbl  96
     * @symbol  ?buildEffectDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   -1246566766
     * @vftbl  97
     * @symbol  ?buildCategoryDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string buildCategoryDescriptionName() const;
    /**
     * @hash   321535146
     * @vftbl  98
     * @symbol  ?readUserData\@Item\@\@UEBAXAEAVItemStackBase\@\@AEAVIDataInput\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @hash   2085480444
     * @vftbl  99
     * @symbol  ?writeUserData\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVIDataOutput\@\@\@Z
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @hash   1041203692
     * @vftbl  100
     * @symbol  ?getMaxStackSize\@Item\@\@UEBAEAEBVItemDescriptor\@\@\@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @hash   1835440979
     * @vftbl  101
     * @symbol  ?inventoryTick\@Item\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @hash   276071354
     * @vftbl  102
     * @symbol  ?refreshedInContainer\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /**
     * @hash   -1766743657
     * @vftbl  103
     * @symbol  ?getCooldownType\@Item\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @hash   -2042236650
     * @vftbl  104
     * @symbol  ?getCooldownTime\@Item\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @hash   2030614726
     * @vftbl  105
     * @symbol  ?fixupCommon\@Item\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase &) const;
    /**
     * @hash   -566351232
     * @vftbl  106
     * @symbol  ?fixupCommon\@Item\@\@UEBAXAEAVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /**
     * @hash   -866458915
     * @vftbl  107
     * @symbol  ?getDamageValue\@Item\@\@UEBAFPEBVCompoundTag\@\@\@Z
     */
    virtual short getDamageValue(class CompoundTag const *) const;
    /**
     * @hash   -299209681
     * @vftbl  108
     * @symbol  ?setDamageValue\@Item\@\@UEBAXAEAVItemStackBase\@\@F\@Z
     */
    virtual void setDamageValue(class ItemStackBase &, short) const;
    /**
     * @hash   -1731294933
     * @vftbl  109
     * @symbol  ?getInHandUpdateType\@Item\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemInstance\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @hash   387043299
     * @vftbl  110
     * @symbol  ?getInHandUpdateType\@Item\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemStack\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @hash   826604458
     * @vftbl  111
     * @symbol  ?validFishInteraction\@Item\@\@UEBA_NH\@Z
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @hash   -471439895
     * @vftbl  112
     * @symbol  ?enchantProjectile\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVActor\@\@\@Z
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @hash   -349248488
     * @vftbl  113
     * @symbol  ?getEquipLocation\@Item\@\@UEBA?AW4ActorLocation\@\@XZ
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @hash   1355469049
     * @vftbl  114
     * @symbol  ?getEquipSound\@Item\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
    /**
     * @hash   -449638456
     * @vftbl  115
     * @symbol  ?isSameItem\@Item\@\@UEBA_NAEBVItemStackBase\@\@0\@Z
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @hash   1306296120
     * @vftbl  116
     * @symbol  ?initClient\@Item\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void initClient(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1792580231
     * @vftbl  117
     * @symbol  ?setIconInfo\@Item\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @hash   45183242
     * @vftbl  118
     * @symbol  ?getIconInfo\@Item\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   1709901774
     * @vftbl  119
     * @symbol  ?getInteractText\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   1773766466
     * @vftbl  120
     * @symbol  ?getAnimationFrameFor\@Item\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @hash   -1221743625
     * @vftbl  121
     * @symbol  ?isEmissive\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isEmissive(int) const;
    /**
     * @hash   -1176896770
     * @vftbl  122
     * @symbol  ?getLightEmission\@Item\@\@UEBA?AUBrightness\@\@H\@Z
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @hash   -2094129147
     * @vftbl  123
     * @symbol  ?getIconYOffset\@Item\@\@UEBAHXZ
     */
    virtual int getIconYOffset() const;
    /**
     * @hash   1775272162
     * @vftbl  124
     * @symbol  ?canBeCharged\@Item\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @hash   -1519415326
     * @vftbl  125
     * @symbol  ?playSoundIncrementally\@Item\@\@UEBAXAEBVItemInstance\@\@AEAVMob\@\@\@Z
     */
    virtual void playSoundIncrementally(class ItemInstance const &, class Mob &) const;
    /**
     * @hash   -2108682985
     * @vftbl  126
     * @symbol  ?playSoundIncrementally\@Item\@\@UEBAXAEBVItemStack\@\@AEAVMob\@\@\@Z
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @hash   -2030168406
     * @vftbl  127
     * @symbol  ?getFurnaceBurnIntervalMultipler\@Item\@\@UEBAMAEBVItemStackBase\@\@\@Z
     */
    virtual float getFurnaceBurnIntervalMultipler(class ItemStackBase const &) const;
    /**
     * @hash   -839674709
     * @vftbl  128
     * @symbol  ?getFurnaceXPmultiplier\@Item\@\@UEBAMAEBVItemStackBase\@\@\@Z
     */
    virtual float getFurnaceXPmultiplier(class ItemStackBase const &) const;
    /**
     * @hash   -1895271197
     * @vftbl  129
     * @symbol  ?getAuxValuesDescription\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @hash   -1775780913
     * @vftbl  130
     * @symbol  ?_checkUseOnPermissions\@Item\@\@EEBA_NAEAVActor\@\@AEAVItemStackBase\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /**
     * @hash   1823479710
     * @vftbl  131
     * @symbol  ?_calculatePlacePos\@Item\@\@EEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @hash   -1830337535
     * @vftbl  132
     * @symbol  ?_useOn\@Item\@\@EEBA_NAEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEM
    /**
     * @hash   1654793830
     * @symbol  ?getBaseColor\@Item\@\@UEBA?AVColor\@mce\@\@AEBVItemStack\@\@\@Z
     */
    MCVAPI class mce::Color getBaseColor(class ItemStack const &) const;
    /**
     * @hash   -473853315
     * @symbol  ?getSecondaryColor\@Item\@\@UEBA?AVColor\@mce\@\@AEBVItemStack\@\@\@Z
     */
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const &) const;
    /**
     * @hash   723421188
     * @symbol  ?hasCustomColor\@Item\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @hash   878684142
     * @symbol  ?isActorPlacerItem\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isActorPlacerItem() const;
    /**
     * @hash   -1158877767
     * @symbol  ?isBucket\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isBucket() const;
    /**
     * @hash   363273468
     * @symbol  ?isCandle\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isCandle() const;
    /**
     * @hash   634505899
     * @symbol  ?isComplex\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isComplex() const;
    /**
     * @hash   -1562712315
     * @symbol  ?isComponentBased\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const;
    /**
     * @hash   1104493631
     * @symbol  ?isMultiColorTinted\@Item\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool isMultiColorTinted(class ItemStack const &) const;
    /**
     * @hash   -1170594147
     * @symbol  ?isMusicDisk\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isMusicDisk() const;
    /**
     * @hash   -660568693
     * @symbol  ?isPattern\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isPattern() const;
    /**
     * @hash   -1376727688
     * @symbol  ?showsDurabilityInCreative\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @hash   -1957705382
     * @symbol  ?uniqueAuxValues\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @hash   -489976298
     * @symbol  ??0Item\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI Item(std::string const &, short);
    /**
     * @hash   -680165336
     * @symbol  ?addOnResetBAIcallback\@Item\@\@QEAAXAEBV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void addOnResetBAIcallback(class std::function<void (void)> const &);
    /**
     * @hash   383996243
     * @symbol  ?addTag\@Item\@\@QEAAAEAV1\@AEBUItemTag\@\@\@Z
     */
    MCAPI class Item & addTag(struct ItemTag const &);
    /**
     * @hash   2116254229
     * @symbol  ?addTag\@Item\@\@QEAAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Item & addTag(class HashedString const &);
    /**
     * @hash   -1841468005
     * @symbol  ?addTags\@Item\@\@QEAAAEAV1\@V?$initializer_list\@V?$reference_wrapper\@$$CBUItemTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Item & addTags(class std::initializer_list<class std::reference_wrapper<struct ItemTag const>>);
    /**
     * @hash   -889059518
     * @symbol  ?allowOffhand\@Item\@\@QEBA_NXZ
     */
    MCAPI bool allowOffhand() const;
    /**
     * @hash   -1156812394
     * @symbol  ?buildDescriptor\@Item\@\@QEBA?AVItemDescriptor\@\@FPEBVCompoundTag\@\@\@Z
     */
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    /**
     * @hash   -1072515708
     * @symbol  ?calculatePlacePos\@Item\@\@QEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    MCAPI bool calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @hash   455315587
     * @symbol  ?destroySpeedBonus\@Item\@\@QEBAMAEBVItemStackBase\@\@\@Z
     */
    MCAPI float destroySpeedBonus(class ItemStackBase const &) const;
    /**
     * @hash   -445894134
     * @symbol  ?fixupOnLoad\@Item\@\@QEBAXAEAVItemStackBase\@\@\@Z
     */
    MCAPI void fixupOnLoad(class ItemStackBase &) const;
    /**
     * @hash   727486461
     * @symbol  ?fixupOnLoad\@Item\@\@QEBAXAEAVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void fixupOnLoad(class ItemStackBase &, class Level &) const;
    /**
     * @hash   2024112158
     * @symbol  ?getCommandNames\@Item\@\@QEBA?AV?$vector\@UCommandName\@\@V?$allocator\@UCommandName\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    /**
     * @hash   -1842917592
     * @symbol  ?getCreativeCategory\@Item\@\@QEBA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @hash   554715774
     * @symbol  ?getCreativeGroup\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getCreativeGroup() const;
    /**
     * @hash   -1795801562
     * @symbol  ?getFrameCount\@Item\@\@QEBAHXZ
     */
    MCAPI int getFrameCount() const;
    /**
     * @hash   1686819836
     * @symbol  ?getFullItemName\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFullItemName() const;
    /**
     * @hash   209593622
     * @symbol  ?getFullNameHash\@Item\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getFullNameHash() const;
    /**
     * @hash   693849723
     * @symbol  ?getId\@Item\@\@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @hash   856824347
     * @symbol  ?getLegacyBlock\@Item\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @hash   -1622015330
     * @symbol  ?getNamespace\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @hash   1936431838
     * @symbol  ?getRawNameHash\@Item\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @hash   -714389714
     * @symbol  ?getRawNameId\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getRawNameId() const;
    /**
     * @hash   -955962776
     * @symbol  ?getRequiredBaseGameVersion\@Item\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @hash   -500383950
     * @symbol  ?getSerializedName\@Item\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSerializedName() const;
    /**
     * @hash   -88364738
     * @symbol  ?getUseAnimation\@Item\@\@QEBA?AW4UseAnimation\@\@XZ
     */
    MCAPI enum class UseAnimation getUseAnimation() const;
    /**
     * @hash   -1397818934
     * @symbol  ?hasDamageValue\@Item\@\@QEBA_NPEBVCompoundTag\@\@\@Z
     */
    MCAPI bool hasDamageValue(class CompoundTag const *) const;
    /**
     * @hash   978734495
     * @symbol  ?hasTag\@Item\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @hash   1225385678
     * @symbol  ?isElytra\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isElytra() const;
    /**
     * @hash   -1846299688
     * @symbol  ?isExplodable\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isExplodable() const;
    /**
     * @hash   1418225012
     * @symbol  ?isFireResistant\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isFireResistant() const;
    /**
     * @hash   1759707092
     * @symbol  ?isNameTag\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isNameTag() const;
    /**
     * @hash   -540227106
     * @symbol  ?isSeed\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isSeed() const;
    /**
     * @symbol  ??8Item\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Item const &) const;
    /**
     * @hash   -1161162134
     * @symbol  ?removeDamageValue\@Item\@\@QEBAXAEAVItemStackBase\@\@\@Z
     */
    MCAPI void removeDamageValue(class ItemStackBase &) const;
    /**
     * @hash   -142681257
     * @symbol  ?setAllowOffhand\@Item\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class Item & setAllowOffhand(bool);
    /**
     * @hash   -964738047
     * @symbol  ?setCategory\@Item\@\@QEAAAEAV1\@W4CreativeItemCategory\@\@\@Z
     */
    MCAPI class Item & setCategory(enum class CreativeItemCategory);
    /**
     * @hash   1644578193
     * @symbol  ?setCreativeGroup\@Item\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Item & setCreativeGroup(std::string const &);
    /**
     * @hash   1828818447
     * @symbol  ?setFurnaceBurnIntervalMultiplier\@Item\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class Item & setFurnaceBurnIntervalMultiplier(float);
    /**
     * @hash   1540550999
     * @symbol  ?setFurnaceXPmultiplier\@Item\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class Item & setFurnaceXPmultiplier(float);
    /**
     * @hash   1146940581
     * @symbol  ?setIsMirroredArt\@Item\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class Item & setIsMirroredArt(bool);
    /**
     * @hash   434075753
     * @symbol  ?setMinRequiredBaseGameVersion\@Item\@\@QEAAAEAV1\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI class Item & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   715435272
     * @symbol  ?shouldDespawn\@Item\@\@QEBA_NXZ
     */
    MCAPI bool shouldDespawn() const;
    /**
     * @hash   -2023030191
     * @symbol  ?updateCustomBlockEntityTag\@Item\@\@QEBA_NAEAVBlockSource\@\@AEAVItemStackBase\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool updateCustomBlockEntityTag(class BlockSource &, class ItemStackBase &, class BlockPos const &) const;
    /**
     * @hash   966183720
     * @symbol  ?useOn\@Item\@\@QEBA_NAEAVItemStack\@\@AEAVActor\@\@HHHEAEBVVec3\@\@\@Z
     */
    MCAPI bool useOn(class ItemStack &, class Actor &, int, int, int, unsigned char, class Vec3 const &) const;
    /**
     * @hash   -1478104411
     * @symbol  ?ICON_DESCRIPTION_PREFIX\@Item\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;
    /**
     * @hash   -627501163
     * @symbol  ?TAG_DAMAGE\@Item\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DAMAGE;
    /**
     * @symbol  ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class Block const &);
    /**
     * @symbol  ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemInstance const &);
    /**
     * @symbol  ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemStack const &);
    /**
     * @symbol  ?addLooseCreativeItems\@Item\@\@SAX_NAEBVBaseGameVersion\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const &, class ItemRegistryRef);
    /**
     * @hash   -2076508728
     * @symbol  ?endCreativeItemDefinitions\@Item\@\@SAX_N\@Z
     */
    MCAPI static void endCreativeItemDefinitions(bool);
    /**
     * @hash   862808737
     * @symbol  ?isElytra\@Item\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isElytra(class ItemDescriptor const &);
    /**
     * @hash   1248255309
     * @symbol  ?isElytraBroken\@Item\@\@SA_NH\@Z
     */
    MCAPI static bool isElytraBroken(int);
    /**
     * @hash   782068773
     * @symbol  ?isFlyEnabled\@Item\@\@SA_NAEBVItemInstance\@\@\@Z
     */
    MCAPI static bool isFlyEnabled(class ItemInstance const &);
    /**
     * @hash   -2072256166
     * @symbol  ?isSameTypeAndItem\@Item\@\@SA_NAEBVItemStackBase\@\@0\@Z
     */
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const &, class ItemStackBase const &);
    /**
     * @hash   -680833493
     * @symbol  ?mActiveCreativeGroupInfo\@Item\@\@2PEAVCreativeGroupInfo\@\@EA
     */
    MCAPI static class CreativeGroupInfo * mActiveCreativeGroupInfo;
    /**
     * @hash   -2003948813
     * @symbol  ?mActiveCreativeItemCategory\@Item\@\@2PEAVCreativeItemGroupCategory\@\@EA
     */
    MCAPI static class CreativeItemGroupCategory * mActiveCreativeItemCategory;
    /**
     * @hash   -993753511
     * @symbol  ?mActiveCreativeItemRegistry\@Item\@\@2PEAVCreativeItemRegistry\@\@EA
     */
    MCAPI static class CreativeItemRegistry * mActiveCreativeItemRegistry;
    /**
     * @hash   -389067875
     * @symbol  ?mGenerateDenyParticleEffect\@Item\@\@2_NB
     */
    MCAPI static bool const mGenerateDenyParticleEffect;
    /**
     * @hash   -1569656840
     * @symbol  ?startCreativeItemDefinitions\@Item\@\@SAX_NPEAVCreativeItemRegistry\@\@\@Z
     */
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry *);
    /**
     * @hash   1289194792
     * @symbol  ?toBlockId\@Item\@\@SA?AUNewBlockID\@\@F\@Z
     */
    MCAPI static struct NewBlockID toBlockId(short);

//protected:
    /**
     * @hash   988584410
     * @symbol  ?_helpChangeInventoryItemInPlace\@Item\@\@IEBAXAEAVActor\@\@AEAVItemStack\@\@1W4ItemAcquisitionMethod\@\@\@Z
     */
    MCAPI void _helpChangeInventoryItemInPlace(class Actor &, class ItemStack &, class ItemStack &, enum class ItemAcquisitionMethod) const;

//private:
    /**
     * @hash   -934802179
     * @symbol  ?_addLooseCreativeItemsClient\@Item\@\@CAXXZ
     */
    MCAPI static void _addLooseCreativeItemsClient();
    /**
     * @symbol  ?_addLooseCreativeItemsServer\@Item\@\@CAXAEBVBaseGameVersion\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI static void _addLooseCreativeItemsServer(class BaseGameVersion const &, class ItemRegistryRef);

protected:

private:
    /**
     * @hash   -1162126625
     * @symbol  ?mServerItemsUsedInCreativeItems\@Item\@\@0V?$unique_ptr\@V?$set\@FU?$less\@F\@std\@\@V?$allocator\@F\@2\@\@std\@\@U?$default_delete\@V?$set\@FU?$less\@F\@std\@\@V?$allocator\@F\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>> mServerItemsUsedInCreativeItems;

};