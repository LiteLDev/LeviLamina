#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperimentStorage {
public:
    // prevent constructor by default
    ExperimentStorage(ExperimentStorage const&);
    ExperimentStorage();

public:
    // NOLINTBEGIN
    MCAPI bool isAnyToggleEnabled() const;

    MCAPI class ExperimentStorage& operator=(class ExperimentStorage const&);

    MCAPI bool wereAnyExperimentsEverToggled() const;

    MCAPI ~ExperimentStorage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
