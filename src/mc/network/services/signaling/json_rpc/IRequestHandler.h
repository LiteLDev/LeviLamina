#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonRpc { class JsonRpcError; }
namespace JsonRpc { class JsonRpcProvider; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class IRequestHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRequestHandler() = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::JsonRpc::JsonRpcError>> call(
        ::Json::Value const&,
        ::std::string const&,
        ::cereal::ReflectionCtx&,
        ::std::shared_ptr<::JsonRpc::JsonRpcProvider>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace JsonRpc
