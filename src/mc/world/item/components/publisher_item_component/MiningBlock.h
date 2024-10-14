#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace PublisherItemComponent {

class MiningBlock {
public:
    // prevent constructor by default
    MiningBlock& operator=(MiningBlock const&);
    MiningBlock(MiningBlock const&);
    MiningBlock();

public:
    // NOLINTBEGIN
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForBedrockPubSubConnector();

    MCAPI static void** $vftableForBedrockPubSubDetailDispatchingPublisherBase();

    // NOLINTEND
};

}; // namespace PublisherItemComponent
