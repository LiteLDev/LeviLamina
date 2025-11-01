#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
class IResourcePackRepositoryRefresher;
class TaskGroup;
// clang-format on

class ResourcePackRepositoryRefreshQueue {
public:
    // ResourcePackRepositoryRefreshQueue inner types declare
    // clang-format off
    struct PreviousTasks;
    struct RefreshResult;
    // clang-format on
    
    // ResourcePackRepositoryRefreshQueue inner types define
    struct RefreshResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkdb5a08;
        ::ll::UntypedStorage<8, 16> mUnk9ad35f;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        RefreshResult& operator=(RefreshResult const&);
        RefreshResult(RefreshResult const&);
        RefreshResult();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RefreshResult();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    struct PreviousTasks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk29b357;
        ::ll::UntypedStorage<1, 1> mUnk3395ad;
        ::ll::UntypedStorage<1, 1> mUnkd0e979;
        ::ll::UntypedStorage<1, 1> mUnkb4cbcb;
        ::ll::UntypedStorage<1, 1> mUnk79b162;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PreviousTasks& operator=(PreviousTasks const&);
        PreviousTasks(PreviousTasks const&);
        PreviousTasks();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5447e8;
    ::ll::UntypedStorage<8, 8> mUnk96e501;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackRepositoryRefreshQueue& operator=(ResourcePackRepositoryRefreshQueue const&);
    ResourcePackRepositoryRefreshQueue(ResourcePackRepositoryRefreshQueue const&);
    ResourcePackRepositoryRefreshQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> _tryCompleteInitialization(::TaskGroup& taskGroup);
    // NOLINTEND

};
