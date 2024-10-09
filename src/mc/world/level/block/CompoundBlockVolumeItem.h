#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CompoundBlockVolumeItem {
public:
    // prevent constructor by default
    CompoundBlockVolumeItem& operator=(CompoundBlockVolumeItem const&);
    CompoundBlockVolumeItem(CompoundBlockVolumeItem const&);
    CompoundBlockVolumeItem();

public:
    // NOLINTBEGIN
    MCAPI bool operator==(class CompoundBlockVolumeItem const& other) const;

    MCAPI ~CompoundBlockVolumeItem();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};
