#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IJsonRpcComponent;
class ISignalingJsonRpcInterop;
namespace Json { class Value; }
namespace JsonRpc { class IResultHandler; }
namespace JsonRpc { class JsonRpcError; }
// clang-format on

namespace JsonRpc {

class JsonRpcProvider : public ::std::enable_shared_from_this<::JsonRpc::JsonRpcProvider> {
public:
    // JsonRpcProvider inner types declare
    // clang-format off
    struct JsonRpcPendingResult;
    // clang-format on

    // JsonRpcProvider inner types define
    struct JsonRpcPendingResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk319d42;
        ::ll::UntypedStorage<8, 16> mUnk16e763;
        // NOLINTEND

    public:
        // prevent constructor by default
        JsonRpcPendingResult& operator=(JsonRpcPendingResult const&);
        JsonRpcPendingResult(JsonRpcPendingResult const&);
        JsonRpcPendingResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~JsonRpcPendingResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk5861b3;
    ::ll::UntypedStorage<8, 64>  mUnkee8ec5;
    ::ll::UntypedStorage<8, 64>  mUnkbb1fce;
    ::ll::UntypedStorage<8, 80>  mUnk1a0d61;
    ::ll::UntypedStorage<8, 64>  mUnke31280;
    ::ll::UntypedStorage<8, 120> mUnk4502ec;
    ::ll::UntypedStorage<8, 8>   mUnkeb1c6f;
    ::ll::UntypedStorage<8, 24>  mUnk2d6f06;
    ::ll::UntypedStorage<8, 8>   mUnkaeebe0;
    ::ll::UntypedStorage<8, 16>  mUnk63ee1e;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcProvider& operator=(JsonRpcProvider const&);
    JsonRpcProvider(JsonRpcProvider const&);
    JsonRpcProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcProvider(
        ::std::shared_ptr<::ISignalingJsonRpcInterop>         signalingServiceInterop,
        ::std::vector<::std::shared_ptr<::IJsonRpcComponent>> components
    );

    MCNAPI void _dispatchJsonRpc(::std::string const& method, ::Json::Value const& params, ::std::string const& id);

    MCNAPI void _expirePendingResult(::std::string const& id);

    MCNAPI void
    handleJsonRpcResult(::std::string const& id, ::Bedrock::Result<::Json::Value, ::JsonRpc::JsonRpcError>&& result);

    MCNAPI void onMessage(::std::string_view incomingMessage);

    MCNAPI ::std::unique_ptr<::std::string, ::std::function<void(::std::string*)>>
    registerJsonRpcMethod(::std::string method, ::std::unique_ptr<::JsonRpc::IResultHandler> handler);

    MCNAPI ~JsonRpcProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::ISignalingJsonRpcInterop>         signalingServiceInterop,
        ::std::vector<::std::shared_ptr<::IJsonRpcComponent>> components
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
