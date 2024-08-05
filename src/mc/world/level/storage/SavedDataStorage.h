#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedDataStorage {
public:
    // prevent constructor by default
    SavedDataStorage& operator=(SavedDataStorage const&);
    SavedDataStorage(SavedDataStorage const&);
    SavedDataStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SavedDataStorage();

    MCAPI explicit SavedDataStorage(class LevelStorage* levelStorage);

    MCAPI bool loadAndSet(class SavedData& inoutData, std::string const& id);

    MCAPI void save();

    MCAPI void set(std::string const& id, class SavedData& data);

    // NOLINTEND
};
