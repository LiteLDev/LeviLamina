#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockCancellableEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Item;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockPlayerPlacingEvent : public ::BlockEvents::BlockCancellableEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&>                  mRegion;
    ::ll::TypedStorage<8, 8, ::Actor&>                        mActor;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mPermutationToPlace;
    ::ll::TypedStorage<8, 8, ::Item const&>                   mItem;
    ::ll::TypedStorage<1, 1, uchar const>                     mFace;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlayerPlacingEvent& operator=(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPlayerPlacingEvent(
        ::BlockSource&                  region,
        ::BlockPos                      pos,
        ::Actor&                        actor,
        uchar                           face,
        ::gsl::not_null<::Block const*> permutationToPlace,
        ::Item const&                   item
    );

    MCAPI void configureRenderParamsForTrigger(::RenderParams& params);

    MCFOLD ::Actor const& getActor() const;

    MCFOLD ::Item const& getItemUsed() const;

    MCFOLD ::Block const& getPermutationToPlace() const;

    MCFOLD bool isClientSide() const;

    MCFOLD void setPermutationToPlace(::Block const& perm);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockSource&                  region,
        ::BlockPos                      pos,
        ::Actor&                        actor,
        uchar                           face,
        ::gsl::not_null<::Block const*> permutationToPlace,
        ::Item const&                   item
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockSource const& $getBlockSource() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
