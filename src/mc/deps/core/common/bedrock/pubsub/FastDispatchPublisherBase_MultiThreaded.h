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
    FastDispatchPublisherBase_MultiThreaded& operator=(FastDispatchPublisherBase_MultiThreaded const&);
    FastDispatchPublisherBase_MultiThreaded(FastDispatchPublisherBase_MultiThreaded const&);
    FastDispatchPublisherBase_MultiThreaded();

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_loadDispatchTargets@FastDispatchPublisherBase_MultiThreaded@Detail@PubSub@Bedrock@@IEAA_NAEAVDispatchTargets@234@@Z
    MCAPI bool _loadDispatchTargets(class Bedrock::PubSub::Detail::DispatchTargets&);

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
