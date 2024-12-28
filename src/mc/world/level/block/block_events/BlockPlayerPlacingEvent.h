#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockPlayerPlacingEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8309f9;
    ::ll::UntypedStorage<8, 8> mUnk7cb3ad;
    ::ll::UntypedStorage<8, 8> mUnk20e934;
    ::ll::UntypedStorage<1, 1> mUnkabfa13;
    ::ll::UntypedStorage<1, 1> mUnk73a7ef;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlayerPlacingEvent& operator=(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockPlayerPlacingEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPlayerPlacingEvent(
        ::BlockSource&                  region,
        ::BlockPos                      pos,
        ::Actor&                        actor,
        uchar                           face,
        ::gsl::not_null<::Block const*> permutationToPlace
    );

    MCAPI void cancelEvent();

    MCAPI void configureRenderParamsForTrigger(::RenderParams& params);

    MCAPI ::Actor const& getActor() const;

    MCAPI ::Block const& getPermutationToPlace() const;

    MCAPI bool isCancelled() const;

    MCAPI bool isClientSide() const;

    MCAPI void setPermutationToPlace(::Block const& perm);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockSource&                  region,
        ::BlockPos                      pos,
        ::Actor&                        actor,
        uchar                           face,
        ::gsl::not_null<::Block const*> permutationToPlace
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
