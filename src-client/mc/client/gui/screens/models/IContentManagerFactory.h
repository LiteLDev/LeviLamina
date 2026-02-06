#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CompositePackSource;
class IContentCatalogPackSource;
class Pack;
class PackSource;
struct CachedHostPackIdProvider;
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

class IContentManagerFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentManagerFactory() = default;

    virtual ::std::unique_ptr<::WorldContentSource> createWorldContentSource() const = 0;

    virtual ::std::unique_ptr<::WorldTemplateSource> createWorldTemplateSource() const = 0;

    virtual ::std::unique_ptr<::InvalidResourceSource>
    createInvalidResourceSource(::InvalidPacksFilterGroup const&) const = 0;

    virtual ::std::unique_ptr<::ContentSource> createWorldPackManagerContentSource(
        ::std::string const&,
        ::Core::PathBuffer<::std::string>,
        ::ContentFlags,
        ::std::vector<::PackManagerContentSourceData>&&,
        ::std::weak_ptr<::CachedHostPackIdProvider>
    ) const = 0;

    virtual ::std::unique_ptr<::ContentSource> createRealmPackManagerContentSource(
        int64,
        ::ContentFlags,
        ::std::vector<::PackManagerContentSourceData>&&
    ) const = 0;

    virtual ::std::unique_ptr<::ContentSource> createRealmsWorldPackManagerContentSource(
        ::Realms::RealmId,
        ::std::vector<::Realms::Content>&&,
        ::ContentFlags,
        ::std::vector<::PackManagerContentSourceData>&&
    ) const = 0;

    virtual ::std::unique_ptr<::ContentSource> createPackManagerContentSource(
        ::ContentType,
        ::ContentFlags,
        ::std::vector<::PackManagerContentSourceData>&&
    ) const = 0;

    virtual ::PackSource* getInPackagePackSource(::PackType) const = 0;

    virtual ::PackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const = 0;

    virtual ::PackSource& createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin) const = 0;

    virtual ::PackSource& createWorldTemplatePackSource(::mce::UUID const&, ::PackType, ::PackOrigin) const = 0;

    virtual ::IContentCatalogPackSource&
    createContentCatalogPackSource(::std::weak_ptr<::ContentManagerUtils::ISourcesAsyncReloader>&&, bool) const = 0;

    virtual ::PackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType) const = 0;

    virtual ::RealmsUnknownPackSources& getRealmsUnknownPackSources() const = 0;

    virtual ::std::unique_ptr<::Realms::RealmsServicePackSource> createRealmsServicePackSource(
        int64,
        ::PackType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&&
    ) const = 0;

    virtual ::std::unique_ptr<::CompositePackSource> createCompositePackSource(::std::vector<::PackSource*>) const = 0;

    virtual bool allowsResourcePackDevelopment() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::AppPlatform> getPlatform() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
