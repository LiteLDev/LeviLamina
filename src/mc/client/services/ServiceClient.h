#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
namespace Social { class User; }
// clang-format on

class ServiceClient : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk3f66ed;
    ::ll::UntypedStorage<8, 24> mUnk8c1936;
    ::ll::UntypedStorage<8, 24> mUnka146d9;
    ::ll::UntypedStorage<8, 8>  mUnk159c8c;
    ::ll::UntypedStorage<8, 40> mUnk55a990;
    ::ll::UntypedStorage<8, 40> mUnkfe6265;
    ::ll::UntypedStorage<8, 8>  mUnk326b69;
    ::ll::UntypedStorage<1, 1>  mUnkc9755b;
    ::ll::UntypedStorage<1, 1>  mUnke42b00;
    ::ll::UntypedStorage<8, 32> mUnk78c02e;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceClient& operator=(ServiceClient const&);
    ServiceClient(ServiceClient const&);
    ServiceClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServiceClient() /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>>
    getAuthorizationHeader(::std::shared_ptr<::Social::User>, ::std::string const&) const;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>>
    getAuthorizationHeader(::std::string const&) const;

    // vIndex: 3
    virtual void update();

    // vIndex: 4
    virtual void _submitRequest(::std::shared_ptr<::HttpRequestHandler>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>>
    $getAuthorizationHeader(::std::shared_ptr<::Social::User>, ::std::string const&) const;

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>>
    $getAuthorizationHeader(::std::string const&) const;

    MCAPI void $update();

    MCAPI void $_submitRequest(::std::shared_ptr<::HttpRequestHandler>);
    // NOLINTEND
};
