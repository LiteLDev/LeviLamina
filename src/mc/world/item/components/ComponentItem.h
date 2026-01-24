#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/enchanting/Enchant.h"
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
class IPackLoadContext;
class IconItemComponent;
class InteractionResult;
class ItemComponent;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class ListTag;
class Mob;
class Player;
class SemVersion;
class Vec3;
struct ComponentItemDataAll_Latest;
struct ComponentItemData_Legacy;
struct ItemIconInfoFactory;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
namespace Core { class Path; }
namespace Json { class Value; }
namespace PuvLoadData { struct LoadResultWithTiming; }
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
    ::ll::TypedStorage<4, 4, ::Enchant::Slot>               mEnchantSlot;
    ::ll::TypedStorage<4, 4, int>                           mEnchantValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mAlias;
    ::ll::TypedStorage<1, 1, bool>                          mIsAttachable;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::std::shared_ptr<::ItemComponent>>> mItemComponents;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IconItemComponent>>                         mIcon;
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const>>                                    mBlockTypeForRendering;
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

    virtual ::PuvLoadData::LoadResultWithTiming
    initServer(::Json::Value const&, ::SemVersion const&, ::IPackLoadContext&, ::JsonBetaState const) /*override*/;

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

    virtual ::WeakPtr<::BlockType const> const& getBlockTypeForRendering() const /*override*/;

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

    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

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

    virtual ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackMissSound() const /*override*/;

    virtual ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackHitSound() const /*override*/;

    virtual ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackCriticalHitSound() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual bool canUseAsAttack() const /*override*/;

    virtual ::ItemStack& useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection) const
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

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const
        /*override*/;

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const /*override*/;

    virtual ::HashedString const& getCooldownCategory() const /*override*/;

    virtual int getCooldownDuration() const /*override*/;

    virtual ::SharedTypes::ItemCooldownType getCooldownType() const /*override*/;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const /*override*/;

    virtual bool useVariant(int, int, bool) const;

    virtual int getVariant(int, int, bool) const;

    virtual ::PuvLoadData::LoadResultWithTiming initClient(
        ::Json::Value const&,
        ::SemVersion const&,
        ::JsonBetaState const,
        ::IPackLoadContext&,
        ::ItemIconInfoFactory
    ) /*override*/;

    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const /*override*/;

    virtual bool isEmissive(int auxValue) const /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int frame) /*override*/;

    virtual bool canBeCharged() const /*override*/;

    virtual ::ComponentItem& setDescriptionId(::std::string const& description) /*override*/;

    virtual bool shouldUseJsonForRenderMatrix() const;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag) /*override*/;

    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const& tag) /*override*/;

    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const
        /*override*/;

    virtual bool _calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const
        /*override*/;

    virtual bool _shouldAutoCalculatePlacePos() const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItem(::std::string const& nameId, short id, ::cereal::ReflectionCtx const& ctx);

    MCAPI void _addRegisteredCerealComponent(
        ::std::pair<::std::string const, ::std::shared_ptr<::ItemComponent>>& cerealComponent
    );

    MCAPI ::std::unique_ptr<::CompoundTag> _buildItemPropertiesNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI ::std::unique_ptr<::ListTag> _buildItemTagsNetworkTag() const;

    MCAPI bool _doesNotTakeDurabilityDamage() const;

    MCAPI void _initializeLoadedComponents(
        ::std::optional<::SemVersion>  documentVersion,
        ::std::optional<::Experiments> _experiments
    );

    MCAPI void _loadComponentsFromNetworkTag(
        ::std::string const&           componentName,
        ::CompoundTag const&           componentTag,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI void _loadItemPropertiesNetworkTag(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCAPI void _loadItemTagsNetworkTag(::ListTag const& listTag);

    MCAPI ::PuvLoadData::LoadResultWithTiming _validateSchemaAndInitItem(
        ::Json::Value const&           itemData,
        ::SemVersion const&            documentVersion,
        ::JsonBetaState                canUseBeta,
        ::IPackLoadContext&            packLoadContext,
        bool                           isServer,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI void
    init(::ComponentItemDataAll_Latest&& data, ::SemVersion const& documentVersion, ::Experiments const& experiments);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _moveDataToComponentItem(::ComponentItem& item, ::ComponentItemData_Legacy& data);

    MCAPI static void registerItemComponentTypes(::cereal::ReflectionCtx& ctx);

    MCAPI static ::std::pair<bool, ::SemVersion> upgradeJson(
        ::cereal::ReflectionCtx const& ctx,
        ::std::string&                 document,
        ::Core::Path const&            resourceName,
        ::std::optional<::SemVersion>  minVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, short id, ::cereal::ReflectionCtx const& ctx);
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

    MCFOLD bool $isComponentBased() const;

    MCAPI bool $isHumanoidArmor() const;

    MCAPI bool $isBlockPlanterItem() const;

    MCAPI bool $isDamageable() const;

    MCAPI bool $isDyeable() const;

    MCFOLD bool $isFood() const;

    MCAPI bool $isThrowable() const;

    MCAPI bool $isUseable() const;

    MCAPI bool $isMusicDisk() const;

    MCAPI bool $isTrimAllowed() const;

    MCAPI ::WeakPtr<::BlockType const> const& $getBlockTypeForRendering() const;

    MCAPI ::ItemComponent* $getComponent(::HashedString const& id) const;

    MCAPI ::IFoodItemComponent* $getFood() const;

    MCAPI ::Item& $setMaxDamage(int maxDamage);

    MCAPI ::std::string const& $getDescriptionId() const;

    MCFOLD ::BlockShape $getBlockShape() const;

    MCAPI bool $canBeDepleted() const;

    MCAPI bool $canDestroySpecial(::Block const& block) const;

    MCFOLD int $getLevelDataForAuxValue(int) const;

    MCAPI short $getMaxDamage() const;

    MCAPI int $getAttackDamage() const;

    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;

    MCAPI bool $canDestroyInCreative() const;

    MCFOLD bool $isDestructive(int) const;

    MCAPI bool $isLiquidClipItem() const;

    MCAPI bool $requiresInteract() const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCAPI int $getEnchantSlot() const;

    MCFOLD int $getEnchantValue() const;

    MCAPI int $getArmorValue() const;

    MCAPI int $getDamageChance(int unbreaking) const;

    MCAPI uint $getSwingDuration() const;

    MCAPI bool $shouldEmitInUseGameEvents() const;

    MCAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;

    MCAPI bool $hasCustomColor(::ItemStackBase const& instance) const;

    MCAPI void $clearColor(::ItemStackBase& instance) const;

    MCAPI void $setColor(::ItemStackBase& instance, ::mce::Color const& color) const;

    MCAPI ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> $getAttackMissSound() const;

    MCAPI ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> $getAttackHitSound() const;

    MCAPI ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> $getAttackCriticalHitSound() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI bool $canUseAsAttack() const;

    MCAPI ::ItemStack& $useAsAttack(::ItemStack& item, ::Player& player, ::Vec3 const& aimDirection) const;

    MCAPI ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      aimDirection
    ) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCAPI void $hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCAPI void $hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool playerIsCreative) const;

    MCFOLD uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCAPI ::HashedString const& $getCooldownCategory() const;

    MCAPI int $getCooldownDuration() const;

    MCAPI ::SharedTypes::ItemCooldownType $getCooldownType() const;

#ifdef LL_PLAT_S
    MCAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;
#endif

    MCFOLD bool $useVariant(int, int, bool) const;

    MCFOLD int $getVariant(int, int, bool) const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;

    MCFOLD int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    MCFOLD bool $isEmissive(int auxValue) const;

    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI ::Item& $setIconInfo(::std::string const& name, int frame);

    MCAPI bool $canBeCharged() const;

    MCAPI ::ComponentItem& $setDescriptionId(::std::string const& description);

    MCAPI bool $shouldUseJsonForRenderMatrix() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag);

    MCAPI ::std::vector<::std::string> $validateFromNetwork(::CompoundTag const& tag);

    MCFOLD bool
    $_checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCAPI bool $_shouldAutoCalculatePlacePos() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
