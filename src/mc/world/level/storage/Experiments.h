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

    MCAPI bool CustomProjectiles() const;

    MCAPI bool ExperimentalCreatorCameras() const;

    MCAPI Experiments();

#ifdef LL_PLAT_C
    MCAPI bool FurnaceRecipeBook() const;
#endif

    MCAPI bool UpcomingCreatorFeatures() const;

    MCAPI bool VillagerTradesRebalance() const;

    MCAPI bool VoxelShapes() const;

    MCAPI bool Y2026Drop2() const;

#ifdef LL_PLAT_C
    MCAPI bool _shouldShowAsExperimentalLevel(
        ::std::vector<bool> const&       experimentData,
        ::gsl::span<::std::string const> toggleNames
    ) const;
#endif

    MCAPI ::std::string getExperimentsActiveAsJSONList() const;

    MCAPI ::std::vector<::std::string> getExperimentsActiveForTelemetry() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCAPI bool isExperimentEnabled(::AllExperiments experiment) const;

    MCAPI void setExperimentEnabled(::AllExperiments experiment, bool value);

    MCAPI void setTagData(::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCAPI bool shouldShowAsExperimentalLevel() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string const& getExperimentTextID(::AllExperiments experiment);

#ifdef LL_PLAT_S
    MCAPI static int getIndexForExperiment(::AllExperiments experiment);
#endif

    MCAPI static ::gsl::span<::std::string const> getToggleNames();

#ifdef LL_PLAT_C
    MCAPI static ::gsl::span<::std::string const> getToggleTextIds();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
