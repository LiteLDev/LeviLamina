#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeaconBeamSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5cbc95;
    ::ll::UntypedStorage<4, 16> mUnk68e743;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconBeamSection& operator=(BeaconBeamSection const&);
    BeaconBeamSection(BeaconBeamSection const&);
    BeaconBeamSection();
};
