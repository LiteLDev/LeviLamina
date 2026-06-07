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
    ::ll::UntypedStorage<8, 1672> mUnkab2ff4;
    ::ll::UntypedStorage<8, 8>    mUnk9c0114;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    LevelDataWrapper& operator=(LevelDataWrapper const&);
    LevelDataWrapper(LevelDataWrapper const&);
    LevelDataWrapper();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    LevelDataWrapper& operator=(LevelDataWrapper const&);
    LevelDataWrapper(LevelDataWrapper const&);

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void onLevelUpdated(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void onLevelDeleted(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;
#endif

    virtual void onStorageChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI LevelDataWrapper();

    MCNAPI ::LevelData& operator*();

    MCNAPI ::LevelData const* operator->() const;

    MCNAPI ::LevelData* operator->();

    MCNAPI void reset();

    MCNAPI void resetLevelDataPointer();

    MCNAPI void setLevelData(::ILevelListCache& levelListCache, ::std::string const& levelId);

    MCNAPI void setLevelData_DEPRECATED(::LevelData& levelData);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
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
