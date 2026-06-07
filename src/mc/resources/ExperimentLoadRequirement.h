#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class PackLoadContext;
class PackLoadRequirement;
// clang-format on

class ExperimentLoadRequirement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaecac3;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperimentLoadRequirement& operator=(ExperimentLoadRequirement const&);
    ExperimentLoadRequirement(ExperimentLoadRequirement const&);
    ExperimentLoadRequirement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExperimentLoadRequirement(::AllExperiments experiment);

    MCNAPI ::AllExperiments const& getExperiment() const;

    MCNAPI bool satisfied(::PackLoadContext const& context, ::JsonBetaState) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::AllExperiments>
    getRequiredExperiments(::std::vector<::PackLoadRequirement> const& requirements);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AllExperiments experiment);
    // NOLINTEND
};
