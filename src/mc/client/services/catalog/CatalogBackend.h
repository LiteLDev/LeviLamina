#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/SearchRequestURLType.h"

// auto generated forward declare list
// clang-format off
class CreateReviewParams;
class ServiceClient;
struct RatingData;
struct ReviewSummaryData;
namespace Bedrock::Http { class RequestBuilder; }
namespace Bedrock::Http { struct Method; }
namespace Json { class Value; }
// clang-format on

class CatalogBackend {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3ce6fa;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogBackend& operator=(CatalogBackend const&);
    CatalogBackend(CatalogBackend const&);
    CatalogBackend();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CatalogBackend() = default;

    // vIndex: 1
    virtual ::std::string const& getCachedFilePrefix() const = 0;

    // vIndex: 2
    virtual ::std::string getHostUrl() const = 0;

    // vIndex: 3
    virtual ::std::string getSearchUrl(::SearchRequestURLType) const = 0;

    // vIndex: 4
    virtual ::std::string getHydrateUrl(::std::string const&) const = 0;

    // vIndex: 5
    virtual ::std::string getReviewSummaryUrl(::std::string const&) const = 0;

    // vIndex: 6
    virtual ::std::string getMyReviewUrl(::std::string const&, ::std::string const&) const = 0;

    // vIndex: 7
    virtual ::std::string getCreateReviewUrl(::std::string const&) const = 0;

    // vIndex: 8
    virtual ::Bedrock::Http::Method getItemIdHttpRequestMethod() const = 0;

    // vIndex: 9
    virtual void addAuthTokenHeader(::Bedrock::Http::RequestBuilder&, ::ServiceClient const&) const = 0;

    // vIndex: 10
    virtual void addETagHeader(::Bedrock::Http::RequestBuilder&, ::std::string const&) const = 0;

    // vIndex: 11
    virtual void
    setItemIdPostBody(::Bedrock::Http::RequestBuilder&, ::std::string const&, ::std::string const&) const = 0;

    // vIndex: 12
    virtual void setCreateReviewBody(::Bedrock::Http::RequestBuilder&, ::CreateReviewParams const&) const = 0;

    // vIndex: 13
    virtual bool usePascalCase() const = 0;

    // vIndex: 14
    virtual ::std::string parseCreatorId(::Json::Value const&) const = 0;

    // vIndex: 15
    virtual void parseETag(::Json::Value const&, ::std::string&) const = 0;

    // vIndex: 16
    virtual ::std::string parseFriendlyId(::Json::Value const&) const = 0;

    // vIndex: 17
    virtual ::std::string parseOneStoreId(::Json::Value const&) const = 0;

    // vIndex: 18
    virtual ::Json::Value const& prepareSearchResponse(::Json::Value const&, int&, ::SearchRequestURLType) const = 0;

    // vIndex: 19
    virtual ::Json::Value const& prepareItemDataResponse(::Json::Value const&) const = 0;

    // vIndex: 20
    virtual ::std::unique_ptr<::ReviewSummaryData> reviewSummaryDataFromJson(::Json::Value const&) const = 0;

    // vIndex: 21
    virtual ::RatingData parseRatingData(::Json::Value const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
