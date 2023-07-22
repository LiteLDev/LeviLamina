/**
 * @file  ComponentItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "JsonUtil.hpp"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ComponentItem();
    /**
     * @vftbl  1
     * @symbol  ?initServer\@ComponentItem\@\@UEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual bool initServer(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol  ?tearDown\@ComponentItem\@\@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @vftbl  3
     * @symbol  ?setDescriptionId\@ComponentItem\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class ComponentItem & setDescriptionId(std::string const &);
    /**
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
     * @vftbl  12
     * @symbol  ?isArmor\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isArmor() const;
    /**
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
     * @vftbl  17
     * @symbol  ?isDamageable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isDamageable() const;
    /**
     * @vftbl  18
     * @symbol  ?isDyeable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @vftbl  19
     * @symbol  ?isDye\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isDye() const;
    /**
     * @vftbl  22
     * @symbol  ?isFood\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isFood() const;
    /**
     * @vftbl  23
     * @symbol  ?isThrowable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @vftbl  24
     * @symbol  ?isUseable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isUseable() const;
    /**
     * @vftbl  25
     * @symbol  ?getComponent\@ComponentItem\@\@UEBAPEAVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    /**
     * @vftbl  27
     * @symbol  ?getFood\@ComponentItem\@\@UEBAPEAVIFoodItemComponent\@\@XZ
     */
    virtual class IFoodItemComponent * getFood() const;
    /**
     * @vftbl  30
     * @symbol  ?setMaxDamage\@ComponentItem\@\@UEAAAEAVItem\@\@H\@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @vftbl  39
     * @symbol  ?buildNetworkTag\@ComponentItem\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  40
     * @symbol  ?initializeFromNetwork\@ComponentItem\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @vftbl  41
     * @symbol  ?validateFromNetwork\@ComponentItem\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /**
     * @vftbl  42
     * @symbol  ?getBlockShape\@ComponentItem\@\@UEBA?AW4BlockShape\@\@XZ
     */
    virtual enum class BlockShape getBlockShape() const;
    /**
     * @vftbl  43
     * @symbol  ?canBeDepleted\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canBeDepleted() const;
    /**
     * @vftbl  44
     * @symbol  ?canDestroySpecial\@ComponentItem\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @vftbl  45
     * @symbol  ?getLevelDataForAuxValue\@ComponentItem\@\@UEBAHH\@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @vftbl  47
     * @symbol  ?getMaxDamage\@ComponentItem\@\@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @vftbl  48
     * @symbol  ?getAttackDamage\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
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
     * @vftbl  55
     * @symbol  ?canDestroyInCreative\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @vftbl  56
     * @symbol  ?isDestructive\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @vftbl  57
     * @symbol  ?isLiquidClipItem\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl  59
     * @symbol  ?requiresInteract\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@ComponentItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  61
     * @symbol  ?isValidRepairItem\@ComponentItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  62
     * @symbol  ?getEnchantSlot\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  63
     * @symbol  ?getEnchantValue\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
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
     * @vftbl  67
     * @symbol  ?isValidAuxValue\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
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
     * @vftbl  76
     * @symbol  ?clearColor\@ComponentItem\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
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
     * @vftbl  84
     * @symbol  ?use\@ComponentItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol  ?dispense\@ComponentItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  86
     * @symbol  ?useTimeDepleted\@ComponentItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl  87
     * @symbol  ?releaseUsing\@ComponentItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vftbl  88
     * @symbol  ?getDestroySpeed\@ComponentItem\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @vftbl  89
     * @symbol  ?hurtActor\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  90
     * @symbol  ?hitActor\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  91
     * @symbol  ?hitBlock\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVMob\@\@\@Z
     */
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @vftbl  92
     * @symbol  ?mineBlock\@ComponentItem\@\@UEBA_NAEAVItemInstance\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  93
     * @symbol  ?mineBlock\@ComponentItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  94
     * @symbol  ?buildDescriptionName\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /**
     * @vftbl  95
     * @symbol  ?buildDescriptionId\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  96
     * @symbol  ?buildEffectDescriptionName\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @vftbl  100
     * @symbol  ?getMaxStackSize\@ComponentItem\@\@UEBAEAEBVItemDescriptor\@\@\@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @vftbl  103
     * @symbol  ?getCooldownType\@ComponentItem\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @vftbl  104
     * @symbol  ?getCooldownTime\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @vftbl  116
     * @symbol  ?initClient\@ComponentItem\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void initClient(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  117
     * @symbol  ?setIconInfo\@ComponentItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl  118
     * @symbol  ?getIconInfo\@ComponentItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  119
     * @symbol  ?getInteractText\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @vftbl  120
     * @symbol  ?getAnimationFrameFor\@ComponentItem\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @vftbl  121
     * @symbol  ?isEmissive\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isEmissive(int) const;
    /**
     * @vftbl  124
     * @symbol  ?canBeCharged\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @vftbl  129
     * @symbol  ?getAuxValuesDescription\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @vftbl  130
     * @symbol  ?_checkUseOnPermissions\@ComponentItem\@\@EEBA_NAEAVActor\@\@AEAVItemStackBase\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /**
     * @vftbl  131
     * @symbol  ?_calculatePlacePos\@ComponentItem\@\@EEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  132
     * @symbol  ?_useOn\@ComponentItem\@\@EEBA_NAEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPONENTITEM
    /**
     * @symbol  ?getVariant\@ComponentItem\@\@UEBAHHH_N\@Z
     */
    MCVAPI int getVariant(int, int, bool) const;
    /**
     * @symbol  ?hasCustomColor\@ComponentItem\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @symbol  ?isComponentBased\@ComponentItem\@\@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const;
    /**
     * @symbol  ?useVariant\@ComponentItem\@\@UEBA_NHH_N\@Z
     */
    MCVAPI bool useVariant(int, int, bool) const;
#endif
    /**
     * @symbol  ??0ComponentItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI ComponentItem(std::string const &, short);
    /**
     * @symbol  ?_addCerealItemsToMap\@ComponentItem\@\@QEAAXXZ
     */
    MCAPI void _addCerealItemsToMap();
    /**
     * @symbol  ?_buildItemsFileSchema\@ComponentItem\@\@QEAA?AV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VComponentItem\@\@\@JsonUtil\@\@\@std\@\@AEAV23\@_NVSemVersion\@\@\@Z
     */
    MCAPI class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>> _buildItemsFileSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>> &, bool, class SemVersion);
    /**
     * @symbol  ?_validateClientSchemaAndInitItem\@ComponentItem\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool _validateClientSchemaAndInitItem(class Json::Value &, class SemVersion const &);
    /**
     * @symbol  ?_validateServerSchemaAndInitItem\@ComponentItem\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool _validateServerSchemaAndInitItem(class Json::Value &, class SemVersion const &);
    /**
     * @symbol  ?checkComponentDataForContentErrors\@ComponentItem\@\@QEBA_NXZ
     */
    MCAPI bool checkComponentDataForContentErrors() const;
    /**
     * @symbol  ?executeTrigger\@ComponentItem\@\@QEBA_NAEAVItemStackBase\@\@AEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool executeTrigger(class ItemStackBase &, class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @symbol  ?getAliases\@ComponentItem\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const & getAliases() const;
    /**
     * @symbol  ?parseJsonEvents\@ComponentItem\@\@QEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool parseJsonEvents(class Json::Value const &, class SemVersion const &);
    /**
     * @symbol  ?createItemAbstractCerealSchema\@ComponentItem\@\@SA?AUSchema\@reflection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct reflection::Schema createItemAbstractCerealSchema(std::string const &);
    /**
     * @symbol  ?registerItemComponentTypes\@ComponentItem\@\@SAXXZ
     */
    MCAPI static void registerItemComponentTypes();
    /**
     * @symbol  ?upgradeJson\@ComponentItem\@\@SA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@V?$optional\@VSemVersion\@\@\@3\@\@Z
     */
    MCAPI static bool upgradeJson(std::string &, class Core::Path const &, class std::optional<class SemVersion>);

//private:
    /**
     * @symbol  ?_buildItemPropertiesNetworkTag\@ComponentItem\@\@AEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> _buildItemPropertiesNetworkTag() const;
    /**
     * @symbol  ?_executeEvent\@ComponentItem\@\@AEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@4\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void _executeEvent(class ItemStackBase &, std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @symbol  ?_forceExecuteTrigger\@ComponentItem\@\@AEBA_NAEAVItemStackBase\@\@AEBVDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool _forceExecuteTrigger(class ItemStackBase &, class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @symbol  ?_loadComponentsFromNetworkTag\@ComponentItem\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadComponentsFromNetworkTag(std::string const &, class CompoundTag const &);
    /**
     * @symbol  ?_loadItemPropertiesNetworkTag\@ComponentItem\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadItemPropertiesNetworkTag(class CompoundTag const &);
    /**
     * @symbol  ?_loadItemTagsNetworkTag\@ComponentItem\@\@AEAAXAEBVListTag\@\@\@Z
     */
    MCAPI void _loadItemTagsNetworkTag(class ListTag const &);

private:
    /**
     * @symbol  ?mDocumentUpgrader\@ComponentItem\@\@0VCerealDocumentUpgrader\@\@A
     */
    MCAPI static class CerealDocumentUpgrader mDocumentUpgrader;

};