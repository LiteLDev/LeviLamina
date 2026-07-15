#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentManagerFactoryArgs.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/IContentManagerFactory.h"
#include "mc/client/gui/screens/models/IPackManagerContentQueries.h"
#include "mc/client/resources/ContentCatalogPackSource.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CachedHostPackIdProvider;
class CompositePackSource;
class ContentTierInfo;
class IContentTierManager;
class Pack;
class PackSource;
class StoreCatalogRepository;
struct ContentSource;
struct InvalidPacksFilterGroup;
struct InvalidResourceSource;
struct PackManagerContentSourceData;
struct RealmsUnknownPackSources;
struct WorldContentSource;
struct WorldTemplateSource;
namespace ContentManagerUtils { class ISourcesAsyncReloader; }
namespace Core { class Path; }
namespace Realms { class RealmsServicePackSource; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
namespace mce { class UUID; }
// clang-format on

class ContentManagerFactoryImpl : public ::IContentManagerFactory {
public:
    // ContentManagerFactoryImpl inner types declare
    // clang-format off
    class PackManagerContentQueriesImpl;
    // clang-format on

    // ContentManagerFactoryImpl inner types define
    class PackManagerContentQueriesImpl : public ::IPackManagerContentQueries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::StoreCatalogRepository>>       mStoreCatalog;
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>> mContentTierManager;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::ContentTierInfo getContentTierInfo() const /*override*/;

        virtual ::std::string const* getStoreCatalogItemAvailableDateByPackIdentityAndType(::mce::UUID const&) const
            /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::ContentManagerFactoryArgs> mArgs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::WorldContentSource> createWorldContentSource() const /*override*/;

    virtual ::std::unique_ptr<::WorldTemplateSource> createWorldTemplateSource() const /*override*/;

    virtual ::std::unique_ptr<::InvalidResourceSource>
    createInvalidResourceSource(::InvalidPacksFilterGroup const&) const /*override*/;

    virtual ::std::unique_ptr<::ContentSource> createWorldPackManagerContentSource(
        ::std::string const&,
        ::Core::PathBuffer<::std::string>,
        ::ContentFlags,
        ::std::vector<::PackManagerContentSourceData>&&,
        ::std::weak_ptr<::CachedHostPackIdProvider>
    ) const /*override*/;

    virtual ::std::unique_ptr<::ContentSource>
    createRealmPackManagerContentSource(int64, ::ContentFlags, ::std::vector<::PackManagerContentSourceData>&&) const
        /*override*/;

    virtual ::std::unique_ptr<::ContentSource> createRealmsWorldPackManagerContentSource(
        ::Realms::RealmId,
        ::std::vector<::Realms::Content>&&,
        ::ContentFlags,
        ::std::vector<::PackManagerContentSourceData>&&
    ) const /*override*/;

    virtual ::std::unique_ptr<::ContentSource>
    createPackManagerContentSource(::ContentType, ::ContentFlags, ::std::vector<::PackManagerContentSourceData>&&) const
        /*override*/;

    virtual ::std::unique_ptr<::CompositePackSource> createCompositePackSource(::std::vector<::PackSource*>) const
        /*override*/;

    virtual ::PackSource* getInPackagePackSource(::PackType) const /*override*/;

    virtual ::PackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const /*override*/;

    virtual ::PackSource& createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin) const /*override*/;

    virtual ::PackSource& createWorldTemplatePackSource(::mce::UUID const&, ::PackType, ::PackOrigin) const
        /*override*/;

    virtual ::ContentCatalogPackSource&
    createContentCatalogPackSource(::std::weak_ptr<::ContentManagerUtils::ISourcesAsyncReloader>&&, bool) const
        /*override*/;

    virtual ::PackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType) const /*override*/;

    virtual ::RealmsUnknownPackSources& getRealmsUnknownPackSources() const /*override*/;

    virtual ::std::unique_ptr<::Realms::RealmsServicePackSource>
    createRealmsServicePackSource(int64, ::PackType, ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&&) const
        /*override*/;

    virtual bool allowsResourcePackDevelopment() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::AppPlatform> getPlatform() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
