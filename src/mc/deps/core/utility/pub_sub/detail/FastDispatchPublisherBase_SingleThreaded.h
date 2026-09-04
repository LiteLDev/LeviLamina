#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/platform/threading/LockGuard.h"

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_SingleThreaded : public ::Bedrock::PubSub::Detail::PublisherBase,
                                                 public ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex {
public:
    // FastDispatchPublisherBase_SingleThreaded inner types define
    using LockType = ::Bedrock::Threading::LockGuard<::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex const>;

    using MutexType = ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex const;
};

} // namespace Bedrock::PubSub::Detail
