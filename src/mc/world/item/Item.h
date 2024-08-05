#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/deps/puv/UseAnimation.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/CreativeItemCategory.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/events/NotifyItemUsedOnEvent.h"
#include "mc/world/item/components/ItemAcquisitionMethod.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"
#include "mc/world/level/block/utils/MineBlockItemEffectType.h"

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
        MCAPI ScopedCreativeGroup(std::string const& groupName, class ItemInstance const& iconInstance);

        MCAPI
        ScopedCreativeGroup(std::string const& groupName, class Block const* block, class CompoundTag const* userData);

        MCAPI
        ScopedCreativeGroup(std::string const& groupName, short id, short auxValue, class CompoundTag const* userData);

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
        MCAPI Tier(int level, int uses, float speed, int damage, int enchant);

        MCAPI int getAttackDamageBonus() const;

        MCAPI int getEnchantmentValue() const;

        MCAPI int getLevel() const;

        MCAPI float getSpeed() const;

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
    // vIndex: 0
    virtual ~Item();

    // vIndex: 1
    virtual bool initServer(class Json::Value const&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 2
    virtual void tearDown();

    // vIndex: 3
    virtual class Item& setDescriptionId(std::string const& description);

    // vIndex: 4
    virtual std::string const& getDescriptionId() const;

    // vIndex: 5
    virtual int getMaxUseDuration(class ItemStack const* instance) const;

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

    // vIndex: 11
    virtual bool isBucket() const;

    // vIndex: 12
    virtual bool isCandle() const;

    // vIndex: 13
    virtual bool isDamageable() const;

    // vIndex: 14
    virtual bool isDyeable() const;

    // vIndex: 15
    virtual bool isDye() const;

    // vIndex: 16
    virtual ::ItemColor getItemColor() const;

    // vIndex: 17
    virtual bool isFertilizer() const;

    // vIndex: 18
    virtual bool isFood() const;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 20
    virtual bool isUseable() const;

    // vIndex: 21
    virtual bool isTrimAllowed() const;

    // vIndex: 22
    virtual class ItemComponent* getComponent(class HashedString const&) const;

    // vIndex: 23
    virtual class IFoodItemComponent* getFood() const;

    // vIndex: 24
    virtual class Item& setMaxDamage(int maxDamage);

    // vIndex: 25
    virtual class Item& setMaxUseDuration(int maxUseDuration);

    // vIndex: 26
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 27
    virtual void initializeFromNetwork(class CompoundTag const& tag);

    // vIndex: 28
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const&);

    // vIndex: 29
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 30
    virtual bool canBeDepleted() const;

    // vIndex: 31
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 33
    virtual bool isStackedByData() const;

    // vIndex: 34
    virtual short getMaxDamage() const;

    // vIndex: 35
    virtual int getAttackDamage() const;

    // vIndex: 36
    virtual float getAttackDamageBonus(class Actor const&, float) const;

    // vIndex: 37
    virtual bool isHandEquipped() const;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 39
    virtual bool isPattern() const;

    // vIndex: 40
    virtual int getPatternIndex() const;

    // vIndex: 41
    virtual bool showsDurabilityInCreative() const;

    // vIndex: 42
    virtual bool isWearableThroughLootTable(class CompoundTag const* userData) const;

    // vIndex: 43
    virtual bool canDestroyInCreative() const;

    // vIndex: 44
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 45
    virtual bool isLiquidClipItem() const;

    // vIndex: 46
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const& block) const;

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

    // vIndex: 53
    virtual int getToughnessValue() const;

    // vIndex: 54
    virtual ::Puv::Legacy::LevelSoundEvent getBreakSound() const;

    // vIndex: 55
    virtual bool isComplex() const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 57
    virtual int getDamageChance(int unbreaking) const;

    // vIndex: 58
    virtual float getViewDamping() const;

    // vIndex: 59
    virtual bool uniqueAuxValues() const;

    // vIndex: 60
    virtual bool isActorPlacerItem() const;

    // vIndex: 61
    virtual bool isMultiColorTinted(class ItemStack const& instance) const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    // vIndex: 63
    virtual bool hasCustomColor(class ItemStackBase const& instance) const;

    // vIndex: 64
    virtual bool hasCustomColor(class CompoundTag const* userData) const;

    // vIndex: 65
    virtual void clearColor(class ItemStackBase& instance) const;

    // vIndex: 66
    virtual void setColor(class ItemStackBase& instance, class mce::Color const& color) const;

    // vIndex: 67
    virtual class mce::Color getBaseColor(class ItemStack const& instance) const;

    // vIndex: 68
    virtual class mce::Color getSecondaryColor(class ItemStack const& instance) const;

    // vIndex: 69
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const;

    // vIndex: 70
    virtual int buildIdAux(short auxValue, class CompoundTag const*) const;

    // vIndex: 71
    virtual bool canUseOnSimTick() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73
    virtual class Actor*
    createProjectileActor(class BlockSource&, class ItemStack const&, class Vec3 const&, class Vec3 const&) const;

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
    hitBlock(class ItemStack& instance, class Block const& block, class BlockPos const& blockPos, class Mob& attacker)
        const;

    // vIndex: 81
    virtual bool
    mineBlock(class ItemStack& instance, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 82
    virtual std::string buildDescriptionName(class ItemStackBase const&) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 84
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 85
    virtual void
    readUserData(class ItemStackBase& stack, class IDataInput& input, class ReadOnlyBinaryStream& underlyingStream)
        const;

    // vIndex: 86
    virtual void writeUserData(class ItemStackBase const& stack, class IDataOutput& output) const;

    // vIndex: 87
    virtual uchar getMaxStackSize(class ItemDescriptor const& item) const;

    // vIndex: 88
    virtual bool
    inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 89
    virtual void refreshedInContainer(class ItemStackBase const& stack, class Level& level) const;

    // vIndex: 90
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 91
    virtual int getCooldownTime() const;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // vIndex: 93
    virtual void fixupCommon(class ItemStackBase& stack, class Level& level) const;

    // vIndex: 94
    virtual ::InHandUpdateType getInHandUpdateType(
        class Player const&,
        class ItemStack const& oldItem,
        class ItemStack const& newItem,
        bool,
        bool slotChanged
    ) const;

    // vIndex: 95
    virtual bool validFishInteraction(int auxValue) const;

    // vIndex: 96
    virtual void enchantProjectile(class ItemStackBase const&, class Actor& projectile) const;

    // vIndex: 97
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 99
    virtual bool shouldSendInteractionGameEvents() const;

    // vIndex: 100
    virtual bool useInterruptedByAttacking() const;

    // vIndex: 101
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const;

    // vIndex: 102
    virtual void initClient(class Json::Value const&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int index);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 105
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 106
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // vIndex: 107
    virtual bool isEmissive(int auxValue) const;

    // vIndex: 108
    virtual struct Brightness getLightEmission(int auxValue) const;

    // vIndex: 109
    virtual int getIconYOffset() const;

    // vIndex: 110
    virtual bool canBeCharged() const;

    // vIndex: 111
    virtual void playSoundIncrementally(class ItemStack const& item, class Mob& mob) const;

    // vIndex: 112
    virtual float getFurnaceXPmultiplier(class ItemStackBase const& instance) const;

    // vIndex: 113
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 114
    virtual bool
    calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

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

    MCAPI Item(std::string const& nameId, short id);

    MCAPI void addOnResetBAIcallback(std::function<void()> const& callback);

    MCAPI class Item& addTag(class HashedString const& tag);

    MCAPI class Item& addTag(struct ItemTag const& tag);

    MCAPI class Item& addTags(std::initializer_list<std::reference_wrapper<struct ItemTag const>> tags);

    MCAPI bool allowOffhand() const;

    MCAPI std::string buildCategoryDescriptionName() const;

    MCAPI class ItemDescriptor buildDescriptor(short auxValue, class CompoundTag const*) const;

    MCAPI bool canBeUsedInCommands(class BaseGameVersion const&) const;

    MCAPI float destroySpeedBonus(class ItemStackBase const& inst) const;

    MCAPI void fixupOnLoad(class ItemStackBase& stack) const;

    MCAPI void fixupOnLoad(class ItemStackBase& stack, class Level& level) const;

    MCAPI class ICameraItemComponent* getCamera() const;

    MCAPI std::vector<struct CommandName> getCommandNames() const;

    MCAPI ::CreativeItemCategory getCreativeCategory() const;

    MCAPI std::string const& getCreativeGroup() const;

    MCAPI short getDamageValue(class CompoundTag const* userData) const;

    MCAPI int getFrameCount() const;

    MCAPI std::string const& getFullItemName() const;

    MCAPI class HashedString const& getFullNameHash() const;

    MCAPI float getFurnaceBurnIntervalMultipler() const;

    MCAPI short getId() const;

    MCAPI class WeakPtr<class BlockLegacy const> const& getLegacyBlock() const;

    MCAPI ::Interactions::Mining::MineBlockItemEffectType getMineBlockType() const;

    MCAPI std::string const& getNamespace() const;

    MCAPI class HashedString const& getRawNameHash() const;

    MCAPI std::string const& getRawNameId() const;

    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCAPI std::string getSerializedName() const;

    MCAPI ::Puv::Legacy::UseAnimation getUseAnimation() const;

    MCAPI bool hasDamageValue(class CompoundTag const* userData) const;

    MCAPI bool hasTag(class HashedString const& tag) const;

    MCAPI bool hasTag(struct ItemTag const& tag) const;

    MCAPI bool hasTag(uint64 const& tag) const;

    MCAPI bool isCommandOnly(class BaseGameVersion const& baseGameVersion) const;

    MCAPI bool isElytra() const;

    MCAPI bool isExplodable() const;

    MCAPI bool isFireResistant() const;

    MCAPI bool isNameTag() const;

    MCAPI bool isSeed() const;

    MCAPI bool operator==(class Item const& rhs) const;

    MCAPI void removeDamageValue(class ItemStackBase& stack) const;

    MCAPI class Item& setAllowOffhand(bool offhand);

    MCAPI class Item& setCategory(::CreativeItemCategory creativeCategory);

    MCAPI class Item& setCreativeGroup(std::string const& group);

    MCAPI void setDamageValue(class ItemStackBase& stack, short newDamage) const;

    MCAPI class Item& setExplodable(bool boom);

    MCAPI class Item& setFireResistant(bool);

    MCAPI class Item& setFurnaceBurnIntervalMultiplier(float multiplier);

    MCAPI class Item& setFurnaceXPmultiplier(float multiplier);

    MCAPI class Item& setHandEquipped();

    MCAPI void setHoverTextColorFormat(std::string_view const&);

    MCAPI class Item& setIsGlint(bool glint);

    MCAPI class Item& setIsMirroredArt(bool val);

    MCAPI class Item& setMaxStackSize(uchar max);

    MCAPI class Item& setMinRequiredBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    MCAPI class Item& setRequiresWorldBuilder(bool value);

    MCAPI class Item& setShouldDespawn(bool despawn);

    MCAPI class Item& setStackedByData(bool isStackedByData);

    MCAPI class Item& setUseAnimation(::Puv::Legacy::UseAnimation);

    MCAPI bool shouldDespawn() const;

    MCAPI bool
    updateCustomBlockEntityTag(class BlockSource& region, class ItemStackBase& instance, class BlockPos const& pos)
        const;

    MCAPI class InteractionResult
    useOn(class ItemStack&, class Actor&, int, int, int, uchar, class Vec3 const&, ::NotifyItemUsedOnEvent) const;

    MCAPI static void addCreativeItem(class ItemRegistryRef, class Block const& block);

    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemInstance const& itemInstance);

    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemStack const& itemInstance);

    MCAPI static void
    addLooseCreativeItems(bool isClient, class BaseGameVersion const& worldVersion, class ItemRegistryRef);

    MCAPI static void endCreativeItemDefinitions(bool isClient);

    MCAPI static bool isElytraBroken(int value);

    MCAPI static bool isFlyEnabled(class ItemInstance const& item);

    MCAPI static bool isSameTypeAndItem(class ItemStackBase const&, class ItemStackBase const&);

    MCAPI static void startCreativeItemDefinitions(bool isClient, class CreativeItemRegistry* creativeItemRegistry);

    MCAPI static struct NewBlockID toBlockId(short itemId);

    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;

    MCAPI static std::string const TAG_DAMAGE;

    MCAPI static class CreativeGroupInfo* mActiveCreativeGroupInfo;

    MCAPI static class CreativeItemGroupCategory* mActiveCreativeItemCategory;

    MCAPI static class CreativeItemRegistry* mActiveCreativeItemRegistry;

    MCAPI static bool const mGenerateDenyParticleEffect;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _helpChangeInventoryItemInPlace(
        class Actor&            actor,
        class ItemStack&        startingItem,
        class ItemStack&        replacementItem,
        ::ItemAcquisitionMethod acquisitionMethod
    ) const;

    MCAPI ::CoordinatorResult
    _sendTryPlaceBlockEvent(class Block const&, class BlockSource const&, class Actor const&, class BlockPos const&, uchar, class Vec3 const&)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _dispenseHoneycombItem(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos)
        const;

    MCAPI static void _addLooseCreativeItemsClient();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<std::set<short>> mServerItemsUsedInCreativeItems;

    // NOLINTEND
};
