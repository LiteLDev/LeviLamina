#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    // vIndex: 0
    virtual ~ComponentItem();

    // vIndex: 1
    virtual bool initServer(
        class Json::Value const& data,
        class SemVersion const&  engineVersion,
        bool                     isBaseGamePack,
        class Experiments const& experiments
    );

    // vIndex: 2
    virtual void tearDown();

    // vIndex: 3
    virtual class ComponentItem& setDescriptionId(std::string const& descriptionId);

    // vIndex: 4
    virtual std::string const& getDescriptionId() const;

    // vIndex: 6
    virtual bool isMusicDisk() const;

    // vIndex: 7
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 8
    virtual bool isComponentBased() const;

    // vIndex: 9
    virtual bool isHumanoidArmor() const;

    // vIndex: 10
    virtual bool isBlockPlanterItem() const;

    // vIndex: 13
    virtual bool isDamageable() const;

    // vIndex: 14
    virtual bool isDyeable() const;

    // vIndex: 18
    virtual bool isFood() const;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 20
    virtual bool isUseable() const;

    // vIndex: 21
    virtual bool isTrimAllowed() const;

    // vIndex: 22
    virtual class ItemComponent* getComponent(class HashedString const& id) const;

    // vIndex: 23
    virtual class IFoodItemComponent* getFood() const;

    // vIndex: 24
    virtual class Item& setMaxDamage(int maxDamage);

    // vIndex: 26
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 27
    virtual void initializeFromNetwork(class CompoundTag const& tag);

    // vIndex: 28
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const& tag);

    // vIndex: 29
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 30
    virtual bool canBeDepleted() const;

    // vIndex: 31
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int) const;

    // vIndex: 34
    virtual short getMaxDamage() const;

    // vIndex: 35
    virtual int getAttackDamage() const;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 43
    virtual bool canDestroyInCreative() const;

    // vIndex: 44
    virtual bool isDestructive(int) const;

    // vIndex: 45
    virtual bool isLiquidClipItem() const;

    // vIndex: 47
    virtual bool requiresInteract() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 52
    virtual int getArmorValue() const;

    // vIndex: 57
    virtual int getDamageChance(int unbreaking) const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    // vIndex: 63
    virtual bool hasCustomColor(class ItemStackBase const&) const;

    // vIndex: 65
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 66
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73
    virtual class Actor* createProjectileActor(
        class BlockSource&     region,
        class ItemStack const& stack,
        class Vec3 const&      pos,
        class Vec3 const&      direction
    ) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 75
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 76
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 77
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 79
    virtual void hitActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 80
    virtual void
    hitBlock(class ItemStack& item, class Block const& block, class BlockPos const& blockPos, class Mob& attacker)
        const;

    // vIndex: 82
    virtual std::string buildDescriptionName(class ItemStackBase const& stack) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 84
    virtual std::string buildEffectDescriptionName(class ItemStackBase const& stack) const;

    // vIndex: 87
    virtual uchar getMaxStackSize(class ItemDescriptor const&) const;

    // vIndex: 90
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 91
    virtual int getCooldownTime() const;

    // vIndex: 97
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 102
    virtual void initClient(
        class Json::Value const& data,
        class SemVersion const&  engineVersion,
        bool                     isBaseGamePack,
        class Experiments const& experiments
    );

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int frame);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    // vIndex: 105
    virtual std::string getInteractText(class Player const& player) const;

    // vIndex: 106
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;

    // vIndex: 107
    virtual bool isEmissive(int) const;

    // vIndex: 110
    virtual bool canBeCharged() const;

    // vIndex: 113
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 115
    virtual bool
    _checkUseOnPermissions(class Actor& entity, class ItemStackBase& item, uchar const& face, class BlockPos const& pos)
        const;

    // vIndex: 116
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 117
    virtual bool _shouldAutoCalculatePlacePos() const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // vIndex: 119
    virtual bool useVariant(int, int, bool) const;

    // vIndex: 120
    virtual int getVariant(int, int, bool) const;

    // vIndex: 121
    virtual bool shouldUseJsonForRenderMatrix() const;

    MCAPI ComponentItem(std::string const& nameId, short id, struct cereal::ReflectionCtx const& ctx);

    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const& ctx) const;

    MCAPI bool checkComponentDataForContentErrors() const;

    MCAPI bool
    executeTrigger(class ItemStackBase& item, class DefinitionTrigger const& trigger, class RenderParams& params) const;

    MCAPI float getMovementModifier() const;

    MCAPI void init(struct ComponentItemDataAll_Latest&& data, class SemVersion const& engineVersion);

    MCAPI class Bedrock::PubSub::Connector<void(int&, class ItemStack&, class Actor&, class Mob&)>&
    onBeforeDurabilityDamage();

    MCAPI class Bedrock::PubSub::Connector<void(class ItemStack&, class Actor&, class Mob&)>& onHitActor();

    MCAPI class Bedrock::PubSub::Connector<
        void(class ItemStack&, class Block const&, class BlockPos const&, class Mob&)>&
    onHitBlock();

    MCAPI class Bedrock::PubSub::Connector<void(class ItemStack&, class Actor&, class Mob&)>& onHurtActor();

    MCAPI class Bedrock::PubSub::Connector<
        void(bool&, class ItemStack&, class Block const&, int, int, int, class Actor&)>&
    onMiningBlock();

    MCAPI class Bedrock::PubSub::Connector<void(bool&, class ItemStack&, class Player&)>& onUse();

    MCAPI class Bedrock::PubSub::Connector<
        void(bool&, class ItemStack const&, class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&)>&
    onUseOn();

    MCAPI class Bedrock::PubSub::Connector<
        void(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&)>&
    onUseTimeDepleted();

    MCAPI void setCanDestroyInCreative(bool canDestroyInCreative);

    MCAPI static void initializeJsonUpgrades(struct cereal::ReflectionCtx const& ctx);

    MCAPI static void registerItemComponentTypes(struct cereal::ReflectionCtx& ctx);

    MCAPI static std::pair<bool, class SemVersion> upgradeJson(
        struct cereal::ReflectionCtx const& ctx,
        std::string&                        document,
        class Core::Path const&             resourceName,
        std::optional<class SemVersion>     minVersion
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _initializeLoadedComponents(class SemVersion const& engineVersion);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addCerealItemsToMap();

    MCAPI std::unique_ptr<class CompoundTag> _buildItemPropertiesNetworkTag(struct cereal::ReflectionCtx const& ctx
    ) const;

    MCAPI void _loadComponentsFromNetworkTag(
        std::string const&                  componentName,
        class CompoundTag const&            componentTag,
        struct cereal::ReflectionCtx const& ctx
    );

    MCAPI void _loadItemPropertiesNetworkTag(class CompoundTag const& tag, struct cereal::ReflectionCtx const& ctx);

    MCAPI void _loadItemTagsNetworkTag(class ListTag const& listTag);

    MCAPI bool _validateSchemaAndInitItem(
        class Json::Value const&            itemData,
        class SemVersion const&             engineVersion,
        bool                                isBaseGamePack,
        bool                                isServer,
        class Experiments const&            experiments,
        struct cereal::ReflectionCtx const& ctx
    );

    MCAPI static void _moveDataToComponentItem(class ComponentItem& item, struct ComponentItemData_Legacy& data);

    MCAPI static class CerealDocumentUpgrader& getPropCerealDocumentUpgrader(struct cereal::ReflectionCtx const& ctx);

    MCAPI static void initEnTTMetaType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};
