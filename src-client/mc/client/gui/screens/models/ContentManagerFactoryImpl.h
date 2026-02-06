#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/client/resources/ContentCatalogPackSource.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentManagerFactoryArgs.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/IContentManagerFactory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CompositePackSource;
class ContentCatalogPackSource;
class Pack;
class PackSource;
struct CachedHostPackIdProvider;
struct ContentSource;
struct InvalidPacksFilterGroup;
struct InvalidResourceSource;
struct PackManagerContentSourceArgs;
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
    struct PackManagerContentQueriesImpl;
    // clang-format on

    // ContentManagerFactoryImpl inner types define
    struct PackManagerContentQueriesImpl {};

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
    createInvalidResourceSource(::InvalidPacksFilterGroup const& filter) const /*override*/;

    virtual ::std::unique_ptr<::ContentSource> createWorldPackManagerContentSource(
        ::std::string const&                            worldID,
        ::Core::PathBuffer<::std::string>               worldPath,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data,
        ::std::weak_ptr<::CachedHostPackIdProvider>     provider
    ) const /*override*/;

    virtual ::std::unique_ptr<::ContentSource> createRealmPackManagerContentSource(
        int64                                           realmID,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const /*override*/;

    virtual ::std::unique_ptr<::ContentSource> createRealmsWorldPackManagerContentSource(
        ::Realms::RealmId                               realmId,
        ::std::vector<::Realms::Content>&&              serviceAppliedContent,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const /*override*/;

    virtual ::std::unique_ptr<::ContentSource> createPackManagerContentSource(
        ::ContentType                                   type,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const /*override*/;

    virtual ::std::unique_ptr<::CompositePackSource>
    createCompositePackSource(::std::vector<::PackSource*> sources) const /*override*/;

    virtual ::PackSource* getInPackagePackSource(::PackType type) const /*override*/;

    virtual ::PackSource* getDirectoryPackSource(::Core::Path const& path, ::PackType type) const /*override*/;

    virtual ::PackSource&
    createDirectoryPackSource(::Core::Path const& path, ::PackType type, ::PackOrigin origin) const /*override*/;

    virtual ::PackSource&
    createWorldTemplatePackSource(::mce::UUID const& id, ::PackType type, ::PackOrigin origin) const /*override*/;

    virtual ::ContentCatalogPackSource& createContentCatalogPackSource(
        ::std::weak_ptr<::ContentManagerUtils::ISourcesAsyncReloader>&& weakSourcesAsyncReloader,
        bool                                                            enabled
    ) const /*override*/;

    virtual ::PackSource& createWorldHistoryPackSource(::Core::Path const& path, ::PackType type) const /*override*/;

    virtual ::RealmsUnknownPackSources& getRealmsUnknownPackSources() const /*override*/;

    virtual ::std::unique_ptr<::Realms::RealmsServicePackSource> createRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    ) const /*override*/;

    virtual bool allowsResourcePackDevelopment() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::AppPlatform> getPlatform() const /*override*/;

    virtual ~ContentManagerFactoryImpl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PackManagerContentSourceArgs createPackManagerArgs(
        ::ContentType                                   type,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::WorldContentSource> $createWorldContentSource() const;

    MCAPI ::std::unique_ptr<::WorldTemplateSource> $createWorldTemplateSource() const;

    MCAPI ::std::unique_ptr<::InvalidResourceSource>
    $createInvalidResourceSource(::InvalidPacksFilterGroup const& filter) const;

    MCAPI ::std::unique_ptr<::ContentSource> $createWorldPackManagerContentSource(
        ::std::string const&                            worldID,
        ::Core::PathBuffer<::std::string>               worldPath,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data,
        ::std::weak_ptr<::CachedHostPackIdProvider>     provider
    ) const;

    MCAPI ::std::unique_ptr<::ContentSource> $createRealmPackManagerContentSource(
        int64                                           realmID,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const;

    MCAPI ::std::unique_ptr<::ContentSource> $createRealmsWorldPackManagerContentSource(
        ::Realms::RealmId                               realmId,
        ::std::vector<::Realms::Content>&&              serviceAppliedContent,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const;

    MCAPI ::std::unique_ptr<::ContentSource> $createPackManagerContentSource(
        ::ContentType                                   type,
        ::ContentFlags                                  flags,
        ::std::vector<::PackManagerContentSourceData>&& data
    ) const;

    MCAPI ::std::unique_ptr<::CompositePackSource>
    $createCompositePackSource(::std::vector<::PackSource*> sources) const;

    MCAPI ::PackSource* $getInPackagePackSource(::PackType type) const;

    MCAPI ::PackSource* $getDirectoryPackSource(::Core::Path const& path, ::PackType type) const;

    MCAPI ::PackSource&
    $createDirectoryPackSource(::Core::Path const& path, ::PackType type, ::PackOrigin origin) const;

    MCAPI ::PackSource&
    $createWorldTemplatePackSource(::mce::UUID const& id, ::PackType type, ::PackOrigin origin) const;

    MCAPI ::ContentCatalogPackSource& $createContentCatalogPackSource(
        ::std::weak_ptr<::ContentManagerUtils::ISourcesAsyncReloader>&& weakSourcesAsyncReloader,
        bool                                                            enabled
    ) const;

    MCAPI ::PackSource& $createWorldHistoryPackSource(::Core::Path const& path, ::PackType type) const;

    MCAPI ::RealmsUnknownPackSources& $getRealmsUnknownPackSources() const;

    MCAPI ::std::unique_ptr<::Realms::RealmsServicePackSource> $createRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    ) const;

    MCAPI bool $allowsResourcePackDevelopment() const;

    MCAPI ::Bedrock::NonOwnerPointer<::AppPlatform> $getPlatform() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
