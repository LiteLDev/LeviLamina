#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class DirectoryPackSource;
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
namespace Realms { class RealmsServicePackSource; }
namespace mce { class UUID; }
// clang-format on

class IPackSourceFactory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackSourceFactory() /*override*/;

#ifdef LL_PLAT_C
    virtual ::TreatmentPackSource& createTreatmentPackSource(::Core::Path const&, ::PackType) = 0;

    virtual ::TreatmentPackSource* getTreatmentPackSource(::Core::Path const&, ::PackType) const = 0;

    virtual void removeFromTreatmentPackSource(::Core::Path const&) = 0;

#endif
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const&,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    ) = 0;

    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::std::unique_ptr<::WorldTemplateCollectionView>,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    ) = 0;

    virtual ::WorldTemplatePackSource* getWorldTemplatePackSource(::mce::UUID const&, ::PackType) const = 0;

    virtual ::DirectoryPackSource& createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin, bool) = 0;

    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const = 0;

    virtual ::InPackagePackSource& createInPackagePackSource(::PackType) = 0;

    virtual ::InPackagePackSource* getInPackagePackSource(::PackType) = 0;

    virtual ::WorldHistoryPackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType) = 0;

    virtual ::WorldHistoryPackSource* getWorldHistoryPackSource(::Core::Path const&, ::PackType) const = 0;

    virtual ::std::unique_ptr<::CompositePackSource> createCompositePackSource(::std::vector<::PackSource*>) = 0;

    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const&) const = 0;

    virtual void removeFromDirectoryPackSource(::Core::Path const&) = 0;

    virtual ::std::unique_ptr<::Realms::RealmsServicePackSource>
    createRealmsServicePackSource(int64, ::PackType, ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
