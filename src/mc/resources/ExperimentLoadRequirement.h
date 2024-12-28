#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class IPackLoadContext;
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
    MCAPI explicit ExperimentLoadRequirement(::AllExperiments experiment);

    MCAPI ::AllExperiments const& getExperiment() const;

    MCAPI bool satisfied(::IPackLoadContext const& context, ::JsonBetaState) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::AllExperiments>
    getRequiredExperiments(::std::vector<::PackLoadRequirement> const& requirements);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AllExperiments experiment);
    // NOLINTEND
};
