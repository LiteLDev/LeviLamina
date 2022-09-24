/**
 * @file  ComponentItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "JsonUtil.hpp"
#include "reflection.hpp"
#include "Core.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComponentItem.
 *
 */
class ComponentItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTITEM
public:
    class ComponentItem& operator=(class ComponentItem const &) = delete;
    ComponentItem(class ComponentItem const &) = delete;
    ComponentItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ComponentItem();
    /**
     * @hash   -1005728251
     * @vftbl  1
     * @symbol ?initServer@ComponentItem@@UEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual bool initServer(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1588916923
     * @vftbl  2
     * @symbol ?tearDown@ComponentItem@@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @hash   -1208163402
     * @vftbl  3
     * @symbol ?setDescriptionId@ComponentItem@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class ComponentItem & setDescriptionId(std::string const &);
    /**
     * @hash   -978553975
     * @vftbl  4
     * @symbol ?getDescriptionId@ComponentItem@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getDescriptionId() const;
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   -716009591
     * @vftbl  8
     * @symbol ?hasTag@ComponentItem@@UEBA_NAEBVHashedString@@@Z
     */
    virtual bool hasTag(class HashedString const &) const;
    /**
     * @hash   -1875848741
     * @vftbl  9
     * @symbol ?hasTag@ComponentItem@@UEBA_NAEBUItemTag@@@Z
     */
    virtual bool hasTag(struct ItemTag const &) const;
    /**
     * @hash   -1905573771
     * @vftbl  10
     * @symbol ?executeEvent@ComponentItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @hash   459661741
     * @vftbl  12
     * @symbol ?isArmor@ComponentItem@@UEBA_NXZ
     */
    virtual bool isArmor() const;
    /**
     * @hash   768172640
     * @vftbl  13
     * @symbol ?isBlockPlanterItem@ComponentItem@@UEBA_NXZ
     */
    virtual bool isBlockPlanterItem() const;
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -1898661237
     * @vftbl  17
     * @symbol ?isDamageable@ComponentItem@@UEBA_NXZ
     */
    virtual bool isDamageable() const;
    /**
     * @hash   748665752
     * @vftbl  18
     * @symbol ?isDyeable@ComponentItem@@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @hash   -1805690178
     * @vftbl  19
     * @symbol ?isDye@ComponentItem@@UEBA_NXZ
     */
    virtual bool isDye() const;
    /**
     * @hash   807057360
     * @vftbl  22
     * @symbol ?isFood@ComponentItem@@UEBA_NXZ
     */
    virtual bool isFood() const;
    /**
     * @hash   -1764027426
     * @vftbl  23
     * @symbol ?isThrowable@ComponentItem@@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @hash   1128452959
     * @vftbl  24
     * @symbol ?isUseable@ComponentItem@@UEBA_NXZ
     */
    virtual bool isUseable() const;
    /**
     * @hash   279117472
     * @vftbl  25
     * @symbol ?getComponent@ComponentItem@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
     */
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    /**
     * @hash   -313266627
     * @vftbl  27
     * @symbol ?getFood@ComponentItem@@UEBAPEAVIFoodItemComponent@@XZ
     */
    virtual class IFoodItemComponent * getFood() const;
    /**
     * @hash   -836483428
     * @vftbl  28
     * @symbol ?getFuel@ComponentItem@@UEBAPEAVFuelItemComponent@@XZ
     */
    virtual class FuelItemComponent * getFuel() const;
    /**
     * @hash   509606208
     * @vftbl  31
     * @symbol ?setMaxDamage@ComponentItem@@UEAAAEAVItem@@H@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @hash   1779827187
     * @vftbl  40
     * @symbol ?buildNetworkTag@ComponentItem@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   508874239
     * @vftbl  41
     * @symbol ?initializeFromNetwork@ComponentItem@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -1171627722
     * @vftbl  42
     * @symbol ?validateFromNetwork@ComponentItem@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /**
     * @hash   665191654
     * @vftbl  43
     * @symbol ?getBlockShape@ComponentItem@@UEBA?AW4BlockShape@@XZ
     */
    virtual enum BlockShape getBlockShape() const;
    /**
     * @hash   -1971493690
     * @vftbl  44
     * @symbol ?canBeDepleted@ComponentItem@@UEBA_NXZ
     */
    virtual bool canBeDepleted() const;
    /**
     * @hash   -912949821
     * @vftbl  45
     * @symbol ?canDestroySpecial@ComponentItem@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @hash   -1618227004
     * @vftbl  46
     * @symbol ?getLevelDataForAuxValue@ComponentItem@@UEBAHH@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @hash   -375681477
     * @vftbl  48
     * @symbol ?getMaxDamage@ComponentItem@@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @hash   -1703989416
     * @vftbl  49
     * @symbol ?getAttackDamage@ComponentItem@@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @hash   364666169
     * @vftbl  51
     * @symbol ?isGlint@ComponentItem@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -101038154
     * @vftbl  56
     * @symbol ?canDestroyInCreative@ComponentItem@@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @hash   422263853
     * @vftbl  57
     * @symbol ?isDestructive@ComponentItem@@UEBA_NH@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @hash   -1230046484
     * @vftbl  58
     * @symbol ?isLiquidClipItem@ComponentItem@@UEBA_NH@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @hash   1753264908
     * @vftbl  60
     * @symbol ?requiresInteract@ComponentItem@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   -719176817
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@ComponentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   242024344
     * @vftbl  62
     * @symbol ?isValidRepairItem@ComponentItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   -2027347732
     * @vftbl  63
     * @symbol ?getEnchantSlot@ComponentItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   -587837991
     * @vftbl  64
     * @symbol ?getEnchantValue@ComponentItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @hash   -113980605
     * @vftbl  65
     * @symbol ?getArmorValue@ComponentItem@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   1758327302
     * @vftbl  68
     * @symbol ?isValidAuxValue@ComponentItem@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @hash   1447955817
     * @vftbl  69
     * @symbol ?getDamageChance@ComponentItem@@UEBAHH@Z
     */
    virtual int getDamageChance(int) const;
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
     * @hash   794352393
     * @vftbl  74
     * @symbol ?getColor@ComponentItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @hash   -495989384
     * @vftbl  77
     * @symbol ?clearColor@ComponentItem@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @hash   343876790
     * @vftbl  79
     * @symbol ?setColor@ComponentItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
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
     * @hash   -1535921858
     * @vftbl  85
     * @symbol ?use@ComponentItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   1131375388
     * @vftbl  86
     * @symbol ?dispense@ComponentItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   1305502784
     * @vftbl  87
     * @symbol ?useTimeDepleted@ComponentItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   -503064254
     * @vftbl  88
     * @symbol ?releaseUsing@ComponentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   -1633988950
     * @vftbl  89
     * @symbol ?getDestroySpeed@ComponentItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @hash   -143266098
     * @vftbl  90
     * @symbol ?hurtActor@ComponentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -1394849230
     * @vftbl  91
     * @symbol ?hitActor@ComponentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -175584825
     * @vftbl  92
     * @symbol ?hitBlock@ComponentItem@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
     */
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @hash   -1498988058
     * @vftbl  93
     * @symbol ?mineBlock@ComponentItem@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   -792807973
     * @vftbl  94
     * @symbol ?mineBlock@ComponentItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   -17208066
     * @vftbl  95
     * @symbol ?buildDescriptionName@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   -143792934
     * @vftbl  96
     * @symbol ?buildDescriptionId@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   1980791631
     * @vftbl  97
     * @symbol ?buildEffectDescriptionName@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   2009333865
     * @vftbl  101
     * @symbol ?getMaxStackSize@ComponentItem@@UEBAEAEBVItemDescriptor@@@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @hash   836518794
     * @vftbl  104
     * @symbol ?getCooldownType@ComponentItem@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @hash   786910425
     * @vftbl  105
     * @symbol ?getCooldownTime@ComponentItem@@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @hash   -515747029
     * @vftbl  117
     * @symbol ?initClient@ComponentItem@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void initClient(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1484490699
     * @vftbl  118
     * @symbol ?getInteractText@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   1814178533
     * @vftbl  119
     * @symbol ?getAnimationFrameFor@ComponentItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @hash   -740774588
     * @vftbl  120
     * @symbol ?isEmissive@ComponentItem@@UEBA_NH@Z
     */
    virtual bool isEmissive(int) const;
    /**
     * @hash   890499987
     * @vftbl  122
     * @symbol ?getIcon@ComponentItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   -1100146372
     * @vftbl  124
     * @symbol ?setIcon@ComponentItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   -556493211
     * @vftbl  127
     * @symbol ?canBeCharged@ComponentItem@@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @hash   -1223830474
     * @vftbl  132
     * @symbol ?getAuxValuesDescription@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @hash   612261810
     * @vftbl  133
     * @symbol ?_checkUseOnPermissions@ComponentItem@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
     */
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /**
     * @hash   1003593345
     * @vftbl  134
     * @symbol ?_calculatePlacePos@ComponentItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @hash   850011278
     * @vftbl  135
     * @symbol ?_useOn@ComponentItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPONENTITEM
    /**
     * @hash   1539091472
     * @symbol ?getVariant@ComponentItem@@UEBAHHH_N@Z
     */
    MCVAPI int getVariant(int, int, bool) const;
    /**
     * @hash   -415239615
     * @symbol ?hasCustomColor@ComponentItem@@UEBA_NAEBVItemStackBase@@@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @hash   1213740488
     * @symbol ?isComponentBased@ComponentItem@@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const;
    /**
     * @hash   -695680172
     * @symbol ?useVariant@ComponentItem@@UEBA_NHH_N@Z
     */
    MCVAPI bool useVariant(int, int, bool) const;
#endif
    /**
     * @hash   1343491123
     * @symbol ??0ComponentItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     */
    MCAPI ComponentItem(std::string const &, short);
    /**
     * @hash   -112208519
     * @symbol ?_addCerealItemsToMap@ComponentItem@@QEAAXXZ
     */
    MCAPI void _addCerealItemsToMap();
    /**
     * @hash   -471527460
     * @symbol ?_buildItemsFileSchema@ComponentItem@@QEAA?AV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VComponentItem@@@JsonUtil@@@std@@AEAV23@_NVSemVersion@@@Z
     */
    MCAPI class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>> _buildItemsFileSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>> &, bool, class SemVersion);
    /**
     * @hash   -1503106340
     * @symbol ?_validateClientSchemaAndInitItem@ComponentItem@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI bool _validateClientSchemaAndInitItem(class Json::Value &, class SemVersion const &);
    /**
     * @hash   218808620
     * @symbol ?_validateServerSchemaAndInitItem@ComponentItem@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI bool _validateServerSchemaAndInitItem(class Json::Value &, class SemVersion const &);
    /**
     * @hash   712153968
     * @symbol ?checkComponentDataForContentErrors@ComponentItem@@QEBA_NXZ
     */
    MCAPI bool checkComponentDataForContentErrors() const;
    /**
     * @hash   -526483497
     * @symbol ?executeTrigger@ComponentItem@@QEBA_NAEAVItemStackBase@@AEBVDefinitionTrigger@@AEAVRenderParams@@@Z
     */
    MCAPI bool executeTrigger(class ItemStackBase &, class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @hash   -2078592155
     * @symbol ?getAliases@ComponentItem@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> const & getAliases() const;
    /**
     * @hash   -264043037
     * @symbol ?getArmor@ComponentItem@@QEBAPEAVArmorItemComponent@@XZ
     */
    MCAPI class ArmorItemComponent * getArmor() const;
    /**
     * @hash   -1273011697
     * @symbol ?getDamageable@ComponentItem@@QEBAPEAVDurabilityItemComponent@@XZ
     */
    MCAPI class DurabilityItemComponent * getDamageable() const;
    /**
     * @hash   1862284323
     * @symbol ?getDyeable@ComponentItem@@QEBAPEAVDyeableComponent@@XZ
     */
    MCAPI class DyeableComponent * getDyeable() const;
    /**
     * @hash   -1784322275
     * @symbol ?getKnockbackResistance@ComponentItem@@QEBAPEAVKnockbackResistanceItemComponent@@XZ
     */
    MCAPI class KnockbackResistanceItemComponent * getKnockbackResistance() const;
    /**
     * @hash   461135455
     * @symbol ?getProjectile@ComponentItem@@QEBAPEAVProjectileItemComponent@@XZ
     */
    MCAPI class ProjectileItemComponent * getProjectile() const;
    /**
     * @hash   990712827
     * @symbol ?getRecordComponent@ComponentItem@@QEBAPEAVRecordItemComponent@@XZ
     */
    MCAPI class RecordItemComponent * getRecordComponent() const;
    /**
     * @hash   1812474071
     * @symbol ?getRepairable@ComponentItem@@QEBAPEAVRepairableItemComponent@@XZ
     */
    MCAPI class RepairableItemComponent * getRepairable() const;
    /**
     * @hash   974453643
     * @symbol ?getStorage@ComponentItem@@QEBAPEAVStorageItemComponent@@XZ
     */
    MCAPI class StorageItemComponent * getStorage() const;
    /**
     * @hash   -1923620513
     * @symbol ?getWearable@ComponentItem@@QEBAPEAVWearableItemComponent@@XZ
     */
    MCAPI class WearableItemComponent * getWearable() const;
    /**
     * @hash   768936590
     * @symbol ?isStorage@ComponentItem@@QEBA_NXZ
     */
    MCAPI bool isStorage() const;
    /**
     * @hash   785927006
     * @symbol ?parseJsonEvents@ComponentItem@@QEAA_NAEBVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI bool parseJsonEvents(class Json::Value const &, class SemVersion const &);
    /**
     * @hash   584650019
     * @symbol ?createItemAbstractCerealSchema@ComponentItem@@SA?AUSchema@reflection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static struct reflection::Schema createItemAbstractCerealSchema(std::string const &);
    /**
     * @hash   -845365435
     * @symbol ?registerItemComponentTypes@ComponentItem@@SAXXZ
     */
    MCAPI static void registerItemComponentTypes();
    /**
     * @hash   -1797635626
     * @symbol ?upgradeJson@ComponentItem@@SA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@V?$optional@VSemVersion@@@3@@Z
     */
    MCAPI static bool upgradeJson(std::string &, class Core::Path const &, class std::optional<class SemVersion>);

//private:
    /**
     * @hash   -1179898073
     * @symbol ?_buildItemPropertiesNetworkTag@ComponentItem@@AEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> _buildItemPropertiesNetworkTag() const;
    /**
     * @hash   57456635
     * @symbol ?_executeEvent@ComponentItem@@AEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@4@AEAVRenderParams@@@Z
     */
    MCAPI void _executeEvent(class ItemStackBase &, std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @hash   -105321608
     * @symbol ?_forceExecuteTrigger@ComponentItem@@AEBA_NAEAVItemStackBase@@AEBVDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEAVRenderParams@@@Z
     */
    MCAPI bool _forceExecuteTrigger(class ItemStackBase &, class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @hash   1066889899
     * @symbol ?_loadComponentsFromNetworkTag@ComponentItem@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
     */
    MCAPI void _loadComponentsFromNetworkTag(std::string const &, class CompoundTag const &);
    /**
     * @hash   1768933863
     * @symbol ?_loadItemPropertiesNetworkTag@ComponentItem@@AEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _loadItemPropertiesNetworkTag(class CompoundTag const &);
    /**
     * @hash   -1837263244
     * @symbol ?_loadItemTagsNetworkTag@ComponentItem@@AEAAXAEBVListTag@@@Z
     */
    MCAPI void _loadItemTagsNetworkTag(class ListTag const &);

private:
    /**
     * @hash   1645870996
     * @symbol ?mDocumentUpgrader@ComponentItem@@0VCerealDocumentUpgrader@@A
     */
    MCAPI static class CerealDocumentUpgrader mDocumentUpgrader;

};