#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct ResolvedExperienceInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd33ab1;
    ::ll::UntypedStorage<8, 24> mUnk2d9feb;
    ::ll::UntypedStorage<8, 40> mUnk55ce47;
    ::ll::UntypedStorage<8, 40> mUnkcd666e;
    ::ll::UntypedStorage<8, 40> mUnkf9a0fe;
    ::ll::UntypedStorage<8, 24> mUnkd870c1;
    ::ll::UntypedStorage<8, 40> mUnk477994;
    ::ll::UntypedStorage<8, 40> mUnkc9ca4a;
    ::ll::UntypedStorage<8, 40> mUnk3c1a35;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedExperienceInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResolvedExperienceInfo(::Social::ResolvedExperienceInfo const&);

    MCNAPI ::Social::ResolvedExperienceInfo& operator=(::Social::ResolvedExperienceInfo const&);

    MCNAPI ~ResolvedExperienceInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::ResolvedExperienceInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
