#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/MobEventsIndex.h"

class MobEvents {
public:
    // prevent constructor by default
    MobEvents& operator=(MobEvents const&);
    MobEvents(MobEvents const&);
    MobEvents();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobEvents() = default;

    MCAPI explicit MobEvents(class LevelStorage& levelStorage);

    MCAPI bool areEventsEnabled() const;

    MCAPI class MobEvent const& getEvent(::MobEventsIndex eventIndex) const;

    MCAPI ::MobEventsIndex getIndexFromName(std::string const& name) const;

    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager& levelStorageManager);

    MCAPI bool isEnabled(::MobEventsIndex eventIndex) const;

    MCAPI void readFromLevelStorage();

    MCAPI std::unique_ptr<class CompoundTag> serialize() const;

    MCAPI void setEnabled(::MobEventsIndex eventIndex, bool newVal);

    MCAPI void setEventsEnabled(bool newVal);

    MCAPI void setMarketplaceDefaults();

    MCAPI void tick();

    MCAPI void writeToLevelStorage();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onSaveEvent(class LevelStorage&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class LevelStorage& levelStorage);

    MCAPI static std::string const& EVENTS_ENABLED_STRING();

    // NOLINTEND
};
