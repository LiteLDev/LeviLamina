#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class PackSourceFactory {
public:
    // prevent constructor by default
    PackSourceFactory& operator=(PackSourceFactory const&);
    PackSourceFactory(PackSourceFactory const&);
    PackSourceFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackSourceFactory();

    // vIndex: 1
    virtual class WorldTemplatePackSource& createWorldTemplatePackSource(
        Bedrock::NotNullNonOwnerPtr<class WorldTemplateManager const> const& worldTemplateManager,
        class mce::UUID const&                                               worldTemplateId,
        ::PackType                                                           packType,
        ::PackOrigin                                                         packOrigin
    );

    // vIndex: 2
    virtual class WorldTemplatePackSource*
    getWorldTemplatePackSource(class mce::UUID const& worldTemplateId, ::PackType packType) const;

    // vIndex: 3
    virtual class DirectoryPackSource& createDirectoryPackSource(
        class Core::Path const& path,
        ::PackType              packType,
        ::PackOrigin            packOrigin,
        bool                    isDevDirectory = false
    );

    // vIndex: 4
    virtual class DirectoryPackSource* getDirectoryPackSource(class Core::Path const& path, ::PackType packType) const;

    // vIndex: 5
    virtual class InPackagePackSource& createInPackagePackSource(::PackType packType);

    // vIndex: 6
    virtual class InPackagePackSource* getInPackagePackSource(::PackType packType);

    // vIndex: 7
    virtual class WorldHistoryPackSource&
    createWorldHistoryPackSource(class Core::Path const& pathToWorld, ::PackType packType);

    // vIndex: 8
    virtual class WorldHistoryPackSource*
    getWorldHistoryPackSource(class Core::Path const& pathToWorld, ::PackType packType) const;

    // vIndex: 9
    virtual class DirectoryPackSource* getDirectoryPackSourceContaining(struct PackIdVersion const& packId) const;

    // vIndex: 10
    virtual void removeFromDirectoryPackSource(class Core::Path const& fullPathToPack);

    // vIndex: 11
    virtual class InPackagePackSource& createDynamicPackagePackSource(::PackType packType);

    // vIndex: 12
    virtual class InPackagePackSource* getDynamicPackagePackSource(::PackType packType);

    // vIndex: 13
    virtual void setDynamicPackagePacks(std::shared_ptr<class IDynamicPackagePacks> const&);

    // vIndex: 14
    virtual void setDynamicPackageRoot(class Core::PathBuffer<std::string> path);

    MCAPI explicit PackSourceFactory(std::shared_ptr<class IInPackagePacks> const& inPackagePacks);

    // NOLINTEND
};
