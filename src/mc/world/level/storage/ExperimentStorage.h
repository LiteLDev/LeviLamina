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
    // member functions
    // NOLINTBEGIN
    MCAPI ::ExperimentStorage& operator=(::ExperimentStorage&&);

    MCAPI ::ExperimentStorage& operator=(::ExperimentStorage const&);

    MCAPI ~ExperimentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
