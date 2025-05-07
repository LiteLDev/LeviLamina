#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/platform/threading/UniqueLock.h"

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreadedStrict : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkd30d1d;
    // NOLINTEND

public:
    // prevent constructor by default
    FastDispatchPublisherBase_MultiThreadedStrict& operator=(FastDispatchPublisherBase_MultiThreadedStrict const&);
    FastDispatchPublisherBase_MultiThreadedStrict(FastDispatchPublisherBase_MultiThreadedStrict const&);
    FastDispatchPublisherBase_MultiThreadedStrict();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FastDispatchPublisherBase_MultiThreadedStrict() /*override*/ = default;
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
