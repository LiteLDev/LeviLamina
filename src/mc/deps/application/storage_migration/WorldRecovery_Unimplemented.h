#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
// clang-format on

namespace Bedrock {

class WorldRecovery_Unimplemented : public ::Bedrock::WorldRecovery {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initialize() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::DeferredSubscription notifyOnUpdate(
        ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::WorldRecovery::RecoveryResult>>,
        ::std::function<void(::Bedrock::WorldRecovery::RecoveryUpdate const&)>,
        ::Bedrock::PubSub::DeferralType
    ) /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::WorldRecovery::RecoveryResult>>
        doRecovery(::std::string_view) /*override*/;

    // vIndex: 4
    virtual ::Core::PathBuffer<::std::string> const& getRecoveryDestinationPath() const /*override*/;

    // vIndex: 0
    virtual ~WorldRecovery_Unimplemented() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
