#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/InteractiveToolError.h"

// auto generated forward declare list
// clang-format off
namespace Editor::InteractiveTools { struct ExtrudeConfig; }
namespace Editor::Rpc { struct RpcRejection; }
// clang-format on

namespace Editor::Rpc::Generated {

class ClientExtrudeInteractiveToolRemoteProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka59c2c;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientExtrudeInteractiveToolRemoteProxy& operator=(ClientExtrudeInteractiveToolRemoteProxy const&);
    ClientExtrudeInteractiveToolRemoteProxy(ClientExtrudeInteractiveToolRemoteProxy const&);
    ClientExtrudeInteractiveToolRemoteProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void activate(
        ::Editor::InteractiveTools::ExtrudeConfig const& config,
        ::std::function<
            void(::nonstd::expected<::Editor::InteractiveTools::InteractiveToolError, ::Editor::Rpc::RpcRejection>)>
            callback
    );
    // NOLINTEND
};

} // namespace Editor::Rpc::Generated
