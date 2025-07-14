#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class DirectoryPackSource;
class IWorldTemplateManager;
class InPackagePackSource;
class PackSource;
class WorldHistoryPackSource;
class WorldTemplateCollectionView;
class WorldTemplatePackSource;
struct PackIdVersion;
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class IPackSourceFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPackSourceFactory() = default;

    // vIndex: 2
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const&,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    ) = 0;

    // vIndex: 1
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::std::unique_ptr<::WorldTemplateCollectionView>,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    ) = 0;

    // vIndex: 3
    virtual ::WorldTemplatePackSource* getWorldTemplatePackSource(::mce::UUID const&, ::PackType) const = 0;

    // vIndex: 4
    virtual ::DirectoryPackSource& createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin, bool) = 0;

    // vIndex: 5
    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const = 0;

    // vIndex: 6
    virtual ::InPackagePackSource& createInPackagePackSource(::PackType) = 0;

    // vIndex: 7
    virtual ::InPackagePackSource* getInPackagePackSource(::PackType) = 0;

    // vIndex: 8
    virtual ::WorldHistoryPackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType) = 0;

    // vIndex: 9
    virtual ::WorldHistoryPackSource* getWorldHistoryPackSource(::Core::Path const&, ::PackType) const = 0;

    // vIndex: 10
    virtual ::std::unique_ptr<::CompositePackSource> createCompositePackSource(::std::vector<::PackSource*>) = 0;

    // vIndex: 11
    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const&) const = 0;

    // vIndex: 12
    virtual void removeFromDirectoryPackSource(::Core::Path const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
