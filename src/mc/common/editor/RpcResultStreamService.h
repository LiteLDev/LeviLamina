#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/RpcResultStreamCloseReason.h"
#include "mc/common/editor/RpcResultStreamServiceProvider.h"
#include "mc/common/editor/Task.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct CoroutineStatus; }
namespace Editor::Rpc { class RpcResultStreamCancellationToken; }
namespace Editor::Rpc { struct RpcRejection; }
namespace Editor::Rpc { struct RpcResultStreamBatch; }
namespace Editor::Rpc { struct RpcResultStreamDescriptor; }
namespace Editor::Rpc { struct RpcResultStreamPayload; }
namespace Editor::Rpc { struct RpcResultStreamRequest; }
// clang-format on

namespace Editor::Rpc {

class RpcResultStreamService : public ::Editor::Services::IEditorService,
                               public ::Editor::Rpc::RpcResultStreamServiceProvider {
public:
    // RpcResultStreamService inner types declare
    // clang-format off
    struct StreamState;
    struct ActiveReadGuard;
    // clang-format on

    // RpcResultStreamService inner types define
    struct StreamState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk7724a9;
        ::ll::UntypedStorage<8, 64> mUnk7a470b;
        ::ll::UntypedStorage<8, 16> mUnk6ebeb1;
        ::ll::UntypedStorage<4, 4>  mUnk9aa064;
        ::ll::UntypedStorage<1, 1>  mUnk77c789;
        ::ll::UntypedStorage<1, 1>  mUnk38ebb3;
        ::ll::UntypedStorage<1, 1>  mUnk5f2048;
        ::ll::UntypedStorage<1, 1>  mUnkd990b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamState& operator=(StreamState const&);
        StreamState(StreamState const&);
        StreamState();
    };

    struct ActiveReadGuard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk9337d0;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveReadGuard& operator=(ActiveReadGuard const&);
        ActiveReadGuard(ActiveReadGuard const&);
        ActiveReadGuard();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnka634ca;
    ::ll::UntypedStorage<8, 8>  mUnkfe0840;
    ::ll::UntypedStorage<1, 1>  mUnk470ffe;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcResultStreamService& operator=(RpcResultStreamService const&);
    RpcResultStreamService(RpcResultStreamService const&);
    RpcResultStreamService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RpcResultStreamService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::nonstd::expected<::Editor::Rpc::RpcResultStreamDescriptor, ::Editor::Rpc::RpcRejection> openResultStream(
        ::std::function<::Editor::Task<
            ::nonstd::expected<::Editor::Rpc::RpcResultStreamPayload, ::Editor::Rpc::RpcRejection>,
            ::Editor::CoroutineStatus>(uint, ::Editor::Rpc::RpcResultStreamCancellationToken)> producer,
        ::std::function<void(::Editor::Rpc::RpcResultStreamCloseReason)>                       onClose
    ) /*override*/;

    virtual bool cancelResultStream(uint64 streamId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _closeStream(uint64 streamId, ::Editor::Rpc::RpcResultStreamCloseReason reason);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _notifyStreamClosed(::Editor::Rpc::RpcResultStreamService::StreamState& stream);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& SERVICE_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::nonstd::expected<::Editor::Rpc::RpcResultStreamDescriptor, ::Editor::Rpc::RpcRejection> $openResultStream(
        ::std::function<::Editor::Task<
            ::nonstd::expected<::Editor::Rpc::RpcResultStreamPayload, ::Editor::Rpc::RpcRejection>,
            ::Editor::CoroutineStatus>(uint, ::Editor::Rpc::RpcResultStreamCancellationToken)> producer,
        ::std::function<void(::Editor::Rpc::RpcResultStreamCloseReason)>                       onClose
    );

    MCNAPI bool $cancelResultStream(uint64 streamId);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForRpcResultStreamServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Rpc
