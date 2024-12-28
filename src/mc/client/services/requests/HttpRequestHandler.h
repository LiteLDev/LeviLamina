#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Bedrock::Http { class Response; }
// clang-format on

class HttpRequestHandler : public ::std::enable_shared_from_this<::HttpRequestHandler> {
public:
    // HttpRequestHandler inner types define
    enum class WaitForSignIn : uint {
        None     = 0,
        PlayFab  = 1,
        XboxLive = 2,
    };

    enum class RequestStatus : int {
        NotStarted = 0,
        InProgress = 1,
        Completed  = 2,
        Canceled   = 3,
        TimeOut    = 4,
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
    // vIndex: 0
    virtual ~HttpRequestHandler();

    // vIndex: 1
    virtual bool trySend(bool const);

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>> getAuthToken() = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>> send(::std::string) = 0;

    // vIndex: 4
    virtual void processResponse(::Bedrock::Http::Response) = 0;

    // vIndex: 5
    virtual void sendCachedRequest();

    // vIndex: 6
    virtual bool isDone() const;

    // vIndex: 7
    virtual void onComplete() = 0;

    // vIndex: 8
    virtual bool canSendRequest() const;

    // vIndex: 9
    virtual void fireTelemetry(::Bedrock::NonOwnerPointer<::IMinecraftEventing> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $trySend(bool const);

    MCAPI void $sendCachedRequest();

    MCAPI bool $isDone() const;

    MCAPI bool $canSendRequest() const;

    MCAPI void $fireTelemetry(::Bedrock::NonOwnerPointer<::IMinecraftEventing> const&);
    // NOLINTEND
};
