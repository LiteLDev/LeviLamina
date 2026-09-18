#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Rpc { class RpcService; }
namespace Scripting { struct ModuleBinding; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Rpc {
// functions
// NOLINTBEGIN
MCNAPI void bindResultStreamTypes(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_S
MCNAPI ::Scripting::ModuleBinding buildRpcResultStreamRpcModule(::Editor::Rpc::RpcService& rpcService);
#endif
// NOLINTEND

} // namespace Editor::Rpc
