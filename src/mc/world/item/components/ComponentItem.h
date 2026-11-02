#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/item/EnchantSlot.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemTransformType.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class CompoundTag;
class Container;
class Experiments;
class IFoodItemComponent;
class IconItemComponent;
class InteractionResult;
class ItemComponent;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Matrix;
class Mob;
class Player;
class SemVersion;
class Vec3;
struct ItemIconInfo;
struct LegacyEventItemComponentData;
struct ResolvedItemIconInfo;
struct SoundEventIdentifier;
namespace Bedrock::Safety { class RedactableString; }
namespace SharedTypes::v1_26_50 { struct ItemDocument; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ComponentItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    bool                                                    mExcludeUserDataDiffCheck : 1;
    bool                                                    mCanDestroyInCreative     : 1;
    bool                                                    mRequiresInteract         : 1;
    bool                                                    mIsLiquidClipped          : 1;
    ::ll::TypedStorage<4, 4, float>                         mSpeed;
    ::ll::TypedStorage<4, 4, int>                           mDamage;
    ::ll::TypedStorage<4, 4, ::SharedTypes::EnchantSlot>    mEnchantSlot;
    ::ll::TypedStorage<4, 4, int>                           mEnchantValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mAlias;
    ::ll::TypedStorage<1, 1, bool>                          mIsAttachable;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::std::shared_ptr<::ItemComponent>>> mItemComponents;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IconItemComponent>>                         mIcon;
    ::ll::TypedStorage<8, 8, ::BlockType const*>                                              mBlockTypeForRendering;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::shared_ptr<::ItemComponent>>>
                                                                                            mRegisteredCerealComponents;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCtx;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComponentItem() /*override*/;

    virtual void initServer(
        ::SharedTypes::v1_26_50::ItemDocument&&         data,
        ::SemVersion const&                             documentVersion,
        ::Experiments const&                            experiments,
        ::std::optional<::LegacyEventItemComponentData> legacyEventData
    ) /*override*/;

    virtual void tearDown() /*override*/;

    virtual bool isComponentBased() const /*override*/;

    virtual bool isHumanoidArmor() const /*override*/;

    virtual bool isBlockPlanterItem() const /*override*/;

    virtual bool isDamageable() const /*override*/;

    virtual bool isDyeable() const /*override*/;

    virtual bool isFood() const /*override*/;

    virtual bool isThrowable() const /*override*/;

    virtual bool isUseable() const /*override*/;

    virtual bool isMusicDisk() const /*override*/;

    virtual bool isTrimAllowed() const /*override*/;

    virtual ::BlockType const* getBlockTypeForRendering() const /*override*/;

    virtual ::ItemComponent* getComponent(::HashedString const& id) const /*override*/;

    virtual ::IFoodItemComponent* getFood() const /*override*/;

    virtual ::Item& setMaxDamage(int maxDamage) /*override*/;

    virtual ::std::string const& getDescriptionId() const /*override*/;

    virtual ::BlockShape getBlockShape() const /*override*/;

    virtual bool canBeDepleted() const /*override*/;

    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    virtual int getLevelDataForAuxValue(int) const /*override*/;

    virtual short getMaxDamage() const /*override*/;

    virtual int getAttackDamage() const /*override*/;

    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;

    virtual bool canDestroyInCreative() const /*override*/;

    virtual bool isDestructive(int) const /*override*/;

    virtual bool isLiquidClipItem() const /*override*/;

    virtual bool requiresInteract() const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual bool
    isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const
        /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual int getEnchantValue() const /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual int getDamageChance(int unbreaking) const /*override*/;

    virtual uint getSwingDuration() const /*override*/;

    virtual bool shouldEmitInUseGameEvents() const /*override*/;

    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const /*override*/;

    virtual bool hasCustomColor(::ItemStackBase const& instance) const /*override*/;

    virtual void clearColor(::ItemStackBase& instance) const /*override*/;

    virtual void setColor(::ItemStackBase& instance, ::mce::Color const& color) const /*override*/;

    virtual ::std::optional<::SoundEventIdentifier> getAttackMissSound() const /*override*/;

    virtual ::std::optional<::SoundEventIdentifier> getAttackHitSound() const /*override*/;

    virtual ::std::optional<::SoundEventIdentifier> getAttackCriticalHitSound() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual bool canUseAsAttack() const /*override*/;

    virtual ::ItemStack&
    useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection, ::HandSlot handSlot) const
        /*override*/;

    virtual ::Actor* createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual void hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual void hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const
        /*override*/;

    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const
        /*override*/;

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const /*override*/;

    virtual ::HashedString const& getCooldownCategory() const /*override*/;

    virtual int getCooldownDuration() const /*override*/;

    virtual ::SharedTypes::ItemCooldownType getCooldownType() const /*override*/;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const /*override*/;

    virtual bool useVariant(int, int, bool) const;

    virtual int getVariant(int, int, bool) const;

    virtual ::Matrix getItemTransform(::ItemTransformType type, float normalizedUnitScale) const /*override*/;

    virtual void initClient(
        ::SharedTypes::v1_26_50::ItemDocument&& data,
        ::SemVersion const&                     documentVersion,
        ::Experiments const&                    experiments,
        ::std::optional<::ItemIconInfo> (*)(::std::string const&, int)
    ) /*override*/;

    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const /*override*/;

    virtual bool isEmissive(int auxValue) const /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int frame) /*override*/;

    virtual bool canBeCharged() const /*override*/;

    virtual ::ComponentItem& setDescriptionId(::std::string const& descriptionId) /*override*/;

    virtual bool shouldUseJsonForRenderMatrix() const;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag) /*override*/;

    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const& tag) /*override*/;

    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const
        /*override*/;

    virtual bool
    _calculatePlacePos(::ItemStackBase const& instance, ::Actor const& entity, uchar& face, ::BlockPos& pos) const
        /*override*/;

    virtual bool _shouldAutoCalculatePlacePos() const /*override*/;

    virtual ::InteractionResult _useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItem(::std::string const& nameId, short id, ::cereal::ReflectionCtx const& ctx);

    MCNAPI void _initializeLoadedComponents(
        ::std::optional<::SemVersion>  documentVersion,
        ::std::optional<::Experiments> _experiments
    );

    MCNAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI float getMovementModifier() const;

    MCNAPI void init(
        ::SharedTypes::v1_26_50::ItemDocument&&         data,
        ::SemVersion const&                             documentVersion,
        ::std::optional<::LegacyEventItemComponentData> legacyEventData,
        ::Experiments const&                            experiments
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void registerItemComponentTypes(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::std::tuple<
        ::SemVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>,
        bool>
    upgradeJson(
        ::cereal::ReflectionCtx const& ctx,
        ::std::string_view             document,
        bool                           betaApis,
        ::std::optional<::SemVersion>  minVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, short id, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initServer(
        ::SharedTypes::v1_26_50::ItemDocument&&         data,
        ::SemVersion const&                             documentVersion,
        ::Experiments const&                            experiments,
        ::std::optional<::LegacyEventItemComponentData> legacyEventData
    );

    MCNAPI void $tearDown();

    MCNAPI bool $isComponentBased() const;

    MCNAPI bool $isHumanoidArmor() const;

    MCNAPI bool $isBlockPlanterItem() const;

    MCAPI bool $isDamageable() const;

    MCNAPI bool $isDyeable() const;

    MCNAPI bool $isFood() const;

    MCNAPI bool $isThrowable() const;

    MCNAPI bool $isUseable() const;

    MCNAPI bool $isMusicDisk() const;

    MCNAPI bool $isTrimAllowed() const;

    MCNAPI ::BlockType const* $getBlockTypeForRendering() const;

    MCNAPI ::ItemComponent* $getComponent(::HashedString const& id) const;

    MCNAPI ::IFoodItemComponent* $getFood() const;

    MCNAPI ::Item& $setMaxDamage(int maxDamage);

    MCNAPI ::std::string const& $getDescriptionId() const;

    MCNAPI ::BlockShape $getBlockShape() const;

    MCNAPI bool $canBeDepleted() const;

    MCAPI bool $canDestroySpecial(::Block const& block) const;

    MCNAPI int $getLevelDataForAuxValue(int) const;

    MCNAPI short $getMaxDamage() const;

    MCNAPI int $getAttackDamage() const;

    MCNAPI bool $isGlint(::ItemStackBase const& stack) const;

    MCNAPI bool $canDestroyInCreative() const;

    MCNAPI bool $isDestructive(int) const;

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI bool $requiresInteract() const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI bool
    $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI int $getDamageChance(int unbreaking) const;

    MCNAPI uint $getSwingDuration() const;

    MCNAPI bool $shouldEmitInUseGameEvents() const;

    MCNAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;

    MCNAPI bool $hasCustomColor(::ItemStackBase const& instance) const;

    MCNAPI void $clearColor(::ItemStackBase& instance) const;

    MCNAPI void $setColor(::ItemStackBase& instance, ::mce::Color const& color) const;

    MCNAPI ::std::optional<::SoundEventIdentifier> $getAttackMissSound() const;

    MCNAPI ::std::optional<::SoundEventIdentifier> $getAttackHitSound() const;

    MCNAPI ::std::optional<::SoundEventIdentifier> $getAttackCriticalHitSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI bool $canUseAsAttack() const;

    MCNAPI ::ItemStack&
    $useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection, ::HandSlot handSlot) const;

    MCNAPI ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCNAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCNAPI void $hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCNAPI void $hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const;

    MCNAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCNAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const;

    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCNAPI ::HashedString const& $getCooldownCategory() const;

    MCNAPI int $getCooldownDuration() const;

    MCNAPI ::SharedTypes::ItemCooldownType $getCooldownType() const;

    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCNAPI bool $useVariant(int, int, bool) const;

    MCNAPI int $getVariant(int, int, bool) const;

    MCNAPI ::Matrix $getItemTransform(::ItemTransformType type, float normalizedUnitScale) const;

    MCNAPI void $initClient(
        ::SharedTypes::v1_26_50::ItemDocument&& data,
        ::SemVersion const&                     documentVersion,
        ::Experiments const&                    experiments,
        ::std::optional<::ItemIconInfo> (*)(::std::string const&, int)
    );

    MCNAPI ::std::string $getInteractText(::Player const& player) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    MCNAPI bool $isEmissive(int auxValue) const;

    MCNAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCNAPI ::Item& $setIconInfo(::std::string const& name, int frame);

    MCNAPI bool $canBeCharged() const;

    MCNAPI ::ComponentItem& $setDescriptionId(::std::string const& descriptionId);

    MCNAPI bool $shouldUseJsonForRenderMatrix() const;

    MCNAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const& tag);

    MCNAPI ::std::vector<::std::string> $validateFromNetwork(::CompoundTag const& tag);

    MCNAPI bool
    $_checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;

    MCNAPI bool
    $_calculatePlacePos(::ItemStackBase const& instance, ::Actor const& entity, uchar& face, ::BlockPos& pos) const;

    MCNAPI bool $_shouldAutoCalculatePlacePos() const;

    MCNAPI ::InteractionResult $_useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
