#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/components/BlockLegacyPtr.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockDescriptor;
class BlockPos;
class CompoundTag;
class HashedString;
class ItemStack;
class ItemStackBase;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_21_40 { struct PlanterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PlanterItemComponent : public ::NetworkedItemComponent<::PlanterItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockLegacyPtr>                  mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedUseBlocks;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnUseOnSubscription;
    ::ll::TypedStorage<1, 1, bool>                              mCanUseBlockAsIcon;
    ::ll::TypedStorage<1, 1, bool>                              mReplaceBlockItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanterItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    // vIndex: 5
    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    // vIndex: 0
    virtual ~PlanterItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlanterItemComponent(::SharedTypes::v1_21_40::PlanterItemComponent component);

    MCAPI bool _placeBlock(
        ::ItemStack&      item,
        ::Actor&          entity,
        ::Block const&    block,
        ::BlockPos const& placePos,
        uchar             face,
        ::Vec3 const&     clickPos
    ) const;

    MCAPI void _useOn(
        bool&              result,
        ::ItemStack const& currentItemStack,
        ::ItemStack&       entity,
        ::Actor&           blockPos,
        ::BlockPos const&  face,
        uchar              clickPos,
        ::Vec3 const&      initialItemStack
    );

    MCAPI bool calculatePlacePos(::ItemStackBase const& entity, ::Actor& face, uchar& pos, ::BlockPos& instance) const;

    MCAPI bool canUseOn(::ItemStack const& instance, ::Actor& entity, ::BlockPos const& pos, uchar face) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_40::PlanterItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI void $_initializeComponent();

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
