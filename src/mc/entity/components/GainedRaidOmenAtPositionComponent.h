#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct GainedRaidOmenAtPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk631dcc;
    // NOLINTEND

public:
    // prevent constructor by default
    GainedRaidOmenAtPositionComponent& operator=(GainedRaidOmenAtPositionComponent const&);
    GainedRaidOmenAtPositionComponent(GainedRaidOmenAtPositionComponent const&);
    GainedRaidOmenAtPositionComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag);
    // NOLINTEND
};
