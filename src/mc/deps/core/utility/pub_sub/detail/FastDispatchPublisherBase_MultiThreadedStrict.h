#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/platform/threading/UniqueLock.h"

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreadedStrict : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // FastDispatchPublisherBase_MultiThreadedStrict inner types define
    using LockType = ::Bedrock::Threading::LockGuard<::std::recursive_mutex>;

    using MutexType = ::std::recursive_mutex;

    using UniqueLockType = ::Bedrock::Threading::UniqueLock<::std::recursive_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex> mMutex;
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
