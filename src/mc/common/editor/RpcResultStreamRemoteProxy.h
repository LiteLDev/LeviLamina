#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Task.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct CoroutineStatus; }
namespace Editor::Rpc { struct RpcRejection; }
namespace Editor::Rpc { struct RpcResultStreamBatch; }
namespace Editor::Rpc { struct RpcResultStreamRequest; }
// clang-format on

namespace Editor::Rpc {

class RpcResultStreamRemoteProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk88888f;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcResultStreamRemoteProxy& operator=(RpcResultStreamRemoteProxy const&);
    RpcResultStreamRemoteProxy(RpcResultStreamRemoteProxy const&);
    RpcResultStreamRemoteProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Task<
        ::nonstd::expected<::Editor::Rpc::RpcResultStreamBatch, ::Editor::Rpc::RpcRejection>,
        ::Editor::CoroutineStatus>
    read(::Editor::Rpc::RpcResultStreamRequest const& request);
    // NOLINTEND
};

} // namespace Editor::Rpc
