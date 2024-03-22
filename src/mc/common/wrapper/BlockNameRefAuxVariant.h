#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils {

struct BlockNameRefAuxVariant {
public:
    // prevent constructor by default
    BlockNameRefAuxVariant& operator=(BlockNameRefAuxVariant const&);
    BlockNameRefAuxVariant(BlockNameRefAuxVariant const&);
    BlockNameRefAuxVariant();
};

}; // namespace FlatteningUtils
