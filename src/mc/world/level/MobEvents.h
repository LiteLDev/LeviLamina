#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/MobEvent.h"
#include "mc/world/level/MobEventsIndex.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ILevelStorageManagerConnector;
class LevelStorage;
// clang-format on

class MobEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::std::array<::MobEvent, 3>>    mMobEvents;
    ::ll::TypedStorage<8, 80, ::BasicTimer>                    mSaveTimer;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                  mLevelStorage;
    ::ll::TypedStorage<1, 1, bool>                             mEventsEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mNeedsToSave;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEvents& operator=(MobEvents const&);
    MobEvents(MobEvents const&);
    MobEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobEvents() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobEvents(::LevelStorage& levelStorage);

    MCNAPI void _onSaveEvent(::LevelStorage&);

    MCNAPI ::MobEventsIndex getIndexFromName(::std::string const& name) const;

    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector
    );

    MCNAPI void readFromLevelStorage();

    MCNAPI ::std::unique_ptr<::CompoundTag> serialize() const;

    MCNAPI void writeToLevelStorage();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& EVENTS_ENABLED_STRING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelStorage& levelStorage);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
