#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RepositoryLoading {

struct PackModifications {
public:
    // PackModifications inner types declare
    // clang-format off
    struct CurrentWorldTemplatePacks;
    struct DependencyError;
    struct ReportError;
    // clang-format on

    // PackModifications inner types define
    struct CurrentWorldTemplatePacks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkc30c03;
        // NOLINTEND

    public:
        // prevent constructor by default
        CurrentWorldTemplatePacks& operator=(CurrentWorldTemplatePacks const&);
        CurrentWorldTemplatePacks(CurrentWorldTemplatePacks const&);
        CurrentWorldTemplatePacks();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CurrentWorldTemplatePacks();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DependencyError {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkd36637;
        // NOLINTEND

    public:
        // prevent constructor by default
        DependencyError& operator=(DependencyError const&);
        DependencyError(DependencyError const&);
        DependencyError();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DependencyError();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ReportError {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 56> mUnk4a5203;
        ::ll::UntypedStorage<1, 1>  mUnkfadfc9;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReportError& operator=(ReportError const&);
        ReportError(ReportError const&);
        ReportError();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ReportError();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb1655c;
    ::ll::UntypedStorage<8, 24> mUnk2b2491;
    ::ll::UntypedStorage<8, 24> mUnk274747;
    // NOLINTEND

public:
    // prevent constructor by default
    PackModifications& operator=(PackModifications const&);
    PackModifications();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackModifications(::RepositoryLoading::PackModifications const&);

    MCNAPI ~PackModifications();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RepositoryLoading::PackModifications const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace RepositoryLoading
