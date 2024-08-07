#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class PublisherBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class DispatchTargets {
public:
    // prevent constructor by default
    DispatchTargets& operator=(DispatchTargets const&);
    DispatchTargets(DispatchTargets const&);
    DispatchTargets();

public:
    // NOLINTBEGIN
    MCAPI bool loadSubscriptions(class Bedrock::PubSub::Detail::PublisherBase const&);

    MCAPI ~DispatchTargets();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
