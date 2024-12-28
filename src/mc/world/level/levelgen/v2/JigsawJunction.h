#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct JigsawJunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf49797;
    ::ll::UntypedStorage<4, 4> mUnk528d78;
    ::ll::UntypedStorage<4, 4> mUnka493ea;
    ::ll::UntypedStorage<4, 4> mUnkec8137;
    ::ll::UntypedStorage<1, 1> mUnke8676c;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawJunction& operator=(JigsawJunction const&);
    JigsawJunction(JigsawJunction const&);
    JigsawJunction();
};

} // namespace br::worldgen
