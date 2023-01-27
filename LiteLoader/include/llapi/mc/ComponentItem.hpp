/**
 * @file  ComponentItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../JsonUtil.hpp"
#include "../../Core.hpp"
#include "../../Item.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ComponentItem();
    /**
     * @hash   -172256795
     * @vftbl  1
     * @symbol  ?initServer\@ComponentItem\@\@UEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual bool initServer(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1680803899
     * @vftbl  2
     * @symbol  ?tearDown\@ComponentItem\@\@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @hash   -381488138
     * @vftbl  3
     * @symbol  ?setDescriptionId\@ComponentItem\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class ComponentItem & setDescriptionId(std::string const &);
    /**
     * @hash   -144805751
     * @vftbl  4
     * @symbol  ?getDescriptionId\@ComponentItem\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getDescriptionId() const;
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   -1069227003
     * @vftbl  10
     * @symbol  ?executeEvent\@ComponentItem\@\@UEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @hash   1293348461
     * @vftbl  12
     * @symbol  ?isArmor\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isArmor() const;
    /**
     * @hash   1601859360
     * @vftbl  13
     * @symbol  ?isBlockPlanterItem\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isBlockPlanterItem() const;
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -1064974517
     * @vftbl  17
     * @symbol  ?isDamageable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isDamageable() const;
    /**
     * @hash   1582352472
     * @vftbl  18
     * @symbol  ?isDyeable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @hash   -972003458
     * @vftbl  19
     * @symbol  ?isDye\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isDye() const;
    /**
     * @hash   1665376432
     * @vftbl  22
     * @symbol  ?isFood\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isFood() const;
    /**
     * @hash   -930340706
     * @vftbl  23
     * @symbol  ?isThrowable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @hash   1962139679
     * @vftbl  24
     * @symbol  ?isUseable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isUseable() const;
    /**
     * @hash   1112911824
     * @vftbl  25
     * @symbol  ?getComponent\@ComponentItem\@\@UEBAPEAVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    /**
     * @hash   520450845
     * @vftbl  27
     * @symbol  ?getFood\@ComponentItem\@\@UEBAPEAVIFoodItemComponent\@\@XZ
     */
    virtual class IFoodItemComponent * getFood() const;
    /**
     * @hash   1335927824
     * @vftbl  30
     * @symbol  ?setMaxDamage\@ComponentItem\@\@UEAAAEAVItem\@\@H\@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @hash   -1704871037
     * @vftbl  39
     * @symbol  ?buildNetworkTag\@ComponentItem\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1342345695
     * @vftbl  40
     * @symbol  ?initializeFromNetwork\@ComponentItem\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -343430234
     * @vftbl  41
     * @symbol  ?validateFromNetwork\@ComponentItem\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /**
     * @hash   936255158
     * @vftbl  42
     * @symbol  ?getBlockShape\@ComponentItem\@\@UEBA?AW4BlockShape\@\@XZ
     */
    virtual enum class BlockShape getBlockShape() const;
    /**
     * @hash   -1161224618
     * @vftbl  43
     * @symbol  ?canBeDepleted\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canBeDepleted() const;
    /**
     * @hash   -102665373
     * @vftbl  44
     * @symbol  ?canDestroySpecial\@ComponentItem\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @hash   -1521604220
     * @vftbl  45
     * @symbol  ?getLevelDataForAuxValue\@ComponentItem\@\@UEBAHH\@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @hash   457959115
     * @vftbl  47
     * @symbol  ?getMaxDamage\@ComponentItem\@\@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @hash   -870210440
     * @vftbl  48
     * @symbol  ?getAttackDamage\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @hash   1222985241
     * @vftbl  50
     * @symbol  ?isGlint\@ComponentItem\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @hash   709246294
     * @vftbl  55
     * @symbol  ?canDestroyInCreative\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @hash   522884397
     * @vftbl  56
     * @symbol  ?isDestructive\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @hash   -396359764
     * @vftbl  57
     * @symbol  ?isLiquidClipItem\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @hash   -1707231492
     * @vftbl  59
     * @symbol  ?requiresInteract\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   91076879
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@ComponentItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   1075726440
     * @vftbl  61
     * @symbol  ?isValidRepairItem\@ComponentItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   -1193645636
     * @vftbl  62
     * @symbol  ?getEnchantSlot\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   1528360889
     * @vftbl  63
     * @symbol  ?getEnchantValue\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @hash   719798371
     * @vftbl  64
     * @symbol  ?getArmorValue\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @hash   -1702953274
     * @vftbl  67
     * @symbol  ?isValidAuxValue\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @hash   -2013201751
     * @vftbl  68
     * @symbol  ?getDamageChance\@ComponentItem\@\@UEBAHH\@Z
     */
    virtual int getDamageChance(int) const;
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
     * @hash   1628131369
     * @vftbl  73
     * @symbol  ?getColor\@ComponentItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @hash   -404102408
     * @vftbl  76
     * @symbol  ?clearColor\@ComponentItem\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @hash   435763766
     * @vftbl  78
     * @symbol  ?setColor\@ComponentItem\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
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
     * @hash   -707816626
     * @vftbl  84
     * @symbol  ?use\@ComponentItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   1941675212
     * @vftbl  85
     * @symbol  ?dispense\@ComponentItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   2133684896
     * @vftbl  86
     * @symbol  ?useTimeDepleted\@ComponentItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   331391266
     * @vftbl  87
     * @symbol  ?releaseUsing\@ComponentItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   -800225350
     * @vftbl  88
     * @symbol  ?getDestroySpeed\@ComponentItem\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @hash   690174606
     * @vftbl  89
     * @symbol  ?hurtActor\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   -561454654
     * @vftbl  90
     * @symbol  ?hitActor\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   657840503
     * @vftbl  91
     * @symbol  ?hitBlock\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVMob\@\@\@Z
     */
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @hash   -665239834
     * @vftbl  92
     * @symbol  ?mineBlock\@ComponentItem\@\@UEBA_NAEAVItemInstance\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   40955627
     * @vftbl  93
     * @symbol  ?mineBlock\@ComponentItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   842725486
     * @vftbl  94
     * @symbol  ?buildDescriptionName\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   666476138
     * @vftbl  95
     * @symbol  ?buildDescriptionId\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   -1503906593
     * @vftbl  96
     * @symbol  ?buildEffectDescriptionName\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @hash   536618985
     * @vftbl  100
     * @symbol  ?getMaxStackSize\@ComponentItem\@\@UEBAEAEBVItemDescriptor\@\@\@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @hash   1670328522
     * @vftbl  103
     * @symbol  ?getCooldownType\@ComponentItem\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @hash   1620704777
     * @vftbl  104
     * @symbol  ?getCooldownTime\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @hash   317724427
     * @vftbl  116
     * @symbol  ?initClient\@ComponentItem\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void initClient(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1046258230
     * @vftbl  117
     * @symbol  ?setIconInfo\@ComponentItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @hash   177865879
     * @vftbl  118
     * @symbol  ?getIconInfo\@ComponentItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   -1950712181
     * @vftbl  119
     * @symbol  ?getInteractText\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   1910801317
     * @vftbl  120
     * @symbol  ?getAnimationFrameFor\@ComponentItem\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @hash   -640154044
     * @vftbl  121
     * @symbol  ?isEmissive\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isEmissive(int) const;
    /**
     * @hash   253760485
     * @vftbl  124
     * @symbol  ?canBeCharged\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @hash   -1020298362
     * @vftbl  129
     * @symbol  ?getAuxValuesDescription\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @hash   1422407874
     * @vftbl  130
     * @symbol  ?_checkUseOnPermissions\@ComponentItem\@\@EEBA_NAEAVActor\@\@AEAVItemStackBase\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /**
     * @hash   1813724033
     * @vftbl  131
     * @symbol  ?_calculatePlacePos\@ComponentItem\@\@EEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @hash   1660111214
     * @vftbl  132
     * @symbol  ?_useOn\@ComponentItem\@\@EEBA_NAEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPONENTITEM
    /**
     * @hash   1635714256
     * @symbol  ?getVariant\@ComponentItem\@\@UEBAHHH_N\@Z
     */
    MCVAPI int getVariant(int, int, bool) const;
    /**
     * @hash   -314619071
     * @symbol  ?hasCustomColor\@ComponentItem\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @hash   1313638360
     * @symbol  ?isComponentBased\@ComponentItem\@\@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const;
    /**
     * @hash   -595059628
     * @symbol  ?useVariant\@ComponentItem\@\@UEBA_NHH_N\@Z
     */
    MCVAPI bool useVariant(int, int, bool) const;
#endif
    /**
     * @hash   -2143236733
     * @symbol  ??0ComponentItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI ComponentItem(std::string const &, short);
    /**
     * @hash   698014425
     * @symbol  ?_addCerealItemsToMap\@ComponentItem\@\@QEAAXXZ
     */
    MCAPI void _addCerealItemsToMap();
    /**
     * @hash   338603228
     * @symbol  ?_buildItemsFileSchema\@ComponentItem\@\@QEAA?AV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VComponentItem\@\@\@JsonUtil\@\@\@std\@\@AEAV23\@_NVSemVersion\@\@\@Z
     */
    MCAPI class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>> _buildItemsFileSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>> &, bool, class SemVersion);
    /**
     * @hash   -692991028
     * @symbol  ?_validateClientSchemaAndInitItem\@ComponentItem\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool _validateClientSchemaAndInitItem(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1028985436
     * @symbol  ?_validateServerSchemaAndInitItem\@ComponentItem\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool _validateServerSchemaAndInitItem(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1522453792
     * @symbol  ?checkComponentDataForContentErrors\@ComponentItem\@\@QEBA_NXZ
     */
    MCAPI bool checkComponentDataForContentErrors() const;
    /**
     * @hash   309894023
     * @symbol  ?executeTrigger\@ComponentItem\@\@QEBA_NAEAVItemStackBase\@\@AEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool executeTrigger(class ItemStackBase &, class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @hash   -1759021963
     * @symbol  ?getAliases\@ComponentItem\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const & getAliases() const;
    /**
     * @hash   1619705982
     * @symbol  ?parseJsonEvents\@ComponentItem\@\@QEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool parseJsonEvents(class Json::Value const &, class SemVersion const &);
    /**
     * @hash   1394965219
     * @symbol  ?createItemAbstractCerealSchema\@ComponentItem\@\@SA?AUSchema\@reflection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct reflection::Schema createItemAbstractCerealSchema(std::string const &);
    /**
     * @hash   -11540331
     * @symbol  ?registerItemComponentTypes\@ComponentItem\@\@SAXXZ
     */
    MCAPI static void registerItemComponentTypes();
    /**
     * @hash   -969530394
     * @symbol  ?upgradeJson\@ComponentItem\@\@SA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@V?$optional\@VSemVersion\@\@\@3\@\@Z
     */
    MCAPI static bool upgradeJson(std::string &, class Core::Path const &, class std::optional<class SemVersion>);

//private:
    /**
     * @hash   -369659753
     * @symbol  ?_buildItemPropertiesNetworkTag\@ComponentItem\@\@AEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> _buildItemPropertiesNetworkTag() const;
    /**
     * @hash   867602699
     * @symbol  ?_executeEvent\@ComponentItem\@\@AEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@4\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void _executeEvent(class ItemStackBase &, std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @hash   704855208
     * @symbol  ?_forceExecuteTrigger\@ComponentItem\@\@AEBA_NAEAVItemStackBase\@\@AEBVDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool _forceExecuteTrigger(class ItemStackBase &, class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @hash   1877066715
     * @symbol  ?_loadComponentsFromNetworkTag\@ComponentItem\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadComponentsFromNetworkTag(std::string const &, class CompoundTag const &);
    /**
     * @hash   -1715810489
     * @symbol  ?_loadItemPropertiesNetworkTag\@ComponentItem\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadItemPropertiesNetworkTag(class CompoundTag const &);
    /**
     * @hash   -1027147932
     * @symbol  ?_loadItemTagsNetworkTag\@ComponentItem\@\@AEAAXAEBVListTag\@\@\@Z
     */
    MCAPI void _loadItemTagsNetworkTag(class ListTag const &);

private:
    /**
     * @hash   -1753598060
     * @symbol  ?mDocumentUpgrader\@ComponentItem\@\@0VCerealDocumentUpgrader\@\@A
     */
    MCAPI static class CerealDocumentUpgrader mDocumentUpgrader;

};