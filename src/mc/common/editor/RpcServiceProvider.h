#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Rpc { class RpcService; }
// clang-format on

namespace Editor::Rpc {

class RpcServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RpcServiceProvider() = default;

    virtual ::Editor::Rpc::RpcService& getRpcService() = 0;
    // NOLINTEND
};

} // namespace Editor::Rpc
