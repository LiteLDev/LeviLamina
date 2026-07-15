#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace JsonRpc { class IResultHandler; }
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
        ::ll::UntypedStorage<8, 8>  mUnka3b5b8;
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
    ::ll::UntypedStorage<8, 64>  mUnk19d3ca;
    ::ll::UntypedStorage<8, 64>  mUnkc85114;
    ::ll::UntypedStorage<8, 80>  mUnk1a0d61;
    ::ll::UntypedStorage<8, 64>  mUnk29ed83;
    ::ll::UntypedStorage<8, 128> mUnk4502ec;
    ::ll::UntypedStorage<8, 8>   mUnkcb9720;
    ::ll::UntypedStorage<8, 24>  mUnkecd6dc;
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
    MCNAPI void _expirePendingResult(::std::string const& id);

    MCNAPI ::std::unique_ptr<::std::string, ::std::function<void(::std::string*)>>
    registerJsonRpcMethod(::std::string method, ::std::unique_ptr<::JsonRpc::IResultHandler> handler);
    // NOLINTEND
};

} // namespace JsonRpc
