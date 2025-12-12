#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
// clang-format on

namespace ActorBlockDelegate {
// functions
// NOLINTBEGIN
MCNAPI void executeEvent(
    ::BlockSource&       region,
    ::BlockPos const&    pos,
    ::Block const&       block,
    ::std::string const& eventName,
    ::Actor&             sourceEntity
);
// NOLINTEND

} // namespace ActorBlockDelegate
