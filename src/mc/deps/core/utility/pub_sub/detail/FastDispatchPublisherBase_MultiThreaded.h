#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreaded : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // FastDispatchPublisherBase_MultiThreaded inner types define
    using LockType = ::Bedrock::Threading::LockGuard<::std::mutex>;

    using MutexType = ::std::mutex;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::mutex>         mMutex;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mFastDispatchInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _loadDispatchTargets(::Bedrock::PubSub::Detail::DispatchTargets& targets) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
