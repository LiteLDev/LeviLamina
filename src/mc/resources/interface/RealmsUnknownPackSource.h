#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackType.h"

class RealmsUnknownPackSource : public ::PackSource {
public:
    // prevent constructor by default
    RealmsUnknownPackSource& operator=(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RealmsUnknownPackSource@@UEAA@XZ
    virtual ~RealmsUnknownPackSource() = default;

    // vIndex: 1, symbol: ?forEachPackConst@RealmsUnknownPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const;

    // vIndex: 2, symbol: ?forEachPack@RealmsUnknownPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    virtual void forEachPack(std::function<void(class Pack&)> callback);

    // vIndex: 3, symbol: ?getPackOrigin@RealmsUnknownPackSource@@UEBA?AW4PackOrigin@@XZ
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4, symbol: ?getPackType@RealmsUnknownPackSource@@UEBA?AW4PackType@@XZ
    virtual ::PackType getPackType() const;

    // vIndex: 5, symbol:
    // ?load@RealmsUnknownPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
