#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk5861b3;
    ::ll::UntypedStorage<8, 64>  mUnk803b0b;
    ::ll::UntypedStorage<8, 64>  mUnk43ee0e;
    ::ll::UntypedStorage<8, 72>  mUnk824719;
    ::ll::UntypedStorage<8, 120> mUnk4502ec;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcProvider& operator=(JsonRpcProvider const&);
    JsonRpcProvider(JsonRpcProvider const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JsonRpcProvider();

    // vIndex: 1
    virtual ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>>
    sendJsonRpcTo(::NetherNet::NetworkID, ::std::optional<::std::string> const&, ::std::string const&) const = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>>
    sendJsonRpc(::std::string const&) const = 0;

    // vIndex: 3
    virtual ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>> sendPing() const = 0;

    // vIndex: 4
    virtual ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>> sendTurnConfigRequest() = 0;

    // vIndex: 5
    virtual ::cereal::ReflectionCtx& getReflectionContext() = 0;

    // vIndex: 6
    virtual ::std::unique_ptr<::std::string, ::std::function<void(::std::string*)>>
        registerJsonRpcMethod(::std::string, ::std::function<void(::std::string, ::Json::Value const&)>) = 0;

    // vIndex: 7
    virtual void dispatchJsonRpc(::std::string const&, ::Json::Value const&) = 0;

    // vIndex: 8
    virtual void
    handleJsonRpcResult(::std::string id, ::nonstd::expected<::Json::Value, ::Json::Value> const& result) = 0;

    // vIndex: 9
    virtual void _unregisterJsonRpcMethod(::std::string) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonRpcProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonRpc
