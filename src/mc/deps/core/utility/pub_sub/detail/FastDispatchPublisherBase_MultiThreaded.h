#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
namespace Bedrock::Threading { class Mutex; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreaded : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk641a85;
    ::ll::UntypedStorage<8, 8>  mUnk467524;
    // NOLINTEND

public:
    // prevent constructor by default
    FastDispatchPublisherBase_MultiThreaded& operator=(FastDispatchPublisherBase_MultiThreaded const&);
    FastDispatchPublisherBase_MultiThreaded(FastDispatchPublisherBase_MultiThreaded const&);
    FastDispatchPublisherBase_MultiThreaded();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FastDispatchPublisherBase_MultiThreaded() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _loadDispatchTargets(::Bedrock::PubSub::Detail::DispatchTargets& targets) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
