#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class FetchImageParams;
class IEntitlementManager;
class SearchQuery;
struct DurableSearchResults;
struct FetchImageDataResult;
// clang-format on

class IContentCatalogPackSourceService {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContentCatalogPackSourceService() = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::Async<::FetchImageDataResult>
    fetchImageData(::FetchImageParams const&, ::Bedrock::Http::RequestPriority) = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<::DurableSearchResults> searchCatalog(::SearchQuery const&) = 0;

    // vIndex: 3
    virtual bool isRealmsPlusExpired(::IEntitlementManager&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
