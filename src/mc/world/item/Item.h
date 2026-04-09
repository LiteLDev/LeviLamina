#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/interactions/mining/MineBlockItemEffectType.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemCommandVisibility.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/ItemVersion.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class CameraItemComponentLegacy;
class CompoundTag;
class Container;
class FoodItemComponentLegacy;
class IDataInput;
class IDataOutput;
class IFoodItemComponent;
class ILevel;
class InteractionResult;
class ItemComponent;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class PackLoadContext;
class Player;
class ReadOnlyBinaryStream;
class RenderParams;
class SeedItemComponentLegacy;
class SemVersion;
class Vec3;
struct ActorDefinitionIdentifier;
struct Brightness;
struct CommandName;
struct ItemIconInfoFactory;
struct ItemTag;
struct ItemTintStrategy;
struct ItemUsedOnEventContext;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
namespace Json { class Value; }
namespace PuvLoadData { struct LoadResultWithTiming; }
namespace mce { class Color; }
// clang-format on

class Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemVersion>                                   mItemParseVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mTextureAtlasFile;
    ::ll::TypedStorage<4, 4, int>                                             mFrameCount;
    ::ll::TypedStorage<1, 1, bool>                                            mAnimatesInToolbar;
    ::ll::TypedStorage<1, 1, bool>                                            mIsMirroredArt;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::UseAnimation>             mUseAnim;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mHoverTextColorFormat;
    ::ll::TypedStorage<4, 4, int>                                             mIconFrame;
    ::ll::TypedStorage<4, 4, int>                                             mAtlasFrame;
    ::ll::TypedStorage<4, 4, int>                                             mAtlasTotalFrames;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mIconName;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mAtlasName;
    ::ll::TypedStorage<1, 1, uchar>                                           mMaxStackSize;
    ::ll::TypedStorage<2, 2, short>                                           mId;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mDescriptionId;
    ::ll::TypedStorage<8, 48, ::HashedString>                                 mRawNameId;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mNamespace;
    ::ll::TypedStorage<8, 48, ::HashedString>                                 mFullName;
    ::ll::TypedStorage<2, 2, short>                                           mMaxDamage;
    bool                                                                      mIsGlint              : 1;
    bool                                                                      mHandEquipped         : 1;
    bool                                                                      mIsStackedByData      : 1;
    bool                                                                      mRequiresWorldBuilder : 1;
    bool                                                                      mExplodable           : 1;
    bool                                                                      mFireResistant        : 1;
    bool                                                                      mShouldDespawn        : 1;
    bool                                                                      mAllowOffhand         : 1;
    bool                                                                      mIgnoresPermissions   : 1;
    ::ll::TypedStorage<4, 4, int>                                             mMaxUseDuration;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                              mMinRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const>>                    mBlockType;
    ::ll::TypedStorage<4, 4, ::CreativeItemCategory>                          mCreativeCategory;
    ::ll::TypedStorage<8, 8, ::Item*>                                         mCraftingRemainingItem;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mCreativeGroup;
    ::ll::TypedStorage<4, 4, float>                                           mFurnaceBurnIntervalModifier;
    ::ll::TypedStorage<4, 4, float>                                           mFurnaceXPmultiplier;
    ::ll::TypedStorage<1, 1, ::ItemCommandVisibility>                         mIsHiddenInCommands;
    ::ll::TypedStorage<4, 4, ::Rarity>                                        mBaseRarity;
    ::ll::TypedStorage<4, 4, ::Interactions::Mining::MineBlockItemEffectType> mMineBlockType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FoodItemComponentLegacy>>    mFoodComponentLegacy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SeedItemComponentLegacy>>    mSeedComponent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CameraItemComponentLegacy>>  mCameraComponentLegacy;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>>         mOnResetBAICallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemTag>>                       mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    Item();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Item();

    virtual ::PuvLoadData::LoadResultWithTiming
    initServer(::Json::Value const& data, ::SemVersion const& documentVersion, ::PackLoadContext& packLoadContext);

    virtual void tearDown();

    virtual ::Item& setDescriptionId(::std::string const& description);

    virtual ::std::string const& getDescriptionId() const;

    virtual int getMaxUseDuration(::ItemStack const* instance) const;

    virtual ::WeakPtr<::BlockType const> const& getBlockTypeForRendering() const;

    virtual bool isMusicDisk() const;

    virtual void executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const;

    virtual bool isComponentBased() const;

    virtual bool isHumanoidArmor() const;

    virtual bool isBlockPlanterItem() const;

    virtual bool isBucket() const;

    virtual bool isCandle() const;

    virtual bool isDamageable() const;

    virtual bool isDyeable() const;

    virtual bool isDye() const;

    virtual ::ItemColor getItemColor() const;

    virtual bool isFertilizer() const;

    virtual bool isFood() const;

    virtual bool isThrowable() const;

    virtual bool isUseable() const;

    virtual bool isTrimAllowed() const;

    virtual bool isBodyArmor() const;

    virtual ::ItemComponent* getComponent(::HashedString const& id) const;

    virtual ::IFoodItemComponent* getFood() const;

    virtual ::Item& setMaxDamage(int maxDamage);

    virtual ::Item& setMaxUseDuration(int maxUseDuration);

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

    virtual void initializeFromNetwork(::CompoundTag const& tag);

    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const& tag);

    virtual ::BlockShape getBlockShape() const;

    virtual bool canBeDepleted() const;

    virtual bool canDestroySpecial(::Block const& block) const;

    virtual int getLevelDataForAuxValue(int auxValue) const;

    virtual bool isStackedByData() const;

    virtual short getMaxDamage() const;

    virtual int getAttackDamage() const;

    virtual float getAttackDamageBonus(::Actor const& attacker) const;

    virtual bool isHandEquipped() const;

    virtual bool isGlint(::ItemStackBase const& stack) const;

    virtual bool isPattern() const;

    virtual int getPatternIndex() const;

    virtual ::Rarity getBaseRarity() const;

    virtual ::Rarity getRarity(::ItemStackBase const& stack) const;

    virtual uint getSwingDuration() const;

    virtual bool showsDurabilityInCreative() const;

    virtual bool isWearableThroughLootTable(::CompoundTag const* userData) const;

    virtual bool canDestroyInCreative() const;

    virtual bool isDestructive(int auxValue) const;

    virtual bool isLiquidClipItem() const;

    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const;

    virtual bool requiresInteract() const;

    virtual ::std::string getHoverTextColor(::ItemStackBase const& stack) const;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual int getArmorValue() const;

    virtual int getToughnessValue() const;

    virtual float getKnockbackResistanceValue() const;

    virtual ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackMissSound() const;

    virtual ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackHitSound() const;

    virtual ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackCriticalHitSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getBreakSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual bool isComplex() const;

    virtual bool isValidAuxValue(int auxValue) const;

    virtual int getDamageChance(int unbreaking) const;

    virtual float getViewDamping() const;

    virtual bool uniqueAuxValues() const;

    virtual bool isActorPlacerItem() const;

    virtual ::ItemTintStrategy getTintStrategy() const;

    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;

    virtual bool hasCustomColor(::ItemStackBase const& instance) const;

    virtual bool hasCustomColor(::CompoundTag const* userData) const;

    virtual void clearColor(::ItemStackBase& instance) const;

    virtual void setColor(::ItemStackBase& instance, ::mce::Color const& color) const;

    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const;

    virtual int buildIdAux(short auxValue, ::CompoundTag const* userData) const;

    virtual bool canUseOnSimTick() const;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const;

    virtual bool canUseAsAttack() const;

    virtual ::ItemStack& useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection) const;

    virtual ::Actor* createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    virtual void hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    virtual void hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const;

    virtual ::std::string buildDescriptionName(::ItemStackBase const& stack) const;

    virtual ::Bedrock::Safety::RedactableString const buildRedactedDescriptionName(::ItemStackBase const& stack) const;

    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    virtual ::Bedrock::Safety::RedactableString getRedactedCustomName(::ItemStackBase const& stack) const;

    virtual bool hasCustomHoverName(::ItemStackBase const& stack) const;

    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const;

    virtual void
    readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    virtual void writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;

    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;

    virtual void refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const;

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;

    virtual ::SharedTypes::ItemCooldownType getCooldownType() const;

    virtual void fixupCommon(::ItemStackBase& stack) const;

    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;

    virtual ::InHandUpdateType getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const         isMainHand,
        bool const         slotChanged
    ) const;

    virtual bool validFishInteraction(int) const;

    virtual void enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    virtual bool shouldEmitInUseGameEvents() const;

    virtual bool useInterruptedByAttacking() const;

    virtual bool hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;

    virtual ::PuvLoadData::LoadResultWithTiming
    initClient(::Json::Value const& data, ::SemVersion const&, ::PackLoadContext&, ::ItemIconInfoFactory iconFactory);

    virtual ::Item& setIconInfo(::std::string const& name, int index);

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    virtual ::std::string getInteractText(::Player const& player) const;

    virtual int
    getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const;

    virtual bool isEmissive(int auxValue) const;

    virtual ::Brightness getLightEmission(int data) const;

    virtual bool canBeCharged() const;

    virtual void playSoundIncrementally(::ItemStack const& item, ::Mob& mob) const;

    virtual float getFurnaceXPmultiplier(::ItemStackBase const& instance) const;

    virtual bool calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;

    virtual bool _calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    virtual bool _shouldAutoCalculatePlacePos() const;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Item(::std::string const& nameId, short id);

    MCAPI bool _dispenseHoneycombItem(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos) const;

    MCAPI void _helpChangeInventoryItemInPlace(
        ::Actor&                actor,
        ::ItemStack&            startingItem,
        ::ItemStack&            replacementItem,
        ::ItemAcquisitionMethod acquisitionMethod
    ) const;

    MCAPI ::CoordinatorResult _sendTryPlaceBlockEvent(
        ::Block const&       block,
        ::BlockSource const& region,
        ::Actor const&       actor,
        ::BlockPos const&    pos,
        uchar                face,
        ::Vec3 const&        clickPos
    ) const;

    MCAPI ::Item& addTag(::ItemTag const& tag);

    MCAPI ::Item& addTag(::HashedString const& tag);

    MCAPI ::Item& addTags(::std::initializer_list<::std::reference_wrapper<::ItemTag const>> tags);

    MCAPI ::std::string buildCategoryDescriptionName() const;

    MCAPI bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCAPI void clearTags();

    MCAPI ::std::vector<::CommandName> getCommandNames() const;

    MCAPI short getDamageValue(::CompoundTag const* userData) const;

    MCAPI ::std::string getSerializedName() const;

    MCAPI bool hasTag(::ItemTag const& tag) const;

    MCAPI bool hasTag(::HashedString const& tag) const;

    MCAPI bool isElytra() const;

    MCAPI bool operator==(::Item const& rhs) const;

    MCAPI ::Item& setAllowOffhand(bool offhand);

    MCAPI ::Item& setCreativeGroup(::std::string const& group);

    MCAPI ::Item& setFireResistant(bool resistant);

    MCAPI ::Item& setMinRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI ::Item& setShouldDespawn(bool despawn);

    MCAPI ::Item& setStackedByData(bool isStackedByData);

    MCAPI bool
    updateCustomBlockEntityTag(::BlockSource& region, ::ItemStackBase& instance, ::BlockPos const& pos) const;

    MCAPI ::InteractionResult useOn(
        ::ItemStack&             item,
        ::Actor&                 entity,
        int                      x,
        int                      y,
        int                      z,
        uchar                    face,
        ::Vec3 const&            clickPos,
        ::ItemUsedOnEventContext itemUsedOnEventContext
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isElytra(::ItemDescriptor const& itemDescriptor);

    MCAPI static bool isElytraBroken(int value);

    MCAPI static bool isSameTypeAndItem(::ItemStackBase const& firstItem, ::ItemStackBase const& secondItem);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& ICON_DESCRIPTION_PREFIX();

    MCAPI static ::std::string const& TAG_DAMAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, short id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::PuvLoadData::LoadResultWithTiming
    $initServer(::Json::Value const& data, ::SemVersion const& documentVersion, ::PackLoadContext& packLoadContext);

    MCFOLD void $tearDown();

    MCAPI ::Item& $setDescriptionId(::std::string const& description);

    MCAPI ::std::string const& $getDescriptionId() const;

    MCAPI int $getMaxUseDuration(::ItemStack const* instance) const;

    MCFOLD ::WeakPtr<::BlockType const> const& $getBlockTypeForRendering() const;

    MCFOLD bool $isMusicDisk() const;

    MCFOLD void $executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const;

    MCFOLD bool $isComponentBased() const;

    MCFOLD bool $isHumanoidArmor() const;

    MCFOLD bool $isBlockPlanterItem() const;

    MCFOLD bool $isBucket() const;

    MCFOLD bool $isCandle() const;

    MCAPI bool $isDamageable() const;

    MCFOLD bool $isDyeable() const;

    MCFOLD bool $isDye() const;

    MCFOLD ::ItemColor $getItemColor() const;

    MCFOLD bool $isFertilizer() const;

    MCFOLD bool $isFood() const;

    MCFOLD bool $isThrowable() const;

    MCFOLD bool $isUseable() const;

    MCFOLD bool $isTrimAllowed() const;

    MCFOLD bool $isBodyArmor() const;

    MCFOLD ::ItemComponent* $getComponent(::HashedString const& id) const;

    MCAPI ::IFoodItemComponent* $getFood() const;

    MCAPI ::Item& $setMaxDamage(int maxDamage);

    MCAPI ::Item& $setMaxUseDuration(int maxUseDuration);

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag);

    MCFOLD ::std::vector<::std::string> $validateFromNetwork(::CompoundTag const& tag);

    MCFOLD ::BlockShape $getBlockShape() const;

    MCAPI bool $canBeDepleted() const;

    MCFOLD bool $canDestroySpecial(::Block const& block) const;

    MCFOLD int $getLevelDataForAuxValue(int auxValue) const;

    MCAPI bool $isStackedByData() const;

    MCFOLD short $getMaxDamage() const;

    MCFOLD int $getAttackDamage() const;

    MCFOLD float $getAttackDamageBonus(::Actor const& attacker) const;

    MCAPI bool $isHandEquipped() const;

    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;

    MCFOLD bool $isPattern() const;

    MCFOLD int $getPatternIndex() const;

    MCAPI ::Rarity $getBaseRarity() const;

    MCAPI ::Rarity $getRarity(::ItemStackBase const& stack) const;

    MCFOLD uint $getSwingDuration() const;

    MCFOLD bool $showsDurabilityInCreative() const;

    MCFOLD bool $isWearableThroughLootTable(::CompoundTag const* userData) const;

    MCFOLD bool $canDestroyInCreative() const;

    MCFOLD bool $isDestructive(int auxValue) const;

    MCFOLD bool $isLiquidClipItem() const;

    MCFOLD bool $shouldInteractionWithBlockBypassLiquid(::Block const& block) const;

    MCFOLD bool $requiresInteract() const;

    MCAPI ::std::string $getHoverTextColor(::ItemStackBase const& stack) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    MCFOLD bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCFOLD int $getEnchantSlot() const;

    MCFOLD int $getEnchantValue() const;

    MCFOLD int $getArmorValue() const;

    MCFOLD int $getToughnessValue() const;

    MCFOLD float $getKnockbackResistanceValue() const;

    MCFOLD ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> $getAttackMissSound() const;

    MCFOLD ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> $getAttackHitSound() const;

    MCFOLD ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> $getAttackCriticalHitSound() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCFOLD bool $isComplex() const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;

    MCAPI int $getDamageChance(int unbreaking) const;

    MCFOLD float $getViewDamping() const;

    MCFOLD bool $uniqueAuxValues() const;

    MCFOLD bool $isActorPlacerItem() const;

    MCFOLD ::ItemTintStrategy $getTintStrategy() const;

    MCFOLD ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;

    MCFOLD bool $hasCustomColor(::ItemStackBase const& instance) const;

    MCFOLD bool $hasCustomColor(::CompoundTag const* userData) const;

    MCFOLD void $clearColor(::ItemStackBase& instance) const;

    MCFOLD void $setColor(::ItemStackBase& instance, ::mce::Color const& color) const;

    MCAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;

    MCAPI int $buildIdAux(short auxValue, ::CompoundTag const* userData) const;

    MCFOLD bool $canUseOnSimTick() const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD bool $canUseAsAttack() const;

    MCAPI ::ItemStack& $useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection) const;

    MCFOLD ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCFOLD void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCFOLD float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCFOLD void $hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCFOLD void $hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const;

    MCAPI ::std::string $buildDescriptionName(::ItemStackBase const& stack) const;

    MCAPI ::Bedrock::Safety::RedactableString const $buildRedactedDescriptionName(::ItemStackBase const& stack) const;

    MCFOLD ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI ::Bedrock::Safety::RedactableString $getRedactedCustomName(::ItemStackBase const& stack) const;

    MCAPI bool $hasCustomHoverName(::ItemStackBase const& stack) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const;

    MCAPI void
    $readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    MCAPI void $writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    MCFOLD uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCFOLD bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;

    MCFOLD void $refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const;

    MCAPI ::HashedString const& $getCooldownCategory() const;

    MCAPI int $getCooldownDuration() const;

    MCFOLD ::SharedTypes::ItemCooldownType $getCooldownType() const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;

    MCFOLD void $fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;

    MCAPI ::InHandUpdateType $getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const         isMainHand,
        bool const         slotChanged
    ) const;

    MCFOLD bool $validFishInteraction(int) const;

    MCFOLD void $enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const;

    MCFOLD ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCFOLD bool $shouldEmitInUseGameEvents() const;

    MCFOLD bool $useInterruptedByAttacking() const;

    MCFOLD bool $hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;

    MCAPI ::PuvLoadData::LoadResultWithTiming
    $initClient(::Json::Value const& data, ::SemVersion const&, ::PackLoadContext&, ::ItemIconInfoFactory iconFactory);

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;

    MCFOLD int
    $getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const;

    MCAPI bool $isEmissive(int auxValue) const;

    MCFOLD ::Brightness $getLightEmission(int data) const;

    MCFOLD bool $canBeCharged() const;

    MCFOLD void $playSoundIncrementally(::ItemStack const& item, ::Mob& mob) const;

    MCAPI float $getFurnaceXPmultiplier(::ItemStackBase const& instance) const;

    MCAPI bool $calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCFOLD bool
    $_checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;

    MCFOLD bool $_calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCFOLD bool $_shouldAutoCalculatePlacePos() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
