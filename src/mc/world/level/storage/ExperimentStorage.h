#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperimentStorage {
public:
    // ExperimentStorage inner types define
    using ExperimentData = ::std::vector<bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::vector<bool>> mExperimentData;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>> mDeprecatedData;
    ::ll::TypedStorage<1, 1, bool>                 mExperimentsEverToggled;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperimentStorage& operator=(ExperimentStorage const&);
    ExperimentStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperimentStorage(::ExperimentStorage const&);

    MCNAPI bool isAnyToggleEnabled() const;

    MCNAPI ::ExperimentStorage& operator=(::ExperimentStorage&&);

#ifdef LL_PLAT_C
    MCNAPI bool sameActiveExperimentsAreEnabled(::ExperimentStorage const& other) const;

    MCNAPI bool wereAnyExperimentsEverToggled() const;
#endif

    MCNAPI ~ExperimentStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExperimentStorage const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
