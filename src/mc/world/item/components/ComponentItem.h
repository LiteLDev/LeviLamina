#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct Schema; }
namespace mce { class Color; }
// clang-format on

class ComponentItem : public ::Item {

public:
    // prevent constructor by default
    ComponentItem& operator=(ComponentItem const&) = delete;
    ComponentItem(ComponentItem const&)            = delete;
    ComponentItem()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initServer\@ComponentItem\@\@UEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    virtual bool initServer(class Json::Value&, class SemVersion const&, bool, class Experiments const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tearDown\@ComponentItem\@\@UEAAXXZ
     */
    virtual void tearDown(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?setDescriptionId\@ComponentItem\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class ComponentItem& setDescriptionId(std::string const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?getDescriptionId\@ComponentItem\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getDescriptionId() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?isMusicDisk\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isMusicDisk() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?executeEvent\@ComponentItem\@\@UEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?isArmor\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isArmor() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?isBlockPlanterItem\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isBlockPlanterItem() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?isDamageable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isDamageable() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?isDyeable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 22
     * @symbol ?isFood\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isFood() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?isThrowable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isThrowable() const; // NOLINT
    /**
     * @vftbl 24
     * @symbol ?isUseable\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool isUseable() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol ?getComponent\@ComponentItem\@\@UEBAPEAVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    virtual class ItemComponent* getComponent(class HashedString const&) const; // NOLINT
    /**
     * @vftbl 27
     * @symbol ?getFood\@ComponentItem\@\@UEBAPEAVIFoodItemComponent\@\@XZ
     */
    virtual class IFoodItemComponent* getFood() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol ?setMaxDamage\@ComponentItem\@\@UEAAAEAVItem\@\@H\@Z
     */
    virtual class Item& setMaxDamage(int); // NOLINT
    /**
     * @vftbl 39
     * @symbol
     * ?buildNetworkTag\@ComponentItem\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 40
     * @symbol ?initializeFromNetwork\@ComponentItem\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 41
     * @symbol
     * ?validateFromNetwork\@ComponentItem\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 42
     * @symbol ?getBlockShape\@ComponentItem\@\@UEBA?AW4BlockShape\@\@XZ
     */
    virtual enum class BlockShape getBlockShape() const; // NOLINT
    /**
     * @vftbl 43
     * @symbol ?canBeDepleted\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canBeDepleted() const; // NOLINT
    /**
     * @vftbl 44
     * @symbol ?canDestroySpecial\@ComponentItem\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroySpecial(class Block const&) const; // NOLINT
    /**
     * @vftbl 45
     * @symbol ?getLevelDataForAuxValue\@ComponentItem\@\@UEBAHH\@Z
     */
    virtual int getLevelDataForAuxValue(int) const; // NOLINT
    /**
     * @vftbl 47
     * @symbol ?getMaxDamage\@ComponentItem\@\@UEBAFXZ
     */
    virtual short getMaxDamage() const; // NOLINT
    /**
     * @vftbl 48
     * @symbol ?getAttackDamage\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const; // NOLINT
    /**
     * @vftbl 50
     * @symbol ?isGlint\@ComponentItem\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool isGlint(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53(); // NOLINT
    /**
     * @vftbl 55
     * @symbol ?canDestroyInCreative\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const; // NOLINT
    /**
     * @vftbl 56
     * @symbol ?isDestructive\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const; // NOLINT
    /**
     * @vftbl 57
     * @symbol ?isLiquidClipItem\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const; // NOLINT
    /**
     * @vftbl 59
     * @symbol ?requiresInteract\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const; // NOLINT
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@ComponentItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 61
     * @symbol ?isValidRepairItem\@ComponentItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&)
        const; // NOLINT
    /**
     * @vftbl 62
     * @symbol ?getEnchantSlot\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const; // NOLINT
    /**
     * @vftbl 63
     * @symbol ?getEnchantValue\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const; // NOLINT
    /**
     * @vftbl 64
     * @symbol ?getArmorValue\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getArmorValue() const; // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 68
     * @symbol ?getDamageChance\@ComponentItem\@\@UEBAHH\@Z
     */
    virtual int getDamageChance(int) const; // NOLINT
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72(); // NOLINT
    /**
     * @vftbl 73
     * @symbol ?getColor\@ComponentItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const; // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 76
     * @symbol ?clearColor\@ComponentItem\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase&) const; // NOLINT
    /**
     * @vftbl 78
     * @symbol ?setColor\@ComponentItem\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const; // NOLINT
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79(); // NOLINT
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80(); // NOLINT
    /**
     * @vftbl 84
     * @symbol ?use\@ComponentItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 85
     * @symbol ?dispense\@ComponentItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 86
     * @symbol
     * ?useTimeDepleted\@ComponentItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const; // NOLINT
    /**
     * @vftbl 87
     * @symbol ?releaseUsing\@ComponentItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack&, class Player*, int) const; // NOLINT
    /**
     * @vftbl 88
     * @symbol ?getDestroySpeed\@ComponentItem\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const; // NOLINT
    /**
     * @vftbl 90
     * @symbol ?hitActor\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const; // NOLINT
    /**
     * @vftbl 91
     * @symbol ?hitBlock\@ComponentItem\@\@UEBAXAEAVItemStack\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVMob\@\@\@Z
     */
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const; // NOLINT
    /**
     * @vftbl 92
     * @symbol ?mineBlock\@ComponentItem\@\@UEBA_NAEAVItemInstance\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const; // NOLINT
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@ComponentItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const; // NOLINT
    /**
     * @vftbl 94
     * @symbol
     * ?buildDescriptionName\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 96
     * @symbol
     * ?buildEffectDescriptionName\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 100
     * @symbol ?getMaxStackSize\@ComponentItem\@\@UEBAEAEBVItemDescriptor\@\@\@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const; // NOLINT
    /**
     * @vftbl 103
     * @symbol ?getCooldownType\@ComponentItem\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getCooldownType() const; // NOLINT
    /**
     * @vftbl 104
     * @symbol ?getCooldownTime\@ComponentItem\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const; // NOLINT
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115(); // NOLINT
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116(); // NOLINT
    /**
     * @vftbl 118
     * @symbol ?initClient\@ComponentItem\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    virtual void initClient(class Json::Value&, class SemVersion const&, bool, class Experiments const&); // NOLINT
    /**
     * @vftbl 119
     * @symbol
     * ?setIconInfo\@ComponentItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item& setIconInfo(std::string const&, int); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@ComponentItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const; // NOLINT
    /**
     * @vftbl 121
     * @symbol
     * ?getInteractText\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const&) const; // NOLINT
    /**
     * @vftbl 122
     * @symbol ?getAnimationFrameFor\@ComponentItem\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const; // NOLINT
    /**
     * @vftbl 123
     * @symbol ?isEmissive\@ComponentItem\@\@UEBA_NH\@Z
     */
    virtual bool isEmissive(int) const; // NOLINT
    /**
     * @vftbl 126
     * @symbol ?canBeCharged\@ComponentItem\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const; // NOLINT
    /**
     * @vftbl 131
     * @symbol
     * ?getAuxValuesDescription\@ComponentItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getAuxValuesDescription() const; // NOLINT
    /**
     * @vftbl 132
     * @symbol ?_checkUseOnPermissions\@ComponentItem\@\@EEBA_NAEAVActor\@\@AEAVItemStackBase\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    virtual bool _checkUseOnPermissions(class Actor&, class ItemStackBase&, unsigned char const&, class BlockPos const&)
        const; // NOLINT
    /**
     * @vftbl 133
     * @symbol ?_calculatePlacePos\@ComponentItem\@\@EEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool
    _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const; // NOLINT
    /**
     * @vftbl 134
     * @symbol ?_shouldAutoCalculatePlacePos\@ComponentItem\@\@EEBA_NXZ
     */
    virtual bool _shouldAutoCalculatePlacePos() const; // NOLINT
    /**
     * @vftbl 135
     * @symbol
     * ?_useOn\@ComponentItem\@\@EEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPONENTITEM
    /**
     * @symbol ?getVariant\@ComponentItem\@\@UEBAHHH_N\@Z
     */
    MCVAPI int getVariant(int, int, bool) const; // NOLINT
    /**
     * @symbol ?hasCustomColor\@ComponentItem\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?isComponentBased\@ComponentItem\@\@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const; // NOLINT
    /**
     * @symbol ?useVariant\@ComponentItem\@\@UEBA_NHH_N\@Z
     */
    MCVAPI bool useVariant(int, int, bool) const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ComponentItem(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ComponentItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI ComponentItem(std::string const&, short); // NOLINT
    /**
     * @symbol ?_addCerealItemsToMap\@ComponentItem\@\@QEAAXXZ
     */
    MCAPI void _addCerealItemsToMap(); // NOLINT
    /**
     * @symbol
     * ?_buildItemsFileSchema\@ComponentItem\@\@QEAA?AV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VComponentItem\@\@\@JsonUtil\@\@\@std\@\@AEAV23\@_NVSemVersion\@\@\@Z
     */
    MCAPI class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>>
    _buildItemsFileSchema(
        class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ComponentItem>>&,
        bool,
        class SemVersion
    ); // NOLINT
    /**
     * @symbol
     * ?_validateClientSchemaAndInitItem\@ComponentItem\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    MCAPI bool
    _validateClientSchemaAndInitItem(class Json::Value&, class SemVersion const&, bool, class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?_validateServerSchemaAndInitItem\@ComponentItem\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    MCAPI bool
    _validateServerSchemaAndInitItem(class Json::Value&, class SemVersion const&, bool, class Experiments const&); // NOLINT
    /**
     * @symbol ?checkComponentDataForContentErrors\@ComponentItem\@\@QEBA_NXZ
     */
    MCAPI bool checkComponentDataForContentErrors() const; // NOLINT
    /**
     * @symbol
     * ?executeTrigger\@ComponentItem\@\@QEBA_NAEAVItemStackBase\@\@AEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool
    executeTrigger(class ItemStackBase&, class DefinitionTrigger const&, class RenderParams&) const; // NOLINT
    /**
     * @symbol ?parseJsonEvents\@ComponentItem\@\@QEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool parseJsonEvents(class Json::Value const&, class SemVersion const&); // NOLINT
    /**
     * @symbol ?setCanDestroyInCreative\@ComponentItem\@\@QEAAX_N\@Z
     */
    MCAPI void setCanDestroyInCreative(bool); // NOLINT
    /**
     * @symbol ?buildAllPatchSchemas\@ComponentItem\@\@SAXAEAVCerealDocumentUpgrader\@\@\@Z
     */
    MCAPI static void buildAllPatchSchemas(class CerealDocumentUpgrader&); // NOLINT
    /**
     * @symbol
     * ?createItemAbstractCerealSchema\@ComponentItem\@\@SA?AUSchema\@cereal\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct cereal::Schema createItemAbstractCerealSchema(std::string const&); // NOLINT
    /**
     * @symbol ?registerItemComponentTypes\@ComponentItem\@\@SAXXZ
     */
    MCAPI static void registerItemComponentTypes(); // NOLINT
    /**
     * @symbol
     * ?upgradeJson\@ComponentItem\@\@SA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@V?$optional\@VSemVersion\@\@\@3\@\@Z
     */
    MCAPI static bool
    upgradeJson(std::string&, class Core::Path const&, class std::optional<class SemVersion>); // NOLINT

    // private:
    /**
     * @symbol
     * ?_buildItemPropertiesNetworkTag\@ComponentItem\@\@AEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> _buildItemPropertiesNetworkTag() const; // NOLINT
    /**
     * @symbol
     * ?_executeEvent\@ComponentItem\@\@AEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@4\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void
    _executeEvent(class ItemStackBase&, std::string const&, std::vector<struct std::pair<std::string const, std::string const>>&, class RenderParams&)
        const; // NOLINT
    /**
     * @symbol
     * ?_forceExecuteTrigger\@ComponentItem\@\@AEBA_NAEAVItemStackBase\@\@AEBVDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool
    _forceExecuteTrigger(class ItemStackBase&, class DefinitionTrigger const&, std::vector<struct std::pair<std::string const, std::string const>>&, class RenderParams&)
        const; // NOLINT
    /**
     * @symbol
     * ?_loadComponentsFromNetworkTag\@ComponentItem\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadComponentsFromNetworkTag(std::string const&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_loadItemPropertiesNetworkTag\@ComponentItem\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadItemPropertiesNetworkTag(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_loadItemTagsNetworkTag\@ComponentItem\@\@AEAAXAEBVListTag\@\@\@Z
     */
    MCAPI void _loadItemTagsNetworkTag(class ListTag const&); // NOLINT
    /**
     * @symbol ?_parseCereal\@ComponentItem\@\@AEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    MCAPI bool
    _parseCereal(class Json::Value const&, class SemVersion const&, bool, class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?_validateCerealComponent\@ComponentItem\@\@AEAA_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    MCAPI bool _validateCerealComponent(std::string, class SemVersion const&, bool, class Experiments const&); // NOLINT

private:
    /**
     * @symbol ?mDocumentUpgrader\@ComponentItem\@\@0VCerealDocumentUpgrader\@\@A
     */
    MCAPI static class CerealDocumentUpgrader mDocumentUpgrader; // NOLINT
};
