#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
class ReviewSummaryParams;
class ReviewSummaryResponse;
// clang-format on

class ContentCatalogService : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb0808b;
    ::ll::UntypedStorage<8, 16> mUnkef09fe;
    ::ll::UntypedStorage<8, 16> mUnka9f584;
    ::ll::UntypedStorage<8, 24> mUnk578611;
    ::ll::UntypedStorage<8, 8>  mUnk9f4191;
    ::ll::UntypedStorage<8, 32> mUnk991292;
    ::ll::UntypedStorage<8, 32> mUnk9b7efd;
    ::ll::UntypedStorage<8, 64> mUnk4c488a;
    ::ll::UntypedStorage<8, 32> mUnk33e157;
    ::ll::UntypedStorage<8, 16> mUnk990b4e;
    ::ll::UntypedStorage<4, 4>  mUnkef4e90;
    ::ll::UntypedStorage<4, 4>  mUnk9cd61f;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogService& operator=(ContentCatalogService const&);
    ContentCatalogService(ContentCatalogService const&);
    ContentCatalogService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContentCatalogService() /*override*/ = default;

    // vIndex: 5
    virtual void reviewSummary(::ReviewSummaryParams const&, ::std::function<void(::ReviewSummaryResponse&)>);

    // vIndex: 4
    virtual void _submitRequest(::std::shared_ptr<::HttpRequestHandler>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
