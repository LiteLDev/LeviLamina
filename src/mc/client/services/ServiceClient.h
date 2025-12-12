#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
class IMinecraftEventing;
namespace Social { class IUserManager; }
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
#ifdef LL_PLAT_S
    virtual ~ServiceClient() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ServiceClient() /*override*/;
#endif

    virtual ::Bedrock::Threading::Async<::std::string>
    getAuthorizationHeader(::std::shared_ptr<::Social::User> user, ::std::string const& url) const;

    virtual ::Bedrock::Threading::Async<::std::string> getAuthorizationHeader(::std::string const& url) const;

    virtual void update();

    virtual void _submitRequest(::std::shared_ptr<::HttpRequestHandler> request);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C
    ServiceClient(::Bedrock::NonOwnerPointer<::Social::IUserManager> userManager, ::IMinecraftEventing* eventing);

    MCNAPI_C ::std::string getPrimaryUserEntityToken() const;

    MCNAPI_C ::std::string getPrimaryUserTitleAccountPlayFabId() const;

    MCNAPI_C bool hasWaitedForPlayFabSignIn() const;

    MCNAPI_C void setEventing(::IMinecraftEventing* eventing);

    MCNAPI_C void setUserManager(::Bedrock::NonOwnerPointer<::Social::IUserManager> userManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void*
    $ctor(::Bedrock::NonOwnerPointer<::Social::IUserManager> userManager, ::IMinecraftEventing* eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<::std::string>
    $getAuthorizationHeader(::std::shared_ptr<::Social::User> user, ::std::string const& url) const;

    MCNAPI ::Bedrock::Threading::Async<::std::string> $getAuthorizationHeader(::std::string const& url) const;

    MCNAPI void $update();

    MCNAPI void $_submitRequest(::std::shared_ptr<::HttpRequestHandler> request);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
