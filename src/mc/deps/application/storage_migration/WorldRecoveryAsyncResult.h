#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/deps/core/utility/pub_sub/DeferredPublisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace Bedrock {

class WorldRecoveryAsyncResult
: public ::Bedrock::Threading::AsyncResultBase<::Bedrock::WorldRecovery::RecoveryResult> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnke015dc;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldRecoveryAsyncResult& operator=(WorldRecoveryAsyncResult const&);
    WorldRecoveryAsyncResult(WorldRecoveryAsyncResult const&);
    WorldRecoveryAsyncResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldRecoveryAsyncResult() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
