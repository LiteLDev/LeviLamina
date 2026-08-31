#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GatheringServerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mGatheringId;
    ::ll::TypedStorage<8, 32, ::std::string> mGatheringIdAsCreatorName;
    ::ll::TypedStorage<8, 32, ::std::string> mTitle;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringServerInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GatheringServerInfo(::GatheringServerInfo const&);

#ifdef LL_PLAT_C
    MCAPI GatheringServerInfo(::std::string const& gatheringId, ::std::string const& gatheringTitle);

    MCFOLD ::GatheringServerInfo& operator=(::GatheringServerInfo&&);
#endif

    MCFOLD ::GatheringServerInfo& operator=(::GatheringServerInfo const&);

    MCAPI ~GatheringServerInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::GatheringServerInfo const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& gatheringId, ::std::string const& gatheringTitle);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
