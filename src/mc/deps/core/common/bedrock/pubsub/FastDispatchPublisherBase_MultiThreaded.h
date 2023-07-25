#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreaded {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_DETAIL_FASTDISPATCHPUBLISHERBASE_MULTITHREADED
public:
    FastDispatchPublisherBase_MultiThreaded& operator=(FastDispatchPublisherBase_MultiThreaded const&) = delete;
    FastDispatchPublisherBase_MultiThreaded(FastDispatchPublisherBase_MultiThreaded const&)            = delete;
#endif

public:
    // protected:
    /**
     * @symbol ??0FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAA\@XZ
     */
    MCAPI FastDispatchPublisherBase_MultiThreaded();
    /**
     * @symbol ?_fastDispatchAddConnection\@FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void _fastDispatchAddConnection();
    /**
     * @symbol
     * ?_fastDispatchClearConnections\@FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void _fastDispatchClearConnections();
    /**
     * @symbol
     * ?_fastDispatchRemoveConnection\@FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void _fastDispatchRemoveConnection();
    /**
     * @symbol
     * ?_loadDispatchTargets\@FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAA_NAEAVDispatchTargets\@234\@\@Z
     */
    MCAPI bool _loadDispatchTargets(class Bedrock::PubSub::Detail::DispatchTargets&);

protected:
};

}; // namespace Bedrock::PubSub::Detail
