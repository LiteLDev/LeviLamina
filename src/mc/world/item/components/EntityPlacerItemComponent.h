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
class BlockLegacy;
class BlockPos;
class BlockSource;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~EntityPlacerItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EntityPlacerItemComponent(::SharedTypes::v1_20_50::EntityPlacerItemComponent component);

    MCNAPI void _positionAndRotateActor(
        ::Actor&             actor,
        ::Vec3               position,
        uchar                face,
        ::Vec3 const&        playerFeetPos,
        ::BlockLegacy const* blockLegacy
    ) const;

    MCNAPI void _setActorCustomName(::Actor& actor, ::ItemStack const& item) const;

    MCNAPI void _useOn(
        bool&              result,
        ::ItemStack const& currentItemStack,
        ::ItemStack&       usingActor,
        ::Actor&           pos,
        ::BlockPos const&  face,
        uchar              clickPos,
        ::Vec3 const&      initialItemStack
    );

    MCNAPI void
    _validateBlocks(::std::vector<::BlockDescriptor> const& blocks, ::std::string const& blocksParameterName) const;

    MCNAPI bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::EntityPlacerItemComponent component);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCNAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
