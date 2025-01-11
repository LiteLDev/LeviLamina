#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptBindingReleaseList {
public:
    // ScriptBindingReleaseList inner types declare
    // clang-format off
    struct ReleaseDetails;
    // clang-format on

    // ScriptBindingReleaseList inner types define
    struct ReleaseDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk2ba44f;
        ::ll::UntypedStorage<8, 40> mUnkc74d57;
        ::ll::UntypedStorage<2, 4>  mUnk417176;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReleaseDetails& operator=(ReleaseDetails const&);
        ReleaseDetails(ReleaseDetails const&);
        ReleaseDetails();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ReleaseDetails();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6ed26c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBindingReleaseList& operator=(ScriptBindingReleaseList const&);
    ScriptBindingReleaseList(ScriptBindingReleaseList const&);
    ScriptBindingReleaseList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptBindingReleaseList(::std::vector<::ScriptBindingReleaseList::ReleaseDetails> releaseList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::ScriptBindingReleaseList::ReleaseDetails> releaseList);
    // NOLINTEND
};
