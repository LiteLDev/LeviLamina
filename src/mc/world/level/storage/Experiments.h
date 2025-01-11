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
    MCAPI bool BetaApis() const;

    MCAPI bool CameraAimAssist() const;

    MCAPI bool DataDrivenBiomes() const;

    MCAPI Experiments();

    MCAPI bool FocusTargetCamera() const;

    MCAPI bool JigsawStructures() const;

    MCAPI bool ThirdPersonCameras() const;

    MCAPI bool UpcomingCreatorFeatures() const;

    MCAPI bool VillagerTradesRebalance() const;

    MCAPI ::std::string getExperimentsActiveAsJSONList() const;

    MCAPI ::std::vector<::std::string> getExperimentsActiveForTelemetry() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCAPI bool isExperimentEnabled(::AllExperiments experiment) const;

    MCAPI void setExperimentEnabled(::AllExperiments experiment, bool value);

    MCAPI void setTagData(::CompoundTag& tag) const;

    MCAPI ~Experiments();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string const& getExperimentTextID(::AllExperiments experiment);

    MCAPI static ::gsl::span<::std::string const> getToggleNames();
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
