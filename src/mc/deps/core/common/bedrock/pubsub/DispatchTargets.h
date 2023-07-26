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
    DispatchTargets& operator=(DispatchTargets const&) = delete;
    DispatchTargets(DispatchTargets const&)            = delete;
    DispatchTargets()                                  = delete;

public:
    /**
     * @symbol ?loadSubscriptions\@DispatchTargets\@Detail\@PubSub\@Bedrock\@\@QEAA_NAEAVPublisherBase\@234\@\@Z
     */
    MCAPI bool loadSubscriptions(class Bedrock::PubSub::Detail::PublisherBase&); // NOLINT
    /**
     * @symbol ??1DispatchTargets\@Detail\@PubSub\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~DispatchTargets(); // NOLINT
};

}; // namespace Bedrock::PubSub::Detail
