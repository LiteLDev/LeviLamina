#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class CachedHttpRequest : public ::HttpRequestHandler {
public:
    // CachedHttpRequest inner types declare
    // clang-format off
    struct LoadedCache;
    // clang-format on

    // CachedHttpRequest inner types define
    struct LoadedCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk729aef;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadedCache& operator=(LoadedCache const&);
        LoadedCache(LoadedCache const&);
        LoadedCache();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke75de3;
    ::ll::UntypedStorage<8, 32> mUnk7af363;
    ::ll::UntypedStorage<8, 80> mUnkbb851d;
    ::ll::UntypedStorage<8, 80> mUnkdcd461;
    ::ll::UntypedStorage<8, 32> mUnk99697a;
    ::ll::UntypedStorage<8, 8>  mUnk3619db;
    ::ll::UntypedStorage<8, 24> mUnk86e2d3;
    ::ll::UntypedStorage<1, 1>  mUnk1f00ca;
    ::ll::UntypedStorage<1, 1>  mUnkb0fe83;
    ::ll::UntypedStorage<1, 1>  mUnk8d43f1;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedHttpRequest& operator=(CachedHttpRequest const&);
    CachedHttpRequest(CachedHttpRequest const&);
    CachedHttpRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CachedHttpRequest() /*override*/;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>> send(::std::string
    ) /*override*/;

    // vIndex: 10
    virtual ::Bedrock::Http::Request _createRequest(::std::string) = 0;

    // vIndex: 4
    virtual void processResponse(::Bedrock::Http::Response) /*override*/;

    // vIndex: 11
    virtual void _recordTelemetry(::Bedrock::Http::Response const&) const;

    // vIndex: 12
    virtual void _responseHeaders(::Bedrock::Http::HeaderCollection const&) = 0;

    // vIndex: 13
    virtual bool _parseJsonResponse(::Json::Value const&) = 0;

    // vIndex: 14
    virtual void _parseJsonMetadata(::Json::Value const&) = 0;

    // vIndex: 15
    virtual ::Json::Value _createMetadata() const = 0;

    // vIndex: 16
    virtual bool _tryUseCachedResponse();

    // vIndex: 17
    virtual void _writeToCache(::Json::Value const&, ::Json::Value const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>> $send(::std::string);

    MCAPI void $processResponse(::Bedrock::Http::Response);

    MCAPI void $_recordTelemetry(::Bedrock::Http::Response const&) const;

    MCAPI bool $_tryUseCachedResponse();

    MCAPI void $_writeToCache(::Json::Value const&, ::Json::Value const&) const;
    // NOLINTEND
};
