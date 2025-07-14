#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListener.h"
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
    // prevent constructor by default
    SculkShriekerBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 15
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
    MCNAPI explicit SculkShriekerBlockActor(::BlockPos const& pos);

    MCNAPI void tryRespond(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI bool tryShriek(::BlockSource& region, ::BlockPos pos, ::Player& provokingPlayer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canRespond(::BlockSource const& region, ::BlockPos const& pos);

    MCNAPI static ::Player* tryGetPlayerInHierarchy(::Actor* actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
