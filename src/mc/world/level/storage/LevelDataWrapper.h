#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListCacheObserver.h"

class LevelDataWrapper : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnkc5446e;
    ::ll::UntypedStorage<8, 1600> mUnkab2ff4;
    ::ll::UntypedStorage<8, 8>    mUnkc8a4d6;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDataWrapper& operator=(LevelDataWrapper const&);
    LevelDataWrapper(LevelDataWrapper const&);
    LevelDataWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void onLevelUpdated(::std::string const&) /*override*/;

    // vIndex: 4
    virtual void onLevelDeleted(::std::string const&) /*override*/;

    // vIndex: 6
    virtual void onStorageChanged() /*override*/;

    // vIndex: 0
    virtual ~LevelDataWrapper() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
