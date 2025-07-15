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
    MCNAPI void _save(::SavedData const& data);

    MCNAPI bool loadAndSet(::SavedData& inoutData, ::std::string const& id);

    MCNAPI void set(::std::string const& id, ::SavedData& data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
