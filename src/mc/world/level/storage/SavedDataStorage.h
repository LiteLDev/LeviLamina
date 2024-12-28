#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class SavedData;
// clang-format on

class SavedDataStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                    levelStorage;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SavedData*>> savedDatas;
    // NOLINTEND

public:
    // prevent constructor by default
    SavedDataStorage& operator=(SavedDataStorage const&);
    SavedDataStorage(SavedDataStorage const&);
    SavedDataStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SavedDataStorage();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SavedDataStorage(::LevelStorage* levelStorage);

    MCAPI void _save(::SavedData const& data);

    MCAPI bool loadAndSet(::SavedData& inoutData, ::std::string const& id);

    MCAPI void save();

    MCAPI void set(::std::string const& id, ::SavedData& data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelStorage* levelStorage);
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
