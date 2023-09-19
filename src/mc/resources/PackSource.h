#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"

class PackSource {
public:
    // prevent constructor by default
    PackSource& operator=(PackSource const&);
    PackSource(PackSource const&);
    PackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: ?forEachPackConst@RealmsUnknownPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
    virtual void forEachPackConst(std::function<void(class Pack const&)>) const = 0;

    // vIndex: 2, symbol: ?forEachPack@RealmsUnknownPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    virtual void forEachPack(std::function<void(class Pack&)>) = 0;

    // vIndex: 3, symbol: ?getPackOrigin@PackSource@@UEBA?AW4PackOrigin@@XZ
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4, symbol: ?getPackType@PackSource@@UEBA?AW4PackType@@XZ
    virtual ::PackType getPackType() const;

    // vIndex: 5, symbol:
    // ?load@RealmsUnknownPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport
    load(class IPackManifestFactory&, gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&) = 0;

    // symbol: ??1PackSource@@UEAA@XZ
    MCVAPI ~PackSource();

    // symbol: ?fetchPack@PackSource@@QEAAPEAVPack@@AEBUPackIdVersion@@@Z
    MCAPI class Pack* fetchPack(struct PackIdVersion const&);

    // symbol:
    // ?resolveUpgradeDependencies@PackSource@@QEAAXAEAVPack@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCAPI void
    resolveUpgradeDependencies(class Pack&, gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);

    // NOLINTEND
};
