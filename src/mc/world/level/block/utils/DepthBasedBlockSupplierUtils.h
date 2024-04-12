#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DepthBasedBlockSupplierUtils {
// NOLINTBEGIN
// symbol: ?getDepthBasedBlock@DepthBasedBlockSupplierUtils@@YAPEBVBlock@@HAEAVIRandom@@PEBV2@1@Z
MCAPI class Block const*
getDepthBasedBlock(int posY, class IRandom& random, class Block const* fillBlock, class Block const*);
// NOLINTEND

}; // namespace DepthBasedBlockSupplierUtils
