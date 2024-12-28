#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/MobEventsIndex.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ILevelStorageManagerConnector;
class LevelStorage;
class MobEvent;
// clang-format on

class MobEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk4ea3e2;
    ::ll::UntypedStorage<8, 80>  mUnkb79ef3;
    ::ll::UntypedStorage<8, 8>   mUnkcf3ab4;
    ::ll::UntypedStorage<1, 1>   mUnk32b026;
    ::ll::UntypedStorage<1, 1>   mUnkdcecef;
    ::ll::UntypedStorage<8, 16>  mUnk5f9890;
    ::ll::UntypedStorage<8, 16>  mUnk9f9165;
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
    virtual ~MobEvents();
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
