#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class SDLRequest : public ::HttpRequestHandler {
public:
    // SDLRequest inner types define
    enum class HTTP_METHOD : int {
        Post = 0,
        Get  = 1,
        Put  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk2cc5d9;
    ::ll::UntypedStorage<8, 216> mUnk9bcf16;
    ::ll::UntypedStorage<4, 4>   mUnkd4a598;
    // NOLINTEND

public:
    // prevent constructor by default
    SDLRequest& operator=(SDLRequest const&);
    SDLRequest(SDLRequest const&);
    SDLRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual ::std::string _getUrl() const = 0;

    // vIndex: 11
    virtual ::Json::Value _getBody() const = 0;

    // vIndex: 12
    virtual void _processResponse(::Bedrock::Http::Response) = 0;

    // vIndex: 0
    virtual ~SDLRequest() /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>> getAuthToken() /*override*/;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>> send(::std::string
    ) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>> $getAuthToken();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>> $send(::std::string);
    // NOLINTEND
};
