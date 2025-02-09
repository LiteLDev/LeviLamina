#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/MobEventsIndex.h"

// auto generated forward declare list
// clang-format off
class BasicTimer;
class CompoundTag;
class ILevelStorageManagerConnector;
class LevelStorage;
class MobEvent;
namespace Bedrock::PubSub { class Subscription; }
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobEvents() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MobEvents(::LevelStorage& levelStorage);

    MCAPI void _onSaveEvent(::LevelStorage&);

    MCAPI bool areEventsEnabled() const;

    MCAPI ::MobEvent const& getEvent(::MobEventsIndex eventIndex) const;

    MCAPI ::MobEventsIndex getIndexFromName(::std::string const& name) const;

    MCAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector
    );

    MCAPI bool isEnabled(::MobEventsIndex eventIndex) const;

    MCAPI void readFromLevelStorage();

    MCAPI ::std::unique_ptr<::CompoundTag> serialize() const;

    MCAPI void setEnabled(::MobEventsIndex eventIndex, bool newVal);

    MCAPI void setEventsEnabled(bool newVal);

    MCAPI void setMarketplaceDefaults();

    MCAPI void tick();

    MCAPI void writeToLevelStorage();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& EVENTS_ENABLED_STRING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelStorage& levelStorage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
