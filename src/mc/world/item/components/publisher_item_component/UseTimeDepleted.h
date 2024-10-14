#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace PublisherItemComponent {

class UseTimeDepleted {
public:
    // prevent constructor by default
    UseTimeDepleted& operator=(UseTimeDepleted const&);
    UseTimeDepleted(UseTimeDepleted const&);
    UseTimeDepleted();

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
