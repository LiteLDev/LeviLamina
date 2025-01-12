#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_SingleThreaded : public ::Bedrock::PubSub::Detail::PublisherBase,
                                                 public ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FastDispatchPublisherBase_SingleThreaded() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _loadDispatchTargets(::Bedrock::PubSub::Detail::DispatchTargets& targets) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
