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
    PackSourceFactory& operator=(PackSourceFactory const&) = delete;
    PackSourceFactory(PackSourceFactory const&)            = delete;
    PackSourceFactory()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?createWorldTemplatePackSource@PackSourceFactory@@UEAAAEAVWorldTemplatePackSource@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVWorldTemplateManager@@@Bedrock@@@gsl@@AEBVUUID@mce@@W4PackType@@W4PackOrigin@@@Z
    virtual class WorldTemplatePackSource& createWorldTemplatePackSource(
        gsl::not_null<class Bedrock::NonOwnerPointer<class WorldTemplateManager const>> const&,
        class mce::UUID const&,
        ::PackType,
        ::PackOrigin
    );

    // vIndex: 2, symbol:
    // ?getWorldTemplatePackSource@PackSourceFactory@@UEBAPEAVWorldTemplatePackSource@@AEBVUUID@mce@@W4PackType@@@Z
    virtual class WorldTemplatePackSource* getWorldTemplatePackSource(class mce::UUID const&, ::PackType) const;

    // vIndex: 3, symbol:
    // ?createDirectoryPackSource@PackSourceFactory@@UEAAAEAVDirectoryPackSource@@AEBVPath@Core@@W4PackType@@W4PackOrigin@@_N@Z
    virtual class DirectoryPackSource&
    createDirectoryPackSource(class Core::Path const&, ::PackType, ::PackOrigin, bool);

    // vIndex: 4, symbol:
    // ?getDirectoryPackSource@PackSourceFactory@@UEBAPEAVDirectoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
    virtual class DirectoryPackSource* getDirectoryPackSource(class Core::Path const&, ::PackType) const;

    // vIndex: 5, symbol: ?createInPackagePackSource@PackSourceFactory@@UEAAAEAVInPackagePackSource@@W4PackType@@@Z
    virtual class InPackagePackSource& createInPackagePackSource(::PackType);

    // vIndex: 6, symbol: ?getInPackagePackSource@PackSourceFactory@@UEAAPEAVInPackagePackSource@@W4PackType@@@Z
    virtual class InPackagePackSource* getInPackagePackSource(::PackType);

    // vIndex: 7, symbol:
    // ?createWorldHistoryPackSource@PackSourceFactory@@UEAAAEAVWorldHistoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
    virtual class WorldHistoryPackSource& createWorldHistoryPackSource(class Core::Path const&, ::PackType);

    // vIndex: 8, symbol:
    // ?getWorldHistoryPackSource@PackSourceFactory@@UEBAPEAVWorldHistoryPackSource@@AEBVPath@Core@@W4PackType@@@Z
    virtual class WorldHistoryPackSource* getWorldHistoryPackSource(class Core::Path const&, ::PackType) const;

    // vIndex: 9, symbol:
    // ?getDirectoryPackSourceContaining@PackSourceFactory@@UEBAPEAVDirectoryPackSource@@AEBUPackIdVersion@@@Z
    virtual class DirectoryPackSource* getDirectoryPackSourceContaining(struct PackIdVersion const&) const;

    // vIndex: 10, symbol: ?removeFromDirectoryPackSource@PackSourceFactory@@UEAAXAEBVPath@Core@@@Z
    virtual void removeFromDirectoryPackSource(class Core::Path const&);

    // vIndex: 11, symbol:
    // ?createDynamicPackagePackSource@PackSourceFactory@@UEAAAEAVInPackagePackSource@@W4PackType@@@Z
    virtual class InPackagePackSource& createDynamicPackagePackSource(::PackType);

    // vIndex: 12, symbol: ?getDynamicPackagePackSource@PackSourceFactory@@UEAAPEAVInPackagePackSource@@W4PackType@@@Z
    virtual class InPackagePackSource* getDynamicPackagePackSource(::PackType);

    // vIndex: 13, symbol:
    // ?setDynamicPackagePacks@PackSourceFactory@@UEAAXAEBV?$shared_ptr@VIDynamicPackagePacks@@@std@@@Z
    virtual void setDynamicPackagePacks(std::shared_ptr<class IDynamicPackagePacks> const&);

    // vIndex: 14, symbol:
    // ?setDynamicPackageRoot@PackSourceFactory@@UEAAXV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
    virtual void setDynamicPackageRoot(class Core::PathBuffer<std::string>);

    // symbol: ??1PackSourceFactory@@UEAA@XZ
    MCVAPI ~PackSourceFactory();

    // symbol: ??0PackSourceFactory@@QEAA@AEBV?$shared_ptr@VIInPackagePacks@@@std@@@Z
    MCAPI PackSourceFactory(std::shared_ptr<class IInPackagePacks> const&);

    // NOLINTEND
};
