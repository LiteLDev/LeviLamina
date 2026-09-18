#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/RpcResultStreamCloseReason.h"
#include "mc/common/editor/Task.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct CoroutineStatus; }
namespace Editor::Rpc { class RpcResultStreamCancellationToken; }
namespace Editor::Rpc { struct RpcRejection; }
namespace Editor::Rpc { struct RpcResultStreamDescriptor; }
namespace Editor::Rpc { struct RpcResultStreamPayload; }
// clang-format on

namespace Editor::Rpc {

class RpcResultStreamServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RpcResultStreamServiceProvider() = default;

    virtual ::nonstd::expected<::Editor::Rpc::RpcResultStreamDescriptor, ::Editor::Rpc::RpcRejection> openResultStream(
        ::std::function<::Editor::Task<
            ::nonstd::expected<::Editor::Rpc::RpcResultStreamPayload, ::Editor::Rpc::RpcRejection>,
            ::Editor::CoroutineStatus>(uint, ::Editor::Rpc::RpcResultStreamCancellationToken)> producer,
        ::std::function<void(::Editor::Rpc::RpcResultStreamCloseReason)>                       onClose
    ) = 0;

    virtual bool cancelResultStream(uint64 streamId) = 0;
    // NOLINTEND
};

} // namespace Editor::Rpc
