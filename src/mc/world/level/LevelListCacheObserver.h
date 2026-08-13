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
    // LevelListCacheObserver inner types define
    enum class LevelAddedType : int {
        NewWorld      = 0,
        ExistingWorld = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

    virtual void onLevelUpdated(::std::string const& levelId);

    virtual void onLevelDeleted(::std::string const& levelId);

    virtual void onSummaryUpdated(::std::string const& levelId);

    virtual void onStorageChanged();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

    MCNAPI void $onLevelUpdated(::std::string const& levelId);

    MCNAPI void $onLevelDeleted(::std::string const& levelId);

    MCNAPI void $onSummaryUpdated(::std::string const& levelId);

    MCNAPI void $onStorageChanged();


    // NOLINTEND
};
