#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ServiceClient;
namespace Bedrock::Http { class Response; }
// clang-format on

class HttpRequestHandler : public ::std::enable_shared_from_this<::HttpRequestHandler> {
public:
    // HttpRequestHandler inner types define
    enum class RequestStatus : int {
        NotStarted = 0,
        InProgress = 1,
        Completed  = 2,
        Canceled   = 3,
        TimeOut    = 4,
    };

    enum class WaitForSignIn : uint {
        None    = 0,
        PlayFab = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk314b76;
    ::ll::UntypedStorage<8, 8>  mUnkd4a64f;
    ::ll::UntypedStorage<8, 8>  mUnk54cbd7;
    ::ll::UntypedStorage<1, 1>  mUnk811043;
    ::ll::UntypedStorage<4, 4>  mUnk2aee14;
    ::ll::UntypedStorage<8, 8>  mUnkdd4ce8;
    ::ll::UntypedStorage<4, 4>  mUnk5dc8c9;
    ::ll::UntypedStorage<8, 32> mUnk72fca6;
    ::ll::UntypedStorage<4, 4>  mUnkf010d4;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpRequestHandler& operator=(HttpRequestHandler const&);
    HttpRequestHandler(HttpRequestHandler const&);
    HttpRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~HttpRequestHandler() = default;
#else // LL_PLAT_C
    virtual ~HttpRequestHandler();
#endif

    virtual bool trySend(bool const networkAllowed);

    virtual ::Bedrock::Threading::Async<::std::string> getAuthToken() = 0;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> send(::std::string) = 0;

    virtual void processResponse(::Bedrock::Http::Response) = 0;

    virtual void sendCachedRequest();

    virtual bool isDone() const;

    virtual void onComplete() = 0;

    virtual bool canSendRequest() const;

    virtual void fireTelemetry(::Bedrock::NonOwnerPointer<::IMinecraftEventing> const& eventing);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C HttpRequestHandler(::ServiceClient const& owner, uint timeoutSeconds);

    MCNAPI_C void sendRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ServiceClient const& owner, uint timeoutSeconds);
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
    MCNAPI bool $trySend(bool const networkAllowed);

    MCNAPI void $sendCachedRequest();

    MCNAPI bool $isDone() const;

    MCNAPI bool $canSendRequest() const;

    MCNAPI void $fireTelemetry(::Bedrock::NonOwnerPointer<::IMinecraftEventing> const& eventing);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
