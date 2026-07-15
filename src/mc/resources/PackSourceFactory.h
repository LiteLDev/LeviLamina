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
class DirectoryPackSource;
class IInPackagePacks;
class IPackIOProvider;
class IWorldTemplateManager;
class InPackagePackSource;
class Pack;
class PackSource;
class TreatmentPackSource;
class WorldHistoryPackSource;
class WorldTemplateCollectionView;
class WorldTemplatePackSource;
struct PackIdVersion;
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
namespace Realms { class RealmsServicePackSource; }
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
    virtual ~PackSourceFactory() /*override*/;

#ifdef LL_PLAT_S
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const&,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::TreatmentPackSource&
    createTreatmentPackSource(::Core::Path const& path, ::PackType packType) /*override*/;

    virtual ::TreatmentPackSource* getTreatmentPackSource(::Core::Path const& path, ::PackType packType) const
        /*override*/;

    virtual void removeFromTreatmentPackSource(::Core::Path const& fullPathToPack) /*override*/;

    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const& worldTemplateManager,
        ::mce::UUID const&                                                  worldTemplateId,
        ::PackType                                                          packType,
        ::PackOrigin                                                        packOrigin
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::std::unique_ptr<::WorldTemplateCollectionView>,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::std::unique_ptr<::WorldTemplateCollectionView> view,
        ::mce::UUID const&                               worldTemplateId,
        ::PackType                                       packType,
        ::PackOrigin                                     packOrigin
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::WorldTemplatePackSource* getWorldTemplatePackSource(::mce::UUID const&, ::PackType) const /*override*/;
#else // LL_PLAT_C
    virtual ::WorldTemplatePackSource*
    getWorldTemplatePackSource(::mce::UUID const& worldTemplateId, ::PackType packType) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::DirectoryPackSource&
    createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin, bool) /*override*/;
#else // LL_PLAT_C
    virtual ::DirectoryPackSource& createDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const /*override*/;
#else // LL_PLAT_C
    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const& path, ::PackType packType) const
        /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::InPackagePackSource& createInPackagePackSource(::PackType) /*override*/;
#else // LL_PLAT_C
    virtual ::InPackagePackSource& createInPackagePackSource(::PackType packType) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::InPackagePackSource* getInPackagePackSource(::PackType) /*override*/;
#else // LL_PLAT_C
    virtual ::InPackagePackSource* getInPackagePackSource(::PackType packType) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::WorldHistoryPackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType) /*override*/;
#else // LL_PLAT_C
    virtual ::WorldHistoryPackSource&
    createWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::WorldHistoryPackSource* getWorldHistoryPackSource(::Core::Path const&, ::PackType) const /*override*/;
#else // LL_PLAT_C
    virtual ::WorldHistoryPackSource*
    getWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const&) const /*override*/;
#else // LL_PLAT_C
    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const& packId) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void removeFromDirectoryPackSource(::Core::Path const&) /*override*/;
#else // LL_PLAT_C
    virtual void removeFromDirectoryPackSource(::Core::Path const& fullPathToPack) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::std::unique_ptr<::Realms::RealmsServicePackSource> createRealmsServicePackSource(
        int64,
        ::PackType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&&
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::std::unique_ptr<::Realms::RealmsServicePackSource> createRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::std::unique_ptr<::CompositePackSource>
        createCompositePackSource(::std::vector<::PackSource*>) /*override*/;
#else // LL_PLAT_C
    virtual ::std::unique_ptr<::CompositePackSource>
    createCompositePackSource(::std::vector<::PackSource*> sources) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackSourceFactory(
        ::gsl::not_null<::std::shared_ptr<::IInPackagePacks> const>        inPackagePacks,
        ::std::unique_ptr<::IPackIOProvider>                               io,
        ::Bedrock::NotNullNonOwnerPtr<::PackCommand::IPackCommandPipeline> commands
    );

    MCAPI ::std::unique_ptr<::DirectoryPackSource> createOwnedDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    );

#ifdef LL_PLAT_C
    MCAPI void deleteDirectoryPackSourcesFromDirectory(::Core::Path const& directoryPath);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::IInPackagePacks> const>        inPackagePacks,
        ::std::unique_ptr<::IPackIOProvider>                               io,
        ::Bedrock::NotNullNonOwnerPtr<::PackCommand::IPackCommandPipeline> commands
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::TreatmentPackSource& $createTreatmentPackSource(::Core::Path const& path, ::PackType packType);

    MCAPI ::TreatmentPackSource* $getTreatmentPackSource(::Core::Path const& path, ::PackType packType) const;

    MCAPI void $removeFromTreatmentPackSource(::Core::Path const& fullPathToPack);

    MCAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const& worldTemplateManager,
        ::mce::UUID const&                                                  worldTemplateId,
        ::PackType                                                          packType,
        ::PackOrigin                                                        packOrigin
    );

    MCAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        ::std::unique_ptr<::WorldTemplateCollectionView> view,
        ::mce::UUID const&                               worldTemplateId,
        ::PackType                                       packType,
        ::PackOrigin                                     packOrigin
    );

    MCAPI ::WorldTemplatePackSource*
    $getWorldTemplatePackSource(::mce::UUID const& worldTemplateId, ::PackType packType) const;

    MCAPI ::DirectoryPackSource& $createDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    );

    MCAPI ::DirectoryPackSource* $getDirectoryPackSource(::Core::Path const& path, ::PackType packType) const;

    MCAPI ::InPackagePackSource& $createInPackagePackSource(::PackType packType);

    MCAPI ::InPackagePackSource* $getInPackagePackSource(::PackType packType);

    MCAPI ::WorldHistoryPackSource& $createWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType);

    MCAPI ::WorldHistoryPackSource*
    $getWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) const;

    MCAPI ::DirectoryPackSource* $getDirectoryPackSourceContaining(::PackIdVersion const& packId) const;

    MCAPI void $removeFromDirectoryPackSource(::Core::Path const& fullPathToPack);

    MCAPI ::std::unique_ptr<::Realms::RealmsServicePackSource> $createRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    );

    MCAPI ::std::unique_ptr<::CompositePackSource> $createCompositePackSource(::std::vector<::PackSource*> sources);
#endif


    // NOLINTEND
};
