#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/PublisherBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
namespace Bedrock::PubSub::Detail { class PublisherBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreaded : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // prevent constructor by default
    FastDispatchPublisherBase_MultiThreaded& operator=(FastDispatchPublisherBase_MultiThreaded const&);
    FastDispatchPublisherBase_MultiThreaded(FastDispatchPublisherBase_MultiThreaded const&);
    FastDispatchPublisherBase_MultiThreaded();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FastDispatchPublisherBase_MultiThreaded() = default;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _loadDispatchTargets(class Bedrock::PubSub::Detail::DispatchTargets& targets) const;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
