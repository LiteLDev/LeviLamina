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
    MCNAPI Experiments();

#ifdef LL_PLAT_C
    MCNAPI bool _shouldShowAsExperimentalLevel(
        ::std::vector<bool> const&       experimentData,
        ::gsl::span<::std::string const> toggleNames
    ) const;
#endif

    MCNAPI ::std::string getExperimentsActiveAsJSONList() const;

    MCNAPI void getTagData(::CompoundTag const& tag);

    MCNAPI void setTagData(::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCNAPI bool shouldShowAsExperimentalLevel() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
