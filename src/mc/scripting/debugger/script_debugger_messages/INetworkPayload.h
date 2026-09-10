#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

class INetworkPayload {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetworkPayload() = default;

    virtual ::std::string_view getPayloadType() const = 0;

    virtual ::cereal::DynamicValue serialize(::cereal::ReflectionCtx const& ctx) const = 0;

    virtual bool deserialize(::cereal::DynamicValue const& rawData, ::cereal::ReflectionCtx const& ctx) = 0;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
