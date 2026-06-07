#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on

class LevelListCacheObserver : public ::Core::Observer<::LevelListCacheObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void onLevelAdded(::std::string const&);
#else // LL_PLAT_C
    virtual void onLevelAdded(::std::string const& levelId);
#endif

#ifdef LL_PLAT_S
    virtual void onLevelUpdated(::std::string const&);
#else // LL_PLAT_C
    virtual void onLevelUpdated(::std::string const& levelId);
#endif

#ifdef LL_PLAT_S
    virtual void onLevelDeleted(::std::string const&);
#else // LL_PLAT_C
    virtual void onLevelDeleted(::std::string const& levelId);
#endif

#ifdef LL_PLAT_S
    virtual void onSummaryUpdated(::std::string const&);
#else // LL_PLAT_C
    virtual void onSummaryUpdated(::std::string const& levelId);
#endif

    virtual void onStorageChanged();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onLevelAdded(::std::string const& levelId);

    MCNAPI void $onLevelUpdated(::std::string const& levelId);

    MCNAPI void $onLevelDeleted(::std::string const& levelId);

    MCNAPI void $onSummaryUpdated(::std::string const& levelId);

    MCNAPI void $onStorageChanged();
#endif


    // NOLINTEND
};
