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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    GatheringServerInfo(GatheringServerInfo const&);
    GatheringServerInfo();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::GatheringServerInfo& operator=(::GatheringServerInfo&&);

    MCFOLD ::GatheringServerInfo& operator=(::GatheringServerInfo const&);
#endif

    MCAPI ~GatheringServerInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
