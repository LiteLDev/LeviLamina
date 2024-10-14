#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeardAndShaverDescription {
public:
    // prevent constructor by default
    BeardAndShaverDescription& operator=(BeardAndShaverDescription const&);
    BeardAndShaverDescription(BeardAndShaverDescription const&);
    BeardAndShaverDescription();

public:
    // NOLINTBEGIN
    MCAPI BeardAndShaverDescription(
        class BeardingDescriptionCache cache,
        struct BeardKernel const&      beardKernel,
        float                          minBeardWidth,
        float                          maxBeardWidth
    );

    MCAPI float calculateContribution(class BlockPos const& pos) const;

    MCAPI class BeardingDescriptionCache const& getCache() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
