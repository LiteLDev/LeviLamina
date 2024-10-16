#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace PublisherItemComponent {

class OnBeforeDurabilityDamage {
public:
    // prevent constructor by default
    OnBeforeDurabilityDamage& operator=(OnBeforeDurabilityDamage const&);
    OnBeforeDurabilityDamage(OnBeforeDurabilityDamage const&);
    OnBeforeDurabilityDamage();

public:
    // NOLINTBEGIN
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI static void** vftableForBedrockPubSubConnector();

    MCAPI static void** vftableForBedrockPubSubDetailDispatchingPublisherBase();

    // NOLINTEND
};

}; // namespace PublisherItemComponent
