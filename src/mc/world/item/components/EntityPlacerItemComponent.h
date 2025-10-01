#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockDescriptor;
class BlockPos;
class BlockSource;
class BlockType;
class ComponentItem;
class Container;
class HashedString;
class ItemStack;
class SemVersion;
class Vec3;
struct ActorDefinitionIdentifier;
namespace Bedrock::PubSub { class Subscription; }
namespace SharedTypes::v1_20_50 { struct EntityPlacerItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityPlacerItemComponent : public ::NetworkedItemComponent<::EntityPlacerItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>     mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedUseBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedDispenseBlocks;
    ::ll::TypedStorage<1, 1, bool>                              mCanUseOnMonsterSpawners;
    ::ll::TypedStorage<1, 1, bool>                              mShouldContentErrorWithoutLiquidClipped;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnUseOnSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityPlacerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 7
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;

    // vIndex: 0
    virtual ~EntityPlacerItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EntityPlacerItemComponent(::SharedTypes::v1_20_50::EntityPlacerItemComponent component);

    MCAPI void _positionAndRotateActor(
        ::Actor&           actor,
        ::Vec3             position,
        uchar              face,
        ::Vec3 const&      playerFeetPos,
        ::BlockType const* blockType
    ) const;

    MCAPI void _setActorCustomName(::Actor& actor, ::ItemStack const& item) const;

    MCAPI void _useOn(
        bool&              result,
        ::ItemStack const& initialItemStack,
        ::ItemStack&       currentItemStack,
        ::Actor&           usingActor,
        ::BlockPos const&  pos,
        uchar              face,
        ::Vec3 const&      clickPos
    );

    MCAPI bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::EntityPlacerItemComponent component);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI void $_initializeComponent(::ComponentItem& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
