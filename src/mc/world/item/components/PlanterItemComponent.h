#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/components/BlockTypePtr.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockDescriptor;
class BlockPos;
class BlockType;
class ComponentItem;
class CompoundTag;
class HashedString;
class ItemStack;
class ItemStackBase;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_26_0 { struct PlanterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PlanterItemComponent : public ::NetworkedItemComponent<::PlanterItemComponent> {
public:
    // PlanterItemComponent inner types declare
    // clang-format off
    struct BlockPlacementContext;
    // clang-format on

    // PlanterItemComponent inner types define
    struct BlockPlacementContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mBlock;
        ::ll::TypedStorage<1, 1, bool const>         mAlignedPlacement;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTypePtr>                    mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedUseBlocks;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnUseOnSubscription;
    ::ll::TypedStorage<1, 1, bool>                              mCanUseBlockAsIcon;
    ::ll::TypedStorage<1, 1, bool>                              mReplaceBlockItem;
    ::ll::TypedStorage<1, 1, bool>                              mAlignedPlacement;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanterItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    virtual ~PlanterItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlanterItemComponent(::SharedTypes::v1_26_0::PlanterItemComponent component);

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
        ::ItemStack const& initialItemStack,
        ::ItemStack&       currentItemStack,
        ::Actor&           entity,
        ::BlockPos const&  blockPos,
        uchar              face,
        ::Vec3 const&      clickPos
    );

    MCAPI bool calculatePlacePos(::ItemStackBase const& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCAPI bool canUseOn(::ItemStack const& instance, ::Actor& entity, ::BlockPos const& pos, uchar face) const;

    MCAPI ::HashedString const& getBlockIdentifier() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::PlanterItemComponent::BlockPlacementContext getBlockPlacementContext(::ItemStackBase const& item);

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_0::PlanterItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI void $_initializeComponent(::ComponentItem& owner);

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
