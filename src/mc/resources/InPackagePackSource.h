#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackType.h"

class InPackagePackSource : public ::PackSource {
public:
    // prevent constructor by default
    InPackagePackSource& operator=(InPackagePackSource const&);
    InPackagePackSource(InPackagePackSource const&);
    InPackagePackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InPackagePackSource@@UEAA@XZ
    virtual ~InPackagePackSource() = default;

    // vIndex: 1, symbol: ?forEachPackConst@InPackagePackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const;

    // vIndex: 2, symbol: ?forEachPack@InPackagePackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    virtual void forEachPack(std::function<void(class Pack&)> callback);

    // vIndex: 3, symbol: ?getPackOrigin@InPackagePackSource@@UEBA?AW4PackOrigin@@XZ
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4, symbol: ?getPackType@InPackagePackSource@@UEBA?AW4PackType@@XZ
    virtual ::PackType getPackType() const;

    // vIndex: 5, symbol:
    // ?load@InPackagePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // symbol: ??0InPackagePackSource@@QEAA@AEBV?$shared_ptr@VIInPackagePacks@@@std@@W4PackType@@@Z
    MCAPI InPackagePackSource(std::shared_ptr<class IInPackagePacks> const& packs, ::PackType packType);

    // NOLINTEND
};
