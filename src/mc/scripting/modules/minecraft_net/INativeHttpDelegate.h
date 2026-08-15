#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class INativeHttpDelegate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INativeHttpDelegate() = default;

    virtual bool isInitialized() const = 0;

    virtual void send(
        ::TaskGroup&                                            taskGroup,
        ::Bedrock::Http::Request&                               request,
        ::std::function<void(::Bedrock::Http::Response const&)> callback
    ) = 0;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
