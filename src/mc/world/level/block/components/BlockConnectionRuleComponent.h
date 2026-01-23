#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/block/components/ConnectionID.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockConnectionRuleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::ConnectionID, 4>> mConnectionsFromMask;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::Facing::Name, 6>> mEnabledDirectionsMask;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canConnectToFace(::Block const& block, uchar face, ::std::optional<::ConnectionID> connection);
    // NOLINTEND
};
