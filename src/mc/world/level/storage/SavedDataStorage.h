#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedData;
class LevelStorage;

class SavedDataStorage {
public:
    // prevent constructor by default
    SavedDataStorage& operator=(SavedDataStorage const&);
    SavedDataStorage(SavedDataStorage const&);
    SavedDataStorage();

    LevelStorage*                               levelStorage; // this+0x8
    std::unordered_map<std::string, SavedData*> savedDatas;   // this+0x10

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SavedDataStorage();

    MCAPI explicit SavedDataStorage(class LevelStorage* levelStorage);

    MCAPI bool loadAndSet(class SavedData& inoutData, std::string const& id);

    MCAPI void save();

    MCAPI void set(std::string const& id, class SavedData& data);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class LevelStorage* levelStorage);

    MCAPI void dtor$();

    // NOLINTEND
};
