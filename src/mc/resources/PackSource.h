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
    // vIndex: 0, symbol: ??1PackSource@@UEAA@XZ
    virtual ~PackSource();

    // vIndex: 1, symbol: ?forEachPackConst@CompositePackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const = 0;

    // vIndex: 2, symbol: ?forEachPack@CompositePackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    virtual void forEachPack(std::function<void(class Pack&)> callback) = 0;

    // vIndex: 3, symbol: ?getPackOrigin@PackSource@@UEBA?AW4PackOrigin@@XZ
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4, symbol: ?getPackType@PackSource@@UEBA?AW4PackType@@XZ
    virtual ::PackType getPackType() const;

    // vIndex: 5, symbol:
    // ?load@CompositePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    ) = 0;

    // symbol: ?fetchPack@PackSource@@QEAAPEAVPack@@AEBUPackIdVersion@@@Z
    MCAPI class Pack* fetchPack(struct PackIdVersion const& packId);

    // symbol:
    // ?resolveUpgradeDependencies@PackSource@@QEAAXAEAVPack@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCAPI void resolveUpgradeDependencies(
        class Pack&                                                         pack,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
