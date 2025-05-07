#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/resources/JsonBetaState.h"
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
class BlockLegacy;
class BlockPos;
class BlockSource;
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
namespace mce { class Color; }
// clang-format on

class Item {
public:
    // Item inner types declare
    // clang-format off
    class Tier;
    // clang-format on

    // Item inner types define
    class Tier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkcc2282;
        ::ll::UntypedStorage<4, 4> mUnkf670ea;
        ::ll::UntypedStorage<4, 4> mUnka0dc00;
        ::ll::UntypedStorage<4, 4> mUnk40d030;
        ::ll::UntypedStorage<4, 4> mUnkf2c71b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Tier& operator=(Tier const&);
        Tier(Tier const&);
        Tier();
    };

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
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockLegacy const>>                  mLegacyBlock;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>>         mOnResetBAIcallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemTag>>                       mTags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Item();

    // vIndex: 1
    virtual bool initServer(::Json::Value const&, ::SemVersion const&, ::IPackLoadContext&, ::JsonBetaState const);

    // vIndex: 2
    virtual void tearDown();

    // vIndex: 3
    virtual ::Item& setDescriptionId(::std::string const& description);

    // vIndex: 4
    virtual ::std::string const& getDescriptionId() const;

    // vIndex: 5
    virtual int getMaxUseDuration(::ItemStack const*) const;

    // vIndex: 6
    virtual ::WeakPtr<::BlockLegacy const> const& getLegacyBlockForRendering() const;

    // vIndex: 7
    virtual bool isMusicDisk() const;

    // vIndex: 8
    virtual void executeEvent(::ItemStackBase&, ::std::string const&, ::RenderParams&) const;

    // vIndex: 9
    virtual bool isComponentBased() const;

    // vIndex: 10
    virtual bool isHumanoidArmor() const;

    // vIndex: 11
    virtual bool isBlockPlanterItem() const;

    // vIndex: 12
    virtual bool isBucket() const;

    // vIndex: 13
    virtual bool isCandle() const;

    // vIndex: 14
    virtual bool isDamageable() const;

    // vIndex: 15
    virtual bool isDyeable() const;

    // vIndex: 16
    virtual bool isDye() const;

    // vIndex: 17
    virtual ::ItemColor getItemColor() const;

    // vIndex: 18
    virtual bool isFertilizer() const;

    // vIndex: 19
    virtual bool isFood() const;

    // vIndex: 20
    virtual bool isThrowable() const;

    // vIndex: 21
    virtual bool isUseable() const;

    // vIndex: 22
    virtual bool isTrimAllowed() const;

    // vIndex: 23
    virtual ::ItemComponent* getComponent(::HashedString const&) const;

    // vIndex: 24
    virtual ::IFoodItemComponent* getFood() const;

    // vIndex: 25
    virtual ::Item& setMaxDamage(int maxDamage);

    // vIndex: 26
    virtual ::Item& setMaxUseDuration(int maxUseDuration);

    // vIndex: 27
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

    // vIndex: 28
    virtual void initializeFromNetwork(::CompoundTag const& tag);

    // vIndex: 29
    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const&);

    // vIndex: 30
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 31
    virtual bool canBeDepleted() const;

    // vIndex: 32
    virtual bool canDestroySpecial(::Block const&) const;

    // vIndex: 33
    virtual int getLevelDataForAuxValue(int) const;

    // vIndex: 34
    virtual bool isStackedByData() const;

    // vIndex: 35
    virtual short getMaxDamage() const;

    // vIndex: 36
    virtual int getAttackDamage() const;

    // vIndex: 37
    virtual float getAttackDamageBonus(::Actor const&, float) const;

    // vIndex: 38
    virtual bool isHandEquipped() const;

    // vIndex: 39
    virtual bool isGlint(::ItemStackBase const& stack) const;

    // vIndex: 40
    virtual bool isPattern() const;

    // vIndex: 41
    virtual int getPatternIndex() const;

    // vIndex: 42
    virtual ::Rarity getBaseRarity() const;

    // vIndex: 43
    virtual ::Rarity getRarity(::ItemStackBase const& stack) const;

    // vIndex: 44
    virtual bool showsDurabilityInCreative() const;

    // vIndex: 45
    virtual bool isWearableThroughLootTable(::CompoundTag const*) const;

    // vIndex: 46
    virtual bool canDestroyInCreative() const;

    // vIndex: 47
    virtual bool isDestructive(int) const;

    // vIndex: 48
    virtual bool isLiquidClipItem() const;

    // vIndex: 49
    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    // vIndex: 50
    virtual bool requiresInteract() const;

    // vIndex: 51
    virtual ::std::string getHoverTextColor(::ItemStackBase const& stack) const;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    // vIndex: 53
    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    // vIndex: 54
    virtual int getEnchantSlot() const;

    // vIndex: 55
    virtual int getEnchantValue() const;

    // vIndex: 56
    virtual int getArmorValue() const;

    // vIndex: 57
    virtual int getToughnessValue() const;

    // vIndex: 58
    virtual ::SharedTypes::Legacy::LevelSoundEvent getBreakSound() const;

    // vIndex: 59
    virtual bool isComplex() const;

    // vIndex: 60
    virtual bool isValidAuxValue(int) const;

    // vIndex: 61
    virtual int getDamageChance(int unbreaking) const;

    // vIndex: 62
    virtual float getViewDamping() const;

    // vIndex: 63
    virtual bool uniqueAuxValues() const;

    // vIndex: 64
    virtual bool isActorPlacerItem() const;

    // vIndex: 65
    virtual bool isMultiColorTinted(::ItemStack const&) const;

    // vIndex: 66
    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    // vIndex: 68
    virtual bool hasCustomColor(::ItemStackBase const&) const;

    // vIndex: 67
    virtual bool hasCustomColor(::CompoundTag const*) const;

    // vIndex: 69
    virtual void clearColor(::ItemStackBase&) const;

    // vIndex: 70
    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;

    // vIndex: 71
    virtual ::mce::Color getBaseColor(::ItemStack const&) const;

    // vIndex: 72
    virtual ::mce::Color getSecondaryColor(::ItemStack const&) const;

    // vIndex: 73
    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const;

    // vIndex: 74
    virtual int buildIdAux(short auxValue, ::CompoundTag const*) const;

    // vIndex: 75
    virtual bool canUseOnSimTick() const;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const;

    // vIndex: 77
    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    // vIndex: 80
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    // vIndex: 81
    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    // vIndex: 82
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    // vIndex: 83
    virtual void hitActor(::ItemStack&, ::Actor&, ::Mob&) const;

    // vIndex: 84
    virtual void hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;

    // vIndex: 85
    virtual ::std::string buildDescriptionName(::ItemStackBase const& stack) const;

    // vIndex: 86
    virtual ::Bedrock::Safety::RedactableString const buildRedactedDescriptionName(::ItemStackBase const& stack) const;

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    // vIndex: 88
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack) const;

    // vIndex: 89
    virtual void
    readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    // vIndex: 90
    virtual void writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    // vIndex: 91
    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;

    // vIndex: 92
    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    // vIndex: 93
    virtual void refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    // vIndex: 94
    virtual ::HashedString const& getCooldownType() const;

    // vIndex: 95
    virtual int getCooldownTime() const;

    // vIndex: 97
    virtual void fixupCommon(::ItemStackBase& stack) const;

    // vIndex: 96
    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel&) const;

    // vIndex: 98
    virtual ::InHandUpdateType getInHandUpdateType(
        ::Player const&,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const,
        bool const slotChanged
    ) const;

    // vIndex: 99
    virtual bool validFishInteraction(int) const;

    // vIndex: 100
    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    // vIndex: 101
    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    // vIndex: 102
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 103
    virtual bool shouldSendInteractionGameEvents() const;

    // vIndex: 104
    virtual bool useInterruptedByAttacking() const;

    // vIndex: 105
    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;

    // vIndex: 106
    virtual void initClient(::Json::Value const&, ::SemVersion const&, ::JsonBetaState const, ::IPackLoadContext&);

    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index);

    // vIndex: 108
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const;

    // vIndex: 109
    virtual ::std::string getInteractText(::Player const& player) const;

    // vIndex: 110
    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    // vIndex: 111
    virtual bool isEmissive(int auxValue) const;

    // vIndex: 112
    virtual ::Brightness getLightEmission(int) const;

    // vIndex: 113
    virtual bool canBeCharged() const;

    // vIndex: 114
    virtual void playSoundIncrementally(::ItemStack const&, ::Mob&) const;

    // vIndex: 115
    virtual float getFurnaceXPmultiplier(::ItemStackBase const&) const;

    // vIndex: 116
    virtual bool calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    // vIndex: 117
    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;

    // vIndex: 118
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    // vIndex: 119
    virtual bool _shouldAutoCalculatePlacePos() const;

    // vIndex: 120
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

    MCAPI ::Item& addTag(::HashedString const& tag);

    MCAPI ::Item& addTag(::ItemTag const& tag);

    MCAPI ::Item& addTags(::std::initializer_list<::std::reference_wrapper<::ItemTag const>> tags);

    MCAPI ::std::string buildCategoryDescriptionName() const;

    MCAPI bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCAPI void clearTags();

    MCAPI ::std::vector<::CommandName> getCommandNames() const;

    MCAPI ::std::string getSerializedName() const;

    MCAPI bool hasTag(::HashedString const& tag) const;

    MCAPI bool isCommandOnly(::BaseGameVersion const& baseGameVersion) const;

    MCAPI bool isElytra() const;

    MCAPI bool operator==(::Item const& rhs) const;

    MCAPI void removeDamageValue(::ItemStackBase& stack) const;

    MCAPI ::Item& setAllowOffhand(bool offhand);

    MCAPI ::Item& setCreativeGroup(::std::string const& group);

    MCAPI void setDamageValue(::ItemStackBase& stack, short newDamage) const;

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

    MCAPI static bool isSameTypeAndItem(::ItemStackBase const& firstItem, ::ItemStackBase const& secondItem);
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

    MCFOLD ::WeakPtr<::BlockLegacy const> const& $getLegacyBlockForRendering() const;

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

    MCFOLD ::IFoodItemComponent* $getFood() const;

    MCAPI ::Item& $setMaxDamage(int maxDamage);

    MCAPI ::Item& $setMaxUseDuration(int maxUseDuration);

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag);

    MCFOLD ::std::vector<::std::string> $validateFromNetwork(::CompoundTag const&);

    MCAPI bool $canBeDepleted() const;

    MCFOLD bool $canDestroySpecial(::Block const&) const;

    MCFOLD int $getLevelDataForAuxValue(int) const;

    MCAPI bool $isStackedByData() const;

    MCFOLD short $getMaxDamage() const;

    MCFOLD int $getAttackDamage() const;

    MCFOLD float $getAttackDamageBonus(::Actor const&, float) const;

    MCAPI bool $isHandEquipped() const;

    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;

    MCFOLD bool $isPattern() const;

    MCFOLD int $getPatternIndex() const;

    MCAPI ::Rarity $getBaseRarity() const;

    MCAPI ::Rarity $getRarity(::ItemStackBase const& stack) const;

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

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack) const;

    MCAPI void
    $readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    MCAPI void $writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    MCFOLD uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCFOLD bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCFOLD void $refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    MCAPI ::HashedString const& $getCooldownType() const;

    MCAPI int $getCooldownTime() const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;

    MCFOLD void $fixupCommon(::ItemStackBase& stack, ::ILevel&) const;

    MCAPI ::InHandUpdateType $getInHandUpdateType(
        ::Player const&,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const,
        bool const slotChanged
    ) const;

    MCFOLD bool $validFishInteraction(int) const;

    MCFOLD void $enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCFOLD bool $shouldSendInteractionGameEvents() const;

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
