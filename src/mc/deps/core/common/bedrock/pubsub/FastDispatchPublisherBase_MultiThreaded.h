#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreaded {

public:
    // prevent constructor by default
    FastDispatchPublisherBase_MultiThreaded& operator=(FastDispatchPublisherBase_MultiThreaded const&) = delete;
    FastDispatchPublisherBase_MultiThreaded(FastDispatchPublisherBase_MultiThreaded const&)            = delete;

    // protected:
    /**
     * @symbol ??0FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAA\@XZ
     */
    MCAPI FastDispatchPublisherBase_MultiThreaded(); // NOLINT
    /**
     * @symbol ?_fastDispatchAddConnection\@FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void _fastDispatchAddConnection(); // NOLINT
    /**
     * @symbol
     * ?_fastDispatchClearConnections\@FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void _fastDispatchClearConnections(); // NOLINT
    /**
     * @symbol
     * ?_fastDispatchRemoveConnection\@FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAAXXZ
     */
    MCAPI void _fastDispatchRemoveConnection(); // NOLINT
    /**
     * @symbol
     * ?_loadDispatchTargets\@FastDispatchPublisherBase_MultiThreaded\@Detail\@PubSub\@Bedrock\@\@IEAA_NAEAVDispatchTargets\@234\@\@Z
     */
    MCAPI bool _loadDispatchTargets(class Bedrock::PubSub::Detail::DispatchTargets&); // NOLINT

protected:
};

}; // namespace Bedrock::PubSub::Detail
