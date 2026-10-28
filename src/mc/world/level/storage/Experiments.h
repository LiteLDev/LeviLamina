#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class Experiments : public ::ExperimentStorage {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI Experiments();

#ifdef LL_PLAT_C
    MCAPI bool _shouldShowAsExperimentalLevel(
        ::std::vector<bool> const&       experimentData,
        ::gsl::span<::std::string const> toggleNames
    ) const;
#endif

    MCAPI ::std::string getExperimentsActiveAsJSONList() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCAPI void setTagData(::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCAPI bool shouldShowAsExperimentalLevel() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
