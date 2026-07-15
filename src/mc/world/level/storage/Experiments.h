#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/ExperimentStorage.h"

class Experiments : public ::ExperimentStorage {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool _shouldShowAsExperimentalLevel(
        ::std::vector<bool> const&       experimentData,
        ::gsl::span<::std::string const> toggleNames
    ) const;
#endif

    MCAPI ::std::string getExperimentsActiveAsJSONList() const;

#ifdef LL_PLAT_C
    MCAPI bool shouldShowAsExperimentalLevel() const;
#endif
    // NOLINTEND
};
