#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class LevelData;
// clang-format on

class LevelDataWrapper : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnkc5446e;
    ::ll::UntypedStorage<8, 1568> mUnkab2ff4;
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
    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;

#ifdef LL_PLAT_S
    virtual ~LevelDataWrapper() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~LevelDataWrapper() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void reset();

    MCNAPI_C void resetLevelDataPointer();

    MCNAPI_C void setLevelData(::ILevelListCache& levelListCache, ::std::string const& levelId);

    MCNAPI_C void setLevelData_DEPRECATED(::LevelData& levelData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onLevelUpdated(::std::string const& levelId);

    MCNAPI void $onLevelDeleted(::std::string const& levelId);

    MCNAPI void $onStorageChanged();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
