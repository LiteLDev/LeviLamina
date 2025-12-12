#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/interactions/mining/MineBlockItemEffectType.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemCommandVisibility.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/item/registry/ItemVersion.h"
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
class IPackLoadContext;
class InteractionResult;
class ItemComponent;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class ReadOnlyBinaryStream;
class RenderParams;
class SeedItemComponentLegacy;
class SemVersion;
class Vec3;
struct ActorDefinitionIdentifier;
struct Brightness;
struct CommandName;
struct ItemTag;
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
    initServer(::Json::Value const&, ::SemVersion const&, ::IPackLoadContext&, ::JsonBetaState const);

    virtual void tearDown();

    virtual ::Item& setDescriptionId(::std::string const& description);

    virtual ::std::string const& getDescriptionId() const;

    virtual int getMaxUseDuration(::ItemStack const*) const;

    virtual ::WeakPtr<::BlockType const> const& getBlockTypeForRendering() const;

    virtual bool isMusicDisk() const;

    virtual void executeEvent(::ItemStackBase&, ::std::string const&, ::RenderParams&) const;

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

    virtual ::ItemComponent* getComponent(::HashedString const&) const;

    virtual ::IFoodItemComponent* getFood() const;

    virtual ::Item& setMaxDamage(int maxDamage);

    virtual ::Item& setMaxUseDuration(int maxUseDuration);

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

    virtual void initializeFromNetwork(::CompoundTag const& tag);

    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const&);

    virtual ::BlockShape getBlockShape() const;

    virtual bool canBeDepleted() const;

    virtual bool canDestroySpecial(::Block const&) const;

    virtual int getLevelDataForAuxValue(int) const;

    virtual bool isStackedByData() const;

    virtual short getMaxDamage() const;

    virtual int getAttackDamage() const;

    virtual float getAttackDamageBonus(::Actor const&) const;

    virtual bool isHandEquipped() const;

    virtual bool isGlint(::ItemStackBase const& stack) const;

    virtual bool isPattern() const;

    virtual int getPatternIndex() const;

    virtual ::Rarity getBaseRarity() const;

    virtual ::Rarity getRarity(::ItemStackBase const& stack) const;

    virtual uint getSwingDuration() const;

    virtual bool showsDurabilityInCreative() const;

    virtual bool isWearableThroughLootTable(::CompoundTag const*) const;

    virtual bool canDestroyInCreative() const;

    virtual bool isDestructive(int) const;

    virtual bool isLiquidClipItem() const;

    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    virtual bool requiresInteract() const;

    virtual ::std::string getHoverTextColor(::ItemStackBase const& stack) const;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual int getArmorValue() const;

    virtual int getToughnessValue() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getBreakSound() const;

    virtual bool isComplex() const;

    virtual bool isValidAuxValue(int) const;

    virtual int getDamageChance(int unbreaking) const;

    virtual float getViewDamping() const;

    virtual bool uniqueAuxValues() const;

    virtual bool isActorPlacerItem() const;

    virtual bool isMultiColorTinted(::ItemStack const&) const;

    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    virtual bool hasCustomColor(::ItemStackBase const&) const;

    virtual bool hasCustomColor(::CompoundTag const*) const;

    virtual void clearColor(::ItemStackBase&) const;

    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;

    virtual ::mce::Color getBaseColor(::ItemStack const&) const;

    virtual ::mce::Color getSecondaryColor(::ItemStack const&) const;

    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const;

    virtual int buildIdAux(short auxValue, ::CompoundTag const*) const;

    virtual bool canUseOnSimTick() const;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const;

    virtual bool canUseAsAttack() const;

    virtual ::ItemStack& useAsAttack(::ItemStack& item, ::Player&) const;

    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    virtual void hitActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual void hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;

    virtual ::std::string buildDescriptionName(::ItemStackBase const& stack) const;

    virtual ::Bedrock::Safety::RedactableString const buildRedactedDescriptionName(::ItemStackBase const& stack) const;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool) const;

    virtual void
    readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    virtual void writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;

    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual void refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;

    virtual void fixupCommon(::ItemStackBase& stack) const;

    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel&) const;

    virtual ::InHandUpdateType getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const,
        bool const slotChanged
    ) const;

    virtual bool validFishInteraction(int) const;

    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual bool shouldEmitInUseGameEvents() const;

    virtual bool useInterruptedByAttacking() const;

    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;

    virtual ::PuvLoadData::LoadResultWithTiming
    initClient(::Json::Value const&, ::SemVersion const&, ::JsonBetaState const, ::IPackLoadContext&);

    virtual ::Item& setIconInfo(::std::string const& name, int index);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const;

    virtual ::std::string getInteractText(::Player const& player) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    virtual bool isEmissive(int auxValue) const;

    virtual ::Brightness getLightEmission(int) const;

    virtual bool canBeCharged() const;

    virtual void playSoundIncrementally(::ItemStack const&, ::Mob&) const;

    virtual float getFurnaceXPmultiplier(::ItemStackBase const&) const;

    virtual bool calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

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

    MCAPI ::Item& addTags(::std::initializer_list<::std::reference_wrapper<::ItemTag const>> tags);

    MCAPI ::std::string buildCategoryDescriptionName() const;

    MCAPI bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCAPI void clearTags();

    MCAPI ::std::vector<::CommandName> getCommandNames() const;

    MCAPI short getDamageValue(::CompoundTag const* userData) const;

    MCAPI ::std::string getSerializedName() const;

    MCAPI bool hasTag(::ItemTag const& tag) const;

    MCAPI bool isElytra() const;

    MCAPI bool operator==(::Item const& rhs) const;

    MCAPI ::Item& setAllowOffhand(bool offhand);

    MCAPI ::Item& setFireResistant(bool resistant);

    MCAPI ::Item& setIsGlint(bool glint);

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& ICON_DESCRIPTION_PREFIX();

    MCAPI static ::std::string const& TAG_DAMAGE();

    MCAPI static bool const& mGenerateDenyParticleEffect();
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
    MCFOLD void $tearDown();

    MCAPI ::Item& $setDescriptionId(::std::string const& description);

    MCFOLD ::std::string const& $getDescriptionId() const;

    MCAPI int $getMaxUseDuration(::ItemStack const*) const;

    MCFOLD ::WeakPtr<::BlockType const> const& $getBlockTypeForRendering() const;

    MCFOLD bool $isMusicDisk() const;

    MCFOLD void $executeEvent(::ItemStackBase&, ::std::string const&, ::RenderParams&) const;

    MCFOLD bool $isComponentBased() const;

    MCFOLD bool $isHumanoidArmor() const;

    MCFOLD bool $isBlockPlanterItem() const;

    MCFOLD bool $isBucket() const;

    MCFOLD bool $isCandle() const;

    MCAPI bool $isDamageable() const;

    MCFOLD bool $isDyeable() const;

    MCFOLD bool $isDye() const;

    MCFOLD bool $isFertilizer() const;

    MCFOLD bool $isFood() const;

    MCFOLD bool $isThrowable() const;

    MCFOLD bool $isUseable() const;

    MCFOLD bool $isTrimAllowed() const;

    MCFOLD ::ItemComponent* $getComponent(::HashedString const&) const;

    MCAPI ::IFoodItemComponent* $getFood() const;

    MCAPI ::Item& $setMaxDamage(int maxDamage);

    MCAPI ::Item& $setMaxUseDuration(int maxUseDuration);

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag);

    MCFOLD ::std::vector<::std::string> $validateFromNetwork(::CompoundTag const&);

#ifdef LL_PLAT_S
    MCFOLD ::BlockShape $getBlockShape() const;
#endif

    MCAPI bool $canBeDepleted() const;

    MCFOLD bool $canDestroySpecial(::Block const&) const;

    MCFOLD int $getLevelDataForAuxValue(int) const;

    MCAPI bool $isStackedByData() const;

    MCFOLD short $getMaxDamage() const;

    MCFOLD int $getAttackDamage() const;

    MCFOLD float $getAttackDamageBonus(::Actor const&) const;

    MCAPI bool $isHandEquipped() const;

    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;

    MCFOLD bool $isPattern() const;

    MCFOLD int $getPatternIndex() const;

    MCAPI ::Rarity $getBaseRarity() const;

    MCAPI ::Rarity $getRarity(::ItemStackBase const& stack) const;

    MCFOLD uint $getSwingDuration() const;

    MCFOLD bool $showsDurabilityInCreative() const;

    MCFOLD bool $isWearableThroughLootTable(::CompoundTag const*) const;

    MCFOLD bool $canDestroyInCreative() const;

    MCFOLD bool $isDestructive(int) const;

    MCFOLD bool $isLiquidClipItem() const;

    MCFOLD bool $shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    MCFOLD bool $requiresInteract() const;

    MCAPI ::std::string $getHoverTextColor(::ItemStackBase const& stack) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    MCFOLD bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCFOLD int $getEnchantSlot() const;

    MCFOLD int $getEnchantValue() const;

    MCFOLD int $getArmorValue() const;

    MCFOLD int $getToughnessValue() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;

    MCFOLD bool $isComplex() const;

    MCFOLD bool $isValidAuxValue(int) const;

    MCAPI int $getDamageChance(int unbreaking) const;

    MCFOLD float $getViewDamping() const;

    MCFOLD bool $uniqueAuxValues() const;

    MCFOLD bool $isActorPlacerItem() const;

    MCFOLD bool $isMultiColorTinted(::ItemStack const&) const;

    MCFOLD ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCFOLD bool $hasCustomColor(::ItemStackBase const&) const;

    MCFOLD bool $hasCustomColor(::CompoundTag const*) const;

    MCFOLD void $clearColor(::ItemStackBase&) const;

    MCFOLD void $setColor(::ItemStackBase&, ::mce::Color const&) const;

    MCFOLD ::mce::Color $getBaseColor(::ItemStack const&) const;

    MCFOLD ::mce::Color $getSecondaryColor(::ItemStack const&) const;

    MCAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;

    MCAPI int $buildIdAux(short auxValue, ::CompoundTag const*) const;

    MCFOLD bool $canUseOnSimTick() const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD bool $canUseAsAttack() const;

    MCFOLD ::ItemStack& $useAsAttack(::ItemStack& item, ::Player&) const;

    MCFOLD ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCFOLD void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCFOLD float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCFOLD void $hitActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCFOLD void $hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;

    MCAPI ::std::string $buildDescriptionName(::ItemStackBase const& stack) const;

    MCAPI ::Bedrock::Safety::RedactableString const $buildRedactedDescriptionName(::ItemStackBase const& stack) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool) const;

    MCAPI void
    $readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    MCAPI void $writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    MCFOLD uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCFOLD bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCFOLD void $refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    MCAPI ::HashedString const& $getCooldownCategory() const;

    MCAPI int $getCooldownDuration() const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;

    MCFOLD void $fixupCommon(::ItemStackBase& stack, ::ILevel&) const;

    MCAPI ::InHandUpdateType $getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const,
        bool const slotChanged
    ) const;

    MCFOLD bool $validFishInteraction(int) const;

    MCFOLD void $enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCFOLD bool $shouldEmitInUseGameEvents() const;

    MCFOLD bool $useInterruptedByAttacking() const;

    MCFOLD bool $hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;

    MCFOLD int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    MCAPI bool $isEmissive(int auxValue) const;

    MCFOLD ::Brightness $getLightEmission(int) const;

    MCFOLD bool $canBeCharged() const;

    MCFOLD void $playSoundIncrementally(::ItemStack const&, ::Mob&) const;

    MCAPI float $getFurnaceXPmultiplier(::ItemStackBase const&) const;

    MCAPI bool $calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCFOLD bool
    $_checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;

    MCFOLD bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCFOLD bool $_shouldAutoCalculatePlacePos() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
