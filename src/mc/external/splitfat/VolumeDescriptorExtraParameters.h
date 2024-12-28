#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct VolumeDescriptorExtraParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 160> mUnk69d37d;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeDescriptorExtraParameters& operator=(VolumeDescriptorExtraParameters const&);
    VolumeDescriptorExtraParameters(VolumeDescriptorExtraParameters const&);
    VolumeDescriptorExtraParameters();
};

} // namespace SFAT
