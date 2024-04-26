#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ComponentItem : public ::Item {
public:
    // prevent constructor by default
    ComponentItem& operator=(ComponentItem const&);
    ComponentItem(ComponentItem const&);
    ComponentItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ComponentItem@@UEAA@XZ
    virtual ~ComponentItem();

    // vIndex: 1, symbol: ?initServer@ComponentItem@@UEAA_NAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual bool initServer(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 2, symbol: ?tearDown@ComponentItem@@UEAAXXZ
    virtual void tearDown();

    // vIndex: 3, symbol:
    // ?setDescriptionId@ComponentItem@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class ComponentItem& setDescriptionId(std::string const&);

    // vIndex: 4, symbol:
    // ?getDescriptionId@ComponentItem@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getDescriptionId() const;

    // vIndex: 6, symbol: ?isMusicDisk@ComponentItem@@UEBA_NXZ
    virtual bool isMusicDisk() const;

    // vIndex: 7, symbol:
    // ?executeEvent@ComponentItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 8, symbol: ?isComponentBased@ComponentItem@@UEBA_NXZ
    virtual bool isComponentBased() const;

    // vIndex: 9, symbol: ?isArmor@ComponentItem@@UEBA_NXZ
    virtual bool isArmor() const;

    // vIndex: 10, symbol: ?isBlockPlanterItem@ComponentItem@@UEBA_NXZ
    virtual bool isBlockPlanterItem() const;

    // vIndex: 13, symbol: ?isDamageable@ComponentItem@@UEBA_NXZ
    virtual bool isDamageable() const;

    // vIndex: 14, symbol: ?isDyeable@ComponentItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 18, symbol: ?isFood@ComponentItem@@UEBA_NXZ
    virtual bool isFood() const;

    // vIndex: 19, symbol: ?isThrowable@ComponentItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 20, symbol: ?isUseable@ComponentItem@@UEBA_NXZ
    virtual bool isUseable() const;

    // vIndex: 21, symbol: ?isTrimAllowed@ComponentItem@@UEBA_NXZ
    virtual bool isTrimAllowed() const;

    // vIndex: 22, symbol: ?getComponent@ComponentItem@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
    virtual class ItemComponent* getComponent(class HashedString const& id) const;

    // vIndex: 23, symbol: ?getFood@ComponentItem@@UEBAPEAVIFoodItemComponent@@XZ
    virtual class IFoodItemComponent* getFood() const;

    // vIndex: 24, symbol: ?setMaxDamage@ComponentItem@@UEAAAEAVItem@@H@Z
    virtual class Item& setMaxDamage(int maxDamage);

    // vIndex: 26, symbol:
    // ?buildNetworkTag@ComponentItem@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 27, symbol: ?initializeFromNetwork@ComponentItem@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const& tag);

    // vIndex: 28, symbol:
    // ?validateFromNetwork@ComponentItem@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const&);

    // vIndex: 29, symbol: ?getBlockShape@ComponentItem@@UEBA?AW4BlockShape@@XZ
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 30, symbol: ?canBeDepleted@ComponentItem@@UEBA_NXZ
    virtual bool canBeDepleted() const;

    // vIndex: 31, symbol: ?canDestroySpecial@ComponentItem@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 32, symbol: ?getLevelDataForAuxValue@ComponentItem@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int) const;

    // vIndex: 34, symbol: ?getMaxDamage@ComponentItem@@UEBAFXZ
    virtual short getMaxDamage() const;

    // vIndex: 35, symbol: ?getAttackDamage@ComponentItem@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 38, symbol: ?isGlint@ComponentItem@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 43, symbol: ?canDestroyInCreative@ComponentItem@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 44, symbol: ?isDestructive@ComponentItem@@UEBA_NH@Z
    virtual bool isDestructive(int) const;

    // vIndex: 45, symbol: ?isLiquidClipItem@ComponentItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 47, symbol: ?requiresInteract@ComponentItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@ComponentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49, symbol: ?isValidRepairItem@ComponentItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50, symbol: ?getEnchantSlot@ComponentItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@ComponentItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 52, symbol: ?getArmorValue@ComponentItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 57, symbol: ?getDamageChance@ComponentItem@@UEBAHH@Z
    virtual int getDamageChance(int unbreaking) const;

    // vIndex: 62, symbol: ?getColor@ComponentItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    // vIndex: 63, symbol: ?hasCustomColor@ComponentItem@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool hasCustomColor(class ItemStackBase const&) const;

    // vIndex: 65, symbol: ?clearColor@ComponentItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 66, symbol: ?setColor@ComponentItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 72, symbol: ?use@ComponentItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@ComponentItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 74, symbol:
    // ?useTimeDepleted@ComponentItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 75, symbol: ?releaseUsing@ComponentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 76, symbol: ?getDestroySpeed@ComponentItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // vIndex: 77, symbol: ?hurtActor@ComponentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 78, symbol: ?hitActor@ComponentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hitActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 79, symbol: ?hitBlock@ComponentItem@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
    virtual void
    hitBlock(class ItemStack& item, class Block const& block, class BlockPos const& blockPos, class Mob& attacker)
        const;

    // vIndex: 80, symbol: ?mineBlock@ComponentItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& instance, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 81, symbol:
    // ?buildDescriptionName@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildDescriptionName(class ItemStackBase const&) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 83, symbol:
    // ?buildEffectDescriptionName@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 86, symbol: ?getMaxStackSize@ComponentItem@@UEBAEAEBVItemDescriptor@@@Z
    virtual uchar getMaxStackSize(class ItemDescriptor const&) const;

    // vIndex: 89, symbol: ?getCooldownType@ComponentItem@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 90, symbol: ?getCooldownTime@ComponentItem@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 97, symbol: ?getEquipLocation@ComponentItem@@UEBA?AW4ActorLocation@@XZ
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98, symbol: ?getEquipSound@ComponentItem@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 102, symbol: ?initClient@ComponentItem@@UEAAXAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual void initClient(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 103, symbol:
    // ?setIconInfo@ComponentItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int frame);

    // vIndex: 104, symbol: ?getIconInfo@ComponentItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 105, symbol:
    // ?getInteractText@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 106, symbol: ?getAnimationFrameFor@ComponentItem@@UEBAHPEAVMob@@_NPEBVItemStack@@1@Z
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;

    // vIndex: 107, symbol: ?isEmissive@ComponentItem@@UEBA_NH@Z
    virtual bool isEmissive(int) const;

    // vIndex: 110, symbol: ?canBeCharged@ComponentItem@@UEBA_NXZ
    virtual bool canBeCharged() const;

    // vIndex: 113, symbol:
    // ?getAuxValuesDescription@ComponentItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 115, symbol:
    // ?_checkUseOnPermissions@ComponentItem@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
    virtual bool
    _checkUseOnPermissions(class Actor& entity, class ItemStackBase& item, uchar const& face, class BlockPos const& pos)
        const;

    // vIndex: 116, symbol: ?_calculatePlacePos@ComponentItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 117, symbol: ?_shouldAutoCalculatePlacePos@ComponentItem@@EEBA_NXZ
    virtual bool _shouldAutoCalculatePlacePos() const;

    // vIndex: 118, symbol:
    // ?_useOn@ComponentItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // vIndex: 119, symbol: ?useVariant@ComponentItem@@UEBA_NHH_N@Z
    virtual bool useVariant(int, int, bool) const;

    // vIndex: 120, symbol: ?getVariant@ComponentItem@@UEBAHHH_N@Z
    virtual int getVariant(int, int, bool) const;

    // vIndex: 121, symbol: ?shouldUseJsonForRenderMatrix@ComponentItem@@UEBA_NXZ
    virtual bool shouldUseJsonForRenderMatrix() const;

    // symbol:
    // ??0ComponentItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@FAEBUReflectionCtx@cereal@@@Z
    MCAPI ComponentItem(std::string const&, short, struct cereal::ReflectionCtx const&);

    // symbol:
    // ?buildNetworkTag@ComponentItem@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // symbol: ?checkComponentDataForContentErrors@ComponentItem@@QEBA_NXZ
    MCAPI bool checkComponentDataForContentErrors() const;

    // symbol: ?executeTrigger@ComponentItem@@QEBA_NAEAVItemStackBase@@AEBVDefinitionTrigger@@AEAVRenderParams@@@Z
    MCAPI bool
    executeTrigger(class ItemStackBase& item, class DefinitionTrigger const& trigger, class RenderParams& params) const;

    // symbol: ?getMovementModifier@ComponentItem@@QEBAMXZ
    MCAPI float getMovementModifier() const;

    // symbol: ?init@ComponentItem@@QEAAX$$QEAUComponentItemDataAll_Latest@@AEBVSemVersion@@@Z
    MCAPI void init(struct ComponentItemDataAll_Latest&&, class SemVersion const&);

    // symbol:
    // ?onHitActor@ComponentItem@@QEAAAEAV?$Connector@$$A6AXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<void(class ItemStack&, class Actor&, class Mob&)>& onHitActor();

    // symbol:
    // ?onHitBlock@ComponentItem@@QEAAAEAV?$Connector@$$A6AXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<
        void(class ItemStack&, class Block const&, class BlockPos const&, class Mob&)>&
    onHitBlock();

    // symbol:
    // ?onHurtActor@ComponentItem@@QEAAAEAV?$Connector@$$A6AXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<void(class ItemStack&, class Actor&, class Mob&)>& onHurtActor();

    // symbol:
    // ?onMiningBlock@ComponentItem@@QEAAAEAV?$Connector@$$A6AXAEA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<
        void(bool&, class ItemStack&, class Block const&, int, int, int, class Actor*)>&
    onMiningBlock();

    // symbol: ?onUse@ComponentItem@@QEAAAEAV?$Connector@$$A6AXAEA_NAEAVItemStack@@AEAVPlayer@@@Z@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<void(bool&, class ItemStack&, class Player&)>& onUse();

    // symbol:
    // ?onUseTimeDepleted@ComponentItem@@QEAAAEAV?$Connector@$$A6AXAEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<void(class ItemStack&, class Player&, class Level&)>& onUseTimeDepleted();

    // symbol: ?setCanDestroyInCreative@ComponentItem@@QEAAX_N@Z
    MCAPI void setCanDestroyInCreative(bool);

    // symbol: ?initializeJsonUpgrades@ComponentItem@@SAXAEBUReflectionCtx@cereal@@@Z
    MCAPI static void initializeJsonUpgrades(struct cereal::ReflectionCtx const&);

    // symbol: ?registerItemComponentTypes@ComponentItem@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void registerItemComponentTypes(struct cereal::ReflectionCtx&);

    // symbol:
    // ?upgradeJson@ComponentItem@@SA?AU?$pair@_NVSemVersion@@@std@@AEBUReflectionCtx@cereal@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVPath@Core@@V?$optional@VSemVersion@@@3@@Z
    MCAPI static std::pair<bool, class SemVersion>
    upgradeJson(struct cereal::ReflectionCtx const&, std::string&, class Core::Path const&, std::optional<class SemVersion>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_initializeLoadedComponents@ComponentItem@@IEAAXAEBVSemVersion@@@Z
    MCAPI void _initializeLoadedComponents(class SemVersion const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addCerealItemsToMap@ComponentItem@@AEAAXXZ
    MCAPI void _addCerealItemsToMap();

    // symbol:
    // ?_buildItemPropertiesNetworkTag@ComponentItem@@AEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI std::unique_ptr<class CompoundTag> _buildItemPropertiesNetworkTag(struct cereal::ReflectionCtx const&) const;

    // symbol:
    // ?_loadComponentsFromNetworkTag@ComponentItem@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    MCAPI void
    _loadComponentsFromNetworkTag(std::string const&, class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // symbol: ?_loadItemPropertiesNetworkTag@ComponentItem@@AEAAXAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    MCAPI void _loadItemPropertiesNetworkTag(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // symbol: ?_loadItemTagsNetworkTag@ComponentItem@@AEAAXAEBVListTag@@@Z
    MCAPI void _loadItemTagsNetworkTag(class ListTag const& listTag);

    // symbol:
    // ?_validateSchemaAndInitItem@ComponentItem@@AEAA_NAEAVValue@Json@@AEBVSemVersion@@_N2AEBVExperiments@@AEBUReflectionCtx@cereal@@@Z
    MCAPI bool
    _validateSchemaAndInitItem(class Json::Value&, class SemVersion const&, bool, bool, class Experiments const&, struct cereal::ReflectionCtx const&);

    // symbol: ?_moveDataToComponentItem@ComponentItem@@CAXAEAV1@AEAUComponentItemData_Legacy@@@Z
    MCAPI static void _moveDataToComponentItem(class ComponentItem&, struct ComponentItemData_Legacy&);

    // symbol: ?getPropCerealDocumentUpgrader@ComponentItem@@CAAEAVCerealDocumentUpgrader@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static class CerealDocumentUpgrader& getPropCerealDocumentUpgrader(struct cereal::ReflectionCtx const&);

    // symbol: ?initEnTTMetaType@ComponentItem@@CAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void initEnTTMetaType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
