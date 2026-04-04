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
class CachedHostPackIdProvider;
class CompositePackSource;
class IContentCatalogPackSource;
class Pack;
class PackSource;
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
    createInvalidResourceSource(::InvalidPacksFilterGroup const& filter) const = 0;

    virtual ::std::unique_ptr<::ContentSource> createWorldPackManagerContentSource(
        ::std::string const&                            worldID,
        ::Core::PathBuffer<::std::string>               worldPath,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data,
        ::std::weak_ptr<::CachedHostPackIdProvider>     provider
    ) const = 0;

    virtual ::std::unique_ptr<::ContentSource> createRealmPackManagerContentSource(
        int64                                           realmID,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const = 0;

    virtual ::std::unique_ptr<::ContentSource> createRealmsWorldPackManagerContentSource(
        ::Realms::RealmId                               realmId,
        ::std::vector<::Realms::Content>&&              serviceAppliedContent,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const = 0;

    virtual ::std::unique_ptr<::ContentSource> createPackManagerContentSource(
        ::ContentType                                   type,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const = 0;

    virtual ::PackSource* getInPackagePackSource(::PackType type) const = 0;

    virtual ::PackSource* getDirectoryPackSource(::Core::Path const& path, ::PackType type) const = 0;

    virtual ::PackSource&
    createDirectoryPackSource(::Core::Path const& path, ::PackType type, ::PackOrigin origin) const = 0;

    virtual ::PackSource&
    createWorldTemplatePackSource(::mce::UUID const& id, ::PackType type, ::PackOrigin origin) const = 0;

    virtual ::IContentCatalogPackSource& createContentCatalogPackSource(
        ::std::weak_ptr<::ContentManagerUtils::ISourcesAsyncReloader>&& weakSourcesAsyncReloader,
        bool                                                            enabled
    ) const = 0;

    virtual ::PackSource& createWorldHistoryPackSource(::Core::Path const& path, ::PackType type) const = 0;

    virtual ::RealmsUnknownPackSources& getRealmsUnknownPackSources() const = 0;

    virtual ::std::unique_ptr<::Realms::RealmsServicePackSource> createRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    ) const = 0;

    virtual ::std::unique_ptr<::CompositePackSource>
    createCompositePackSource(::std::vector<::PackSource*> sources) const = 0;

    virtual bool allowsResourcePackDevelopment() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::AppPlatform> getPlatform() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
