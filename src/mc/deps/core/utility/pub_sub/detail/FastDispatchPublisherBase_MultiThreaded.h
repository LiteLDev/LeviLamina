#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreaded : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // FastDispatchPublisherBase_MultiThreaded inner types define
    using LockType = ::Bedrock::Threading::LockGuard<::Bedrock::Threading::Mutex>;

    using MutexType = ::Bedrock::Threading::Mutex;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>        mFastDispatchInfo;
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
