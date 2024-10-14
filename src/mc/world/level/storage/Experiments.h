#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

class Experiments {
public:
    // prevent constructor by default
    Experiments& operator=(Experiments const&);
    Experiments(Experiments const&);

public:
    // NOLINTBEGIN
    MCAPI bool DataDrivenBiomes() const;

    MCAPI bool DataDrivenItems() const;

    MCAPI Experiments();

    MCAPI bool Gametest() const;

    MCAPI bool UpcomingCreatorFeatures() const;

    MCAPI bool VillagerTradesRebalance() const;

    MCAPI std::string getExperimentsActiveAsJSONList() const;

    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;

    MCAPI void getTagData(class CompoundTag const& tag);

    MCAPI bool isExperimentEnabled(::AllExperiments experiment) const;

    MCAPI void setExperimentEnabled(::AllExperiments experiment, bool value);

    MCAPI void setTagData(class CompoundTag& tag) const;

    MCAPI ~Experiments();

    MCAPI static std::string const& getExperimentTextID(::AllExperiments experiment);

    MCAPI static std::vector<std::string> const& getToggleNames();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
