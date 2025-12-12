#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils {

struct BlockNameRefAuxVariant {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk18848f;
    ::ll::UntypedStorage<4, 4> mUnk56be51;
    ::ll::UntypedStorage<4, 4> mUnk22f755;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockNameRefAuxVariant& operator=(BlockNameRefAuxVariant const&);
    BlockNameRefAuxVariant(BlockNameRefAuxVariant const&);
    BlockNameRefAuxVariant();
};

} // namespace FlatteningUtils
