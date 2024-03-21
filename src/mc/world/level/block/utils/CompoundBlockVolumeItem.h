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
    // symbol: ??8CompoundBlockVolumeItem@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class CompoundBlockVolumeItem const& other) const;

    // symbol: ??1CompoundBlockVolumeItem@@QEAA@XZ
    MCAPI ~CompoundBlockVolumeItem();

    // symbol: ?bindType@CompoundBlockVolumeItem@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
