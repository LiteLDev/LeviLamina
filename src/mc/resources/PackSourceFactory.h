#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/RealmsUnknownPackSources.h"
#include "mc/resources/interface/IPackSourceFactory.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class ContentCatalogPackSource;
class DirectoryPackSource;
class IInPackagePacks;
class IPackIOProvider;
class IWorldTemplateManager;
class InPackagePackSource;
class PackSource;
class TreatmentPackSource;
class WorldHistoryPackSource;
class WorldTemplatePackSource;
struct PackIdVersion;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
namespace mce { class UUID; }
// clang-format on

class PackSourceFactory : public ::IPackSourceFactory {
public:
    // PackSourceFactory inner types declare
    // clang-format off
    template<typename T0> struct SourcesList;
    // clang-format on

    // PackSourceFactory inner types define
    template <typename T0>
    struct SourcesList {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mSubscriptions;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::shared_ptr<::ContentCatalogPackSource>>>
        mContentCatalogPackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::TreatmentPackSource>>>
        mTreatmentPackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::DirectoryPackSource>>>
        mDirectoryPackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::InPackagePackSource>>>
        mInPackagePackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::WorldHistoryPackSource>>>
        mWorldHistoryPackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::WorldTemplatePackSource>>>
                                                                         mWorldTemplatePackSources;
    ::ll::TypedStorage<8, 16, ::RealmsUnknownPackSources>                mRealmsUnknownPackSources;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IInPackagePacks>>      mInPackagePacksProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPackIOProvider> const> mIO;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PackCommand::IPackCommandPipeline>> mCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackSourceFactory() /*override*/;

    // vIndex: 1
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const& worldTemplateManager,
        ::mce::UUID const&                                                  worldTemplateId,
        ::PackType                                                          packType,
        ::PackOrigin                                                        packOrigin
    ) /*override*/;

    // vIndex: 2
    virtual ::WorldTemplatePackSource*
    getWorldTemplatePackSource(::mce::UUID const& worldTemplateId, ::PackType packType) const /*override*/;

    // vIndex: 3
    virtual ::DirectoryPackSource& createDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    ) /*override*/;

    // vIndex: 4
    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const& path, ::PackType packType) const
        /*override*/;

    // vIndex: 5
    virtual ::InPackagePackSource& createInPackagePackSource(::PackType packType) /*override*/;

    // vIndex: 6
    virtual ::InPackagePackSource* getInPackagePackSource(::PackType packType) /*override*/;

    // vIndex: 7
    virtual ::WorldHistoryPackSource&
    createWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) /*override*/;

    // vIndex: 8
    virtual ::WorldHistoryPackSource*
    getWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) const /*override*/;

    // vIndex: 10
    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const& packId) const /*override*/;

    // vIndex: 11
    virtual void removeFromDirectoryPackSource(::Core::Path const& fullPathToPack) /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::CompositePackSource>
    createCompositePackSource(::std::vector<::PackSource*> sources) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSourceFactory(
        ::gsl::not_null<::std::shared_ptr<::IInPackagePacks> const>        inPackagePacks,
        ::std::unique_ptr<::IPackIOProvider>                               io,
        ::Bedrock::NotNullNonOwnerPtr<::PackCommand::IPackCommandPipeline> commands
    );

    MCNAPI ::std::unique_ptr<::DirectoryPackSource> createOwnedDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::IInPackagePacks> const>        inPackagePacks,
        ::std::unique_ptr<::IPackIOProvider>                               io,
        ::Bedrock::NotNullNonOwnerPtr<::PackCommand::IPackCommandPipeline> commands
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
    MCNAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const& worldTemplateManager,
        ::mce::UUID const&                                                  worldTemplateId,
        ::PackType                                                          packType,
        ::PackOrigin                                                        packOrigin
    );

    MCNAPI ::WorldTemplatePackSource*
    $getWorldTemplatePackSource(::mce::UUID const& worldTemplateId, ::PackType packType) const;

    MCNAPI ::DirectoryPackSource& $createDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    );

    MCNAPI ::DirectoryPackSource* $getDirectoryPackSource(::Core::Path const& path, ::PackType packType) const;

    MCNAPI ::InPackagePackSource& $createInPackagePackSource(::PackType packType);

    MCNAPI ::InPackagePackSource* $getInPackagePackSource(::PackType packType);

    MCNAPI ::WorldHistoryPackSource&
    $createWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType);

    MCNAPI ::WorldHistoryPackSource*
    $getWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) const;

    MCNAPI ::DirectoryPackSource* $getDirectoryPackSourceContaining(::PackIdVersion const& packId) const;

    MCNAPI void $removeFromDirectoryPackSource(::Core::Path const& fullPathToPack);

    MCNAPI ::std::unique_ptr<::CompositePackSource> $createCompositePackSource(::std::vector<::PackSource*> sources);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
