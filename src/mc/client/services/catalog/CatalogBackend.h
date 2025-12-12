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
    virtual ~CatalogBackend() = default;

    virtual ::std::string const& getCachedFilePrefix() const = 0;

    virtual ::std::string getHostUrl() const = 0;

    virtual ::std::string getSearchUrl(::SearchRequestURLType) const = 0;

    virtual ::std::string getHydrateUrl(::std::string const&) const = 0;

    virtual ::std::string getReviewSummaryUrl(::std::string const&) const = 0;

    virtual ::std::string getMyReviewUrl(::std::string const&, ::std::string const&) const = 0;

    virtual ::std::string getCreateReviewUrl(::std::string const&) const = 0;

    virtual ::Bedrock::Http::Method getItemIdHttpRequestMethod() const = 0;

    virtual void addAuthTokenHeader(::Bedrock::Http::RequestBuilder&, ::ServiceClient const&) const = 0;

    virtual void addETagHeader(::Bedrock::Http::RequestBuilder&, ::std::string const&) const = 0;

    virtual void
    setItemIdPostBody(::Bedrock::Http::RequestBuilder&, ::std::string const&, ::std::string const&) const = 0;

    virtual void setCreateReviewBody(::Bedrock::Http::RequestBuilder&, ::CreateReviewParams const&) const = 0;

    virtual bool usePascalCase() const = 0;

    virtual ::std::string parseCreatorId(::Json::Value const&) const = 0;

    virtual void parseETag(::Json::Value const&, ::std::string&) const = 0;

    virtual ::std::string parseFriendlyId(::Json::Value const&) const = 0;

    virtual ::std::string parseOneStoreId(::Json::Value const&) const = 0;

    virtual ::Json::Value const& prepareSearchResponse(::Json::Value const&, int&, ::SearchRequestURLType) const = 0;

    virtual ::Json::Value const& prepareItemDataResponse(::Json::Value const&) const = 0;

    virtual ::std::unique_ptr<::ReviewSummaryData> reviewSummaryDataFromJson(::Json::Value const&) const = 0;

    virtual ::RatingData parseRatingData(::Json::Value const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
