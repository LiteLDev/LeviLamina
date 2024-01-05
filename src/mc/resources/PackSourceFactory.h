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
    // vIndex: 0, symbol: ??1PackSourceFactory@@UEAA@XZ
    virtual ~PackSourceFactory();

    // vIndex: 1, symbol:
    // ?createWorldTemplatePackSource@PackSourceFactory@@UEAAAEAVWorldTemplatePackSource@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVWorldTemplateManager@@@Bedrock@@@gsl@@AEBVUUID@mce@@W4PackType@@W4PackOrigin@@@Z
    virtual class WorldTemplatePackSource& createWorldTemplatePackSource(
        Bedrock::NotNullNonOwnerPtr<class WorldTemplateManager const> const& worldTemplateManager,
        class mce::UUID const&                                               worldTemplateId,
        ::PackType                                                           packType,
        ::PackOrigin                                                         packOrigin
    );

    // vIndex: 2, symbol:
    // ?getWorldTemplatePackSource@PackSourceFactory@@UEBAPEAVWorldTemplatePackSource@@AEBVUUID@mce@@W4PackType@@@Z
    virtual class WorldTemplatePackSource*
    getWorldTemplatePackSource(class mce::UUID const& worldTemplateId, ::PackType packType) const;

    // vIndex: 3, symbol:
    // ?createDirectoryPackSource@PackSourceFactory@@UEAAAEAVDirectoryPackSource@@AEBVPath@Core@@W4PackType@@W4PackOrigin@@_N@Z
    virtual class DirectoryPackSource& createDirectoryPackSource(
        class Core::Path const& path,
        ::PackType              packType,
        ::PackOrigin            packOrigin,
        bool                    isDevDirectory = false
    );

    // vIndex: 4, symbol:
    // ?getDirectoryPackSource@PackSourceFactory@@UEBAPEAVDirectoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
    virtual class DirectoryPackSource* getDirectoryPackSource(class Core::Path const& path, ::PackType packType) const;

    // vIndex: 5, symbol: ?createInPackagePackSource@PackSourceFactory@@UEAAAEAVInPackagePackSource@@W4PackType@@@Z
    virtual class InPackagePackSource& createInPackagePackSource(::PackType packType);

    // vIndex: 6, symbol: ?getInPackagePackSource@PackSourceFactory@@UEAAPEAVInPackagePackSource@@W4PackType@@@Z
    virtual class InPackagePackSource* getInPackagePackSource(::PackType packType);

    // vIndex: 7, symbol:
    // ?createWorldHistoryPackSource@PackSourceFactory@@UEAAAEAVWorldHistoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
    virtual class WorldHistoryPackSource&
    createWorldHistoryPackSource(class Core::Path const& pathToWorld, ::PackType packType);

    // vIndex: 8, symbol:
    // ?getWorldHistoryPackSource@PackSourceFactory@@UEBAPEAVWorldHistoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
    virtual class WorldHistoryPackSource*
    getWorldHistoryPackSource(class Core::Path const& pathToWorld, ::PackType packType) const;

    // vIndex: 9, symbol:
    // ?getDirectoryPackSourceContaining@PackSourceFactory@@UEBAPEAVDirectoryPackSource@@AEBUPackIdVersion@@@Z
    virtual class DirectoryPackSource* getDirectoryPackSourceContaining(struct PackIdVersion const& packId) const;

    // vIndex: 10, symbol: ?removeFromDirectoryPackSource@PackSourceFactory@@UEAAXAEBVPath@Core@@@Z
    virtual void removeFromDirectoryPackSource(class Core::Path const& fullPathToPack);

    // vIndex: 11, symbol:
    // ?createDynamicPackagePackSource@PackSourceFactory@@UEAAAEAVInPackagePackSource@@W4PackType@@@Z
    virtual class InPackagePackSource& createDynamicPackagePackSource(::PackType packType);

    // vIndex: 12, symbol: ?getDynamicPackagePackSource@PackSourceFactory@@UEAAPEAVInPackagePackSource@@W4PackType@@@Z
    virtual class InPackagePackSource* getDynamicPackagePackSource(::PackType packType);

    // vIndex: 13, symbol:
    // ?setDynamicPackagePacks@PackSourceFactory@@UEAAXAEBV?$shared_ptr@VIDynamicPackagePacks@@@std@@@Z
    virtual void setDynamicPackagePacks(std::shared_ptr<class IDynamicPackagePacks> const&);

    // vIndex: 14, symbol:
    // ?setDynamicPackageRoot@PackSourceFactory@@UEAAXV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
    virtual void setDynamicPackageRoot(class Core::PathBuffer<std::string> path);

    // symbol: ??0PackSourceFactory@@QEAA@AEBV?$shared_ptr@VIInPackagePacks@@@std@@@Z
    MCAPI explicit PackSourceFactory(std::shared_ptr<class IInPackagePacks> const& inPackagePacks);

    // NOLINTEND
};
