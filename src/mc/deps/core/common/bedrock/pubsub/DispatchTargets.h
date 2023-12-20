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
    // symbol: ?loadSubscriptions@DispatchTargets@Detail@PubSub@Bedrock@@QEAA_NAEBVPublisherBase@234@@Z
    MCAPI bool loadSubscriptions(class Bedrock::PubSub::Detail::PublisherBase const&);

    // symbol: ??1DispatchTargets@Detail@PubSub@Bedrock@@QEAA@XZ
    MCAPI ~DispatchTargets();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
