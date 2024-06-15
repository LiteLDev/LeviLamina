#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_SingleThreaded {
public:
    // prevent constructor by default
    FastDispatchPublisherBase_SingleThreaded& operator=(FastDispatchPublisherBase_SingleThreaded const&);
    FastDispatchPublisherBase_SingleThreaded(FastDispatchPublisherBase_SingleThreaded const&);
    FastDispatchPublisherBase_SingleThreaded();

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_loadDispatchTargets@FastDispatchPublisherBase_SingleThreaded@Detail@PubSub@Bedrock@@IEBA_NAEAVDispatchTargets@234@@Z
    MCAPI bool _loadDispatchTargets(class Bedrock::PubSub::Detail::DispatchTargets& targets) const;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
