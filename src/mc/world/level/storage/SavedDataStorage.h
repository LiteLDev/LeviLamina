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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SavedDataStorage() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _save(::SavedData const& data);

    MCAPI bool loadAndSet(::SavedData& inoutData, ::std::string const& id);
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
