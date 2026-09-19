#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/InteractiveToolError.h"

// auto generated forward declare list
// clang-format off
namespace Editor::InteractiveTools { struct Capabilities; }
namespace Editor::Rpc { struct RpcRejection; }
// clang-format on

namespace Editor::Rpc::Generated {

class ClientInteractiveToolServiceRemoteProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk515a42;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInteractiveToolServiceRemoteProxy& operator=(ClientInteractiveToolServiceRemoteProxy const&);
    ClientInteractiveToolServiceRemoteProxy(ClientInteractiveToolServiceRemoteProxy const&);
    ClientInteractiveToolServiceRemoteProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deactivate(
        uint64 sessionId,
        ::std::function<
            void(::nonstd::expected<::Editor::InteractiveTools::InteractiveToolError, ::Editor::Rpc::RpcRejection>)>
            callback
    );

    MCNAPI void getCapabilities(
        ::std::function<void(::nonstd::expected<::Editor::InteractiveTools::Capabilities, ::Editor::Rpc::RpcRejection>)>
            callback
    );
    // NOLINTEND
};

} // namespace Editor::Rpc::Generated
