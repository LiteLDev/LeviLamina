#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
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
class BlockLegacy;
class BlockPos;
class BlockSource;
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
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
namespace Core { class Path; }
namespace Json { class Value; }
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
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockLegacy const>>                                  mLegacyBlockForRendering;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::shared_ptr<::ItemComponent>>>
                                                                                            mRegisteredCerealComponents;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCtx;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ComponentItem() /*override*/;

    // vIndex: 1
    virtual bool
    initServer(::Json::Value const&, ::SemVersion const&, ::IPackLoadContext&, ::JsonBetaState const) /*override*/;

    // vIndex: 2
    virtual void tearDown() /*override*/;

    // vIndex: 9
    virtual bool isComponentBased() const /*override*/;

    // vIndex: 10
    virtual bool isHumanoidArmor() const /*override*/;

    // vIndex: 11
    virtual bool isBlockPlanterItem() const /*override*/;

    // vIndex: 14
    virtual bool isDamageable() const /*override*/;

    // vIndex: 15
    virtual bool isDyeable() const /*override*/;

    // vIndex: 19
    virtual bool isFood() const /*override*/;

    // vIndex: 20
    virtual bool isThrowable() const /*override*/;

    // vIndex: 21
    virtual bool isUseable() const /*override*/;

    // vIndex: 7
    virtual bool isMusicDisk() const /*override*/;

    // vIndex: 22
    virtual bool isTrimAllowed() const /*override*/;

    // vIndex: 6
    virtual ::WeakPtr<::BlockLegacy const> const& getLegacyBlockForRendering() const /*override*/;

    // vIndex: 23
    virtual ::ItemComponent* getComponent(::HashedString const& id) const /*override*/;

    // vIndex: 24
    virtual ::IFoodItemComponent* getFood() const /*override*/;

    // vIndex: 25
    virtual ::Item& setMaxDamage(int maxDamage) /*override*/;

    // vIndex: 4
    virtual ::std::string const& getDescriptionId() const /*override*/;

    // vIndex: 30
    virtual ::BlockShape getBlockShape() const /*override*/;

    // vIndex: 31
    virtual bool canBeDepleted() const /*override*/;

    // vIndex: 32
    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    // vIndex: 33
    virtual int getLevelDataForAuxValue(int) const /*override*/;

    // vIndex: 35
    virtual short getMaxDamage() const /*override*/;

    // vIndex: 36
    virtual int getAttackDamage() const /*override*/;

    // vIndex: 39
    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;

    // vIndex: 46
    virtual bool canDestroyInCreative() const /*override*/;

    // vIndex: 47
    virtual bool isDestructive(int) const /*override*/;

    // vIndex: 48
    virtual bool isLiquidClipItem() const /*override*/;

    // vIndex: 50
    virtual bool requiresInteract() const /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 53
    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 55
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 56
    virtual int getArmorValue() const /*override*/;

    // vIndex: 61
    virtual int getDamageChance(int unbreaking) const /*override*/;

    // vIndex: 66
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const /*override*/;

    // vIndex: 68
    virtual bool hasCustomColor(::ItemStackBase const& instance) const /*override*/;

    // vIndex: 69
    virtual void clearColor(::ItemStackBase& instance) const /*override*/;

    // vIndex: 70
    virtual void setColor(::ItemStackBase& instance, ::mce::Color const& color) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 77
    virtual ::Actor*
    createProjectileActor(::BlockSource& region, ::ItemStack const& stack, ::Vec3 const& pos, ::Vec3 const& direction)
        const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 80
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    // vIndex: 81
    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    // vIndex: 82
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 83
    virtual void hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 84
    virtual void hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const
        /*override*/;

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    // vIndex: 88
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack) const /*override*/;

    // vIndex: 91
    virtual uchar getMaxStackSize(::ItemDescriptor const&) const /*override*/;

    // vIndex: 94
    virtual ::HashedString const& getCooldownType() const /*override*/;

    // vIndex: 95
    virtual int getCooldownTime() const /*override*/;

    // vIndex: 101
    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const /*override*/;

    // vIndex: 102
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    // vIndex: 121
    virtual bool useVariant(int, int, bool) const;

    // vIndex: 122
    virtual int getVariant(int, int, bool) const;

    // vIndex: 106
    virtual void
    initClient(::Json::Value const&, ::SemVersion const&, ::JsonBetaState const, ::IPackLoadContext&) /*override*/;

    // vIndex: 109
    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    // vIndex: 110
    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const /*override*/;

    // vIndex: 111
    virtual bool isEmissive(int auxValue) const /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int frame) /*override*/;

    // vIndex: 113
    virtual bool canBeCharged() const /*override*/;

    // vIndex: 3
    virtual ::ComponentItem& setDescriptionId(::std::string const& descriptionId) /*override*/;

    // vIndex: 123
    virtual bool shouldUseJsonForRenderMatrix() const;

    // vIndex: 27
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const /*override*/;

    // vIndex: 28
    virtual void initializeFromNetwork(::CompoundTag const& tag) /*override*/;

    // vIndex: 29
    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const& tag) /*override*/;

    // vIndex: 117
    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const
        /*override*/;

    // vIndex: 118
    virtual bool _calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const
        /*override*/;

    // vIndex: 119
    virtual bool _shouldAutoCalculatePlacePos() const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItem(::std::string const& nameId, short id, ::cereal::ReflectionCtx const& ctx);

    MCNAPI void
    _addRegisteredCerealComponent(::std::pair<::std::string const, ::std::shared_ptr<::ItemComponent>>& cerealComponent
    );

    MCNAPI ::std::unique_ptr<::CompoundTag> _buildItemPropertiesNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI ::std::unique_ptr<::ListTag> _buildItemTagsNetworkTag() const;

    MCNAPI bool _doesNotTakeDurabilityDamage() const;

    MCNAPI void _initializeLoadedComponents(
        ::std::optional<::SemVersion>  documentVersion,
        ::std::optional<::Experiments> _experiments
    );

    MCNAPI void _loadComponentsFromNetworkTag(
        ::std::string const&           componentName,
        ::CompoundTag const&           componentTag,
        ::cereal::ReflectionCtx const& ctx
    );

    MCNAPI void _loadItemPropertiesNetworkTag(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCNAPI void _loadItemTagsNetworkTag(::ListTag const& listTag);

    MCNAPI bool _validateSchemaAndInitItem(
        ::Json::Value const&           itemData,
        ::SemVersion const&            documentVersion,
        ::JsonBetaState                canUseBeta,
        ::IPackLoadContext&            packLoadContext,
        bool                           isServer,
        ::cereal::ReflectionCtx const& ctx
    );

    MCNAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI void
    init(::ComponentItemDataAll_Latest&& data, ::SemVersion const& documentVersion, ::Experiments const& experiments);

    MCNAPI ::Bedrock::PubSub::Connector<void(int&, ::ItemStack&, ::Actor&, ::Mob&)>& onBeforeDurabilityDamage();

    MCNAPI ::Bedrock::PubSub::Connector<void(::ItemStack&, ::Actor&, ::Mob&)>& onHitActor();

    MCNAPI ::Bedrock::PubSub::Connector<void(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&)>& onHitBlock();

    MCNAPI ::Bedrock::PubSub::Connector<void(::ItemStack&, ::Actor&, ::Mob&)>& onHurtActor();

    MCNAPI ::Bedrock::PubSub::Connector<void(bool&, ::ItemStack&, ::Block const&, int, int, int, ::Actor&)>&
    onMiningBlock();

    MCNAPI ::Bedrock::PubSub::Connector<void(bool&, ::ItemStack&, ::Player&)>& onUse();

    MCNAPI ::Bedrock::PubSub::Connector<
        void(bool&, ::ItemStack const&, ::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&)>&
    onUseOn();

    MCNAPI ::Bedrock::PubSub::Connector<void(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&)>&
    onUseTimeDepleted();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _moveDataToComponentItem(::ComponentItem& item, ::ComponentItemData_Legacy& data);

    MCNAPI static void registerItemComponentTypes(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::std::pair<bool, ::SemVersion> upgradeJson(
        ::cereal::ReflectionCtx const& ctx,
        ::std::string&                 document,
        ::Core::Path const&            resourceName,
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
    MCNAPI void $tearDown();

    MCNAPI bool $isComponentBased() const;

    MCNAPI bool $isHumanoidArmor() const;

    MCNAPI bool $isBlockPlanterItem() const;

    MCNAPI bool $isDamageable() const;

    MCNAPI bool $isDyeable() const;

    MCNAPI bool $isFood() const;

    MCNAPI bool $isThrowable() const;

    MCNAPI bool $isUseable() const;

    MCNAPI bool $isMusicDisk() const;

    MCNAPI bool $isTrimAllowed() const;

    MCNAPI ::WeakPtr<::BlockLegacy const> const& $getLegacyBlockForRendering() const;

    MCNAPI ::ItemComponent* $getComponent(::HashedString const& id) const;

    MCNAPI ::IFoodItemComponent* $getFood() const;

    MCNAPI ::Item& $setMaxDamage(int maxDamage);

    MCNAPI ::std::string const& $getDescriptionId() const;

    MCNAPI ::BlockShape $getBlockShape() const;

    MCNAPI bool $canBeDepleted() const;

    MCNAPI bool $canDestroySpecial(::Block const& block) const;

    MCNAPI int $getLevelDataForAuxValue(int) const;

    MCNAPI short $getMaxDamage() const;

    MCNAPI int $getAttackDamage() const;

    MCNAPI bool $isGlint(::ItemStackBase const& stack) const;

    MCNAPI bool $canDestroyInCreative() const;

    MCNAPI bool $isDestructive(int) const;

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCNAPI bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI int $getDamageChance(int unbreaking) const;

    MCNAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const& instance) const;

    MCNAPI bool $hasCustomColor(::ItemStackBase const& instance) const;

    MCNAPI void $clearColor(::ItemStackBase& instance) const;

    MCNAPI void $setColor(::ItemStackBase& instance, ::mce::Color const& color) const;

    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCNAPI ::Actor*
    $createProjectileActor(::BlockSource& region, ::ItemStack const& stack, ::Vec3 const& pos, ::Vec3 const& direction)
        const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCNAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCNAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCNAPI void $hitActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCNAPI void $hitBlock(::ItemStack& item, ::Block const& block, ::BlockPos const& blockPos, ::Mob& attacker) const;

    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack) const;

    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCNAPI ::HashedString const& $getCooldownType() const;

    MCNAPI int $getCooldownTime() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI bool $useVariant(int, int, bool) const;

    MCNAPI int $getVariant(int, int, bool) const;

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

    MCNAPI bool $_calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCNAPI bool $_shouldAutoCalculatePlacePos() const;

    MCNAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
