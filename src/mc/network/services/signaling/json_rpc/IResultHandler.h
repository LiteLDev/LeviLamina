#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonRpc { class JsonRpcError; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class IResultHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResultHandler() = default;

    virtual void call(::Bedrock::Result<::Json::Value, ::JsonRpc::JsonRpcError>&&, ::cereal::ReflectionCtx&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace JsonRpc
