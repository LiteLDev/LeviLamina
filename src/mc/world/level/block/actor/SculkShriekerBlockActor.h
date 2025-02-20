#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Player;
class SaveContext;
class VibrationListener;
// clang-format on

class SculkShriekerBlockActor : public ::BlockActor {
public:
    // SculkShriekerBlockActor inner types declare
    // clang-format off
    struct QueuedResponse;
    // clang-format on

    // SculkShriekerBlockActor inner types define
    struct QueuedResponse {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk55c338;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedResponse& operator=(QueuedResponse const&);
        QueuedResponse(QueuedResponse const&);
        QueuedResponse();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::VibrationListener>                                          mVibrationListener;
    ::ll::TypedStorage<8, 80, ::std::optional<::gsl::final_action<::std::function<void()>>>> mListenerRegistration;
    ::ll::TypedStorage<4, 8, ::std::optional<::SculkShriekerBlockActor::QueuedResponse>>     mQueuedResponse;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 0
    virtual ~SculkShriekerBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SculkShriekerBlockActor(::BlockPos const& pos);

    MCAPI void tryRespond(::BlockSource& region, ::BlockPos const& pos);

    MCAPI bool tryShriek(::BlockSource& region, ::BlockPos pos, ::Player& provokingPlayer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canRespond(::BlockSource const& region, ::BlockPos const& pos);

    MCAPI static ::Player* tryGetPlayerInHierarchy(::Actor* actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $tick(::BlockSource& region);

    MCFOLD void $onRemoved(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
