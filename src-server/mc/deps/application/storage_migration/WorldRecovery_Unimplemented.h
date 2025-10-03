#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
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

    // vIndex: 2
    virtual ::std::tuple<
        ::Bedrock::Threading::Async<::Bedrock::WorldRecovery::RecoveryResult>,
        ::Bedrock::PubSub::DeferredSubscription>
        doRecovery(
            ::std::string_view,
            ::std::function<void(::Bedrock::WorldRecovery::RecoveryUpdate const&)>,
            ::Bedrock::PubSub::DeferralType
        ) /*override*/;

    // vIndex: 3
    virtual ::Core::PathBuffer<::std::string> const& getRecoveryDestinationPath() const /*override*/;

    // vIndex: 0
    virtual ~WorldRecovery_Unimplemented() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
