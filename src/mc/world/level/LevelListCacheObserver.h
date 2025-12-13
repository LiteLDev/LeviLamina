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
    // vIndex: 2
    virtual void onLevelAdded(::std::string const&);

    // vIndex: 3
    virtual void onLevelUpdated(::std::string const&);

    // vIndex: 4
    virtual void onLevelDeleted(::std::string const&);

    // vIndex: 5
    virtual void onSummaryUpdated(::std::string const&);

    // vIndex: 6
    virtual void onStorageChanged();

    // vIndex: 0
    virtual ~LevelListCacheObserver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
