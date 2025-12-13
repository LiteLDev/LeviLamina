#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
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
#ifdef LL_PLAT_S
    virtual ~CachedHttpRequest() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CachedHttpRequest() /*override*/;
#endif

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> send(::std::string authToken) /*override*/;

    virtual ::Bedrock::Http::Request _createRequest(::std::string) = 0;

    virtual void processResponse(::Bedrock::Http::Response response) /*override*/;

    virtual void _recordTelemetry(::Bedrock::Http::Response const& response) const;

    virtual void _responseHeaders(::Bedrock::Http::HeaderCollection const&) = 0;

    virtual bool _parseJsonResponse(::Json::Value const&) = 0;

    virtual void _parseJsonMetadata(::Json::Value const&) = 0;

    virtual ::Json::Value _createMetadata() const = 0;

    virtual bool _tryUseCachedResponse();

    virtual void _writeToCache(::Json::Value const& metadataJson, ::Json::Value const& responseJson) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CachedHttpRequest(
        ::ServiceClient const& owner,
        ::Core::Path const&    cacheLocation,
        ::std::string const&   cachedFilename,
        uint,
        uint,
        int timeoutSeconds
    );

    MCNAPI_C ::Json::Value const& _loadFromCache();

    MCNAPI_C bool _populateFromResponse(::Json::Value const& responseJson);

    MCNAPI_C ::Json::Value const& _readMetadataFromCache();

    MCNAPI_C ::Json::Value const& _readResponseFromCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::ServiceClient const& owner,
        ::Core::Path const&    cacheLocation,
        ::std::string const&   cachedFilename,
        uint,
        uint,
        int timeoutSeconds
    );
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
    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Response> $send(::std::string authToken);

    MCNAPI void $processResponse(::Bedrock::Http::Response response);

    MCNAPI void $_recordTelemetry(::Bedrock::Http::Response const& response) const;

    MCNAPI bool $_tryUseCachedResponse();

    MCNAPI void $_writeToCache(::Json::Value const& metadataJson, ::Json::Value const& responseJson) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
