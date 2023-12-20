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
    // symbol: ?getIdentifier@MiningBlock@PublisherItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};

}; // namespace PublisherItemComponent
