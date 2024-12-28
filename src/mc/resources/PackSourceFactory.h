#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/interface/IPackSourceFactory.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogPackSource;
class DirectoryPackSource;
class IDynamicPackagePacks;
class IInPackagePacks;
class InPackagePackSource;
class TreatmentPackSource;
class WorldHistoryPackSource;
class WorldTemplateManager;
class WorldTemplatePackSource;
struct PackIdVersion;
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class PackSourceFactory : public ::IPackSourceFactory {
public:
    // PackSourceFactory inner types declare
    // clang-format off
    struct RealmsUnknownPackSources;
    template<typename T0> struct SourcesList;
    // clang-format on

    // PackSourceFactory inner types define
    struct RealmsUnknownPackSources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk6acab2;
        ::ll::UntypedStorage<8, 8> mUnkb6d9cd;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealmsUnknownPackSources& operator=(RealmsUnknownPackSources const&);
        RealmsUnknownPackSources(RealmsUnknownPackSources const&);
        RealmsUnknownPackSources();
    };

    template <typename T0>
    struct SourcesList {
    public:
        // prevent constructor by default
        SourcesList& operator=(SourcesList const&);
        SourcesList(SourcesList const&);
        SourcesList();
    };

public:
    // member variables
    // NOLINTBEGIN
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
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::InPackagePackSource>>>
                                                                             mDynamicPackagePackSources;
    ::ll::TypedStorage<8, 16, ::PackSourceFactory::RealmsUnknownPackSources> mRealmsUnknownPackSources;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IInPackagePacks>>          mInPackagePacksProvider;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IDynamicPackagePacks>>     mDynamicPackagePacksProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceFactory& operator=(PackSourceFactory const&);
    PackSourceFactory(PackSourceFactory const&);
    PackSourceFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackSourceFactory() /*override*/;

    // vIndex: 1
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager const> const& worldTemplateManager,
        ::mce::UUID const&                                                 worldTemplateId,
        ::PackType                                                         packType,
        ::PackOrigin                                                       packOrigin
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

    // vIndex: 9
    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const& packId) const /*override*/;

    // vIndex: 10
    virtual void removeFromDirectoryPackSource(::Core::Path const& fullPathToPack) /*override*/;

    // vIndex: 11
    virtual ::InPackagePackSource& createDynamicPackagePackSource(::PackType packType) /*override*/;

    // vIndex: 12
    virtual ::InPackagePackSource* getDynamicPackagePackSource(::PackType packType) /*override*/;

    // vIndex: 13
    virtual void setDynamicPackagePacks(::std::shared_ptr<::IDynamicPackagePacks> const& dynamicPackagePacks
    ) /*override*/;

    // vIndex: 14
    virtual void setDynamicPackageRoot(::Core::PathBuffer<::std::string> path) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PackSourceFactory(::std::shared_ptr<::IInPackagePacks> const& inPackagePacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::IInPackagePacks> const& inPackagePacks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager const> const& worldTemplateManager,
        ::mce::UUID const&                                                 worldTemplateId,
        ::PackType                                                         packType,
        ::PackOrigin                                                       packOrigin
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

    MCAPI ::InPackagePackSource& $createDynamicPackagePackSource(::PackType packType);

    MCAPI ::InPackagePackSource* $getDynamicPackagePackSource(::PackType packType);

    MCAPI void $setDynamicPackagePacks(::std::shared_ptr<::IDynamicPackagePacks> const& dynamicPackagePacks);

    MCAPI void $setDynamicPackageRoot(::Core::PathBuffer<::std::string> path);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
