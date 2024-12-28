#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::processors::JigsawReplacementHelpers {

struct Prop {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka58413;
    ::ll::UntypedStorage<8, 16> mUnkbf1845;
    // NOLINTEND

public:
    // prevent constructor by default
    Prop& operator=(Prop const&);
    Prop(Prop const&);
    Prop();
};

} // namespace br::worldgen::processors::JigsawReplacementHelpers
