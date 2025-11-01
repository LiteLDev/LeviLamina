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
    ::ll::TypedStorage<1, 1, bool> mExperimentsEverToggled;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperimentStorage(ExperimentStorage const&);
    ExperimentStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ExperimentStorage& operator=(::ExperimentStorage&&);

    MCNAPI ::ExperimentStorage& operator=(::ExperimentStorage const&);

    MCNAPI ~ExperimentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
