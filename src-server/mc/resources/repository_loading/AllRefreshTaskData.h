#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RepositoryLoading {

struct AllRefreshTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk1025e3;
    ::ll::UntypedStorage<8, 96> mUnkf7544f;
    ::ll::UntypedStorage<8, 24> mUnk41be52;
    ::ll::UntypedStorage<8, 16> mUnk735dfb;
    ::ll::UntypedStorage<8, 8> mUnk205863;
    ::ll::UntypedStorage<8, 32> mUnk41d1c7;
    ::ll::UntypedStorage<8, 8> mUnk5c54f9;
    ::ll::UntypedStorage<8, 8> mUnk534ecd;
    // NOLINTEND

public:
    // prevent constructor by default
    AllRefreshTaskData& operator=(AllRefreshTaskData const&);
    AllRefreshTaskData(AllRefreshTaskData const&);
    AllRefreshTaskData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllRefreshTaskData(::RepositoryLoading::AllRefreshTaskData&&);

    MCNAPI ~AllRefreshTaskData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RepositoryLoading::AllRefreshTaskData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
