#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
// clang-format on

namespace Bedrock {

class WorldRecovery : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::ImplBase<::Bedrock::WorldRecovery> {
public:
    // WorldRecovery inner types declare
    // clang-format off
    struct RecoveryResult;
    struct RecoveryUpdate;
    // clang-format on

    // WorldRecovery inner types define
    struct RecoveryResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk6d2037;
        ::ll::UntypedStorage<8, 32> mUnk2315b7;
        ::ll::UntypedStorage<8, 8>  mUnk990243;
        ::ll::UntypedStorage<8, 8>  mUnk3d5990;
        // NOLINTEND

    public:
        // prevent constructor by default
        RecoveryResult& operator=(RecoveryResult const&);
        RecoveryResult(RecoveryResult const&);
        RecoveryResult();

    public:
        // member functions
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct RecoveryUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf39232;
        ::ll::UntypedStorage<4, 4>  mUnk97ab87;
        ::ll::UntypedStorage<4, 4>  mUnkd88b56;
        ::ll::UntypedStorage<8, 8>  mUnkd29cbd;
        ::ll::UntypedStorage<8, 8>  mUnkcd04b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        RecoveryUpdate& operator=(RecoveryUpdate const&);
        RecoveryUpdate(RecoveryUpdate const&);
        RecoveryUpdate();

    public:
        // member functions
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() = 0;

    virtual ::std::tuple<
        ::Bedrock::Threading::Async<::Bedrock::WorldRecovery::RecoveryResult>,
        ::Bedrock::PubSub::DeferredSubscription>
        doRecovery(
            ::std::string_view,
            ::std::function<void(::Bedrock::WorldRecovery::RecoveryUpdate const&)>,
            ::Bedrock::PubSub::DeferralType
        ) = 0;

    virtual ::Core::PathBuffer<::std::string> const& getRecoveryDestinationPath() const = 0;

    virtual ~WorldRecovery() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
