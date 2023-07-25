#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class PublisherBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class DispatchTargets {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_DETAIL_DISPATCHTARGETS
public:
    DispatchTargets& operator=(DispatchTargets const&) = delete;
    DispatchTargets(DispatchTargets const&)            = delete;
    DispatchTargets()                                  = delete;
#endif

public:
    /**
     * @symbol ?loadSubscriptions\@DispatchTargets\@Detail\@PubSub\@Bedrock\@\@QEAA_NAEAVPublisherBase\@234\@\@Z
     */
    MCAPI bool loadSubscriptions(class Bedrock::PubSub::Detail::PublisherBase&);
    /**
     * @symbol ??1DispatchTargets\@Detail\@PubSub\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~DispatchTargets();
};

}; // namespace Bedrock::PubSub::Detail
