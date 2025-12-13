#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class Experiments : public ::ExperimentStorage {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool ExperimentalCreatorCameras() const;

    MCAPI Experiments();

    MCAPI_C bool _shouldShowAsExperimentalLevel(
        ::std::vector<bool> const&       experimentData,
        ::gsl::span<::std::string const> toggleNames
    ) const;

    MCAPI ::std::string getExperimentsActiveAsJSONList() const;

    MCAPI ::std::vector<::std::string> getExperimentsActiveForTelemetry() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCAPI_S void setExperimentEnabled(::AllExperiments experiment, bool value);

    MCAPI void setTagData(::CompoundTag& tag) const;

    MCAPI_C bool shouldShowAsExperimentalLevel() const;

    MCAPI ~Experiments();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
