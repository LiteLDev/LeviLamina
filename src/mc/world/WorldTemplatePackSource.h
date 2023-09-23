#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"
#include "mc/resources/interface/DirectoryPackSource.h"

class WorldTemplatePackSource : public ::DirectoryPackSource {
public:
    // prevent constructor by default
    WorldTemplatePackSource& operator=(WorldTemplatePackSource const&);
    WorldTemplatePackSource(WorldTemplatePackSource const&);
    WorldTemplatePackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 5, symbol:
    // ?load@WorldTemplatePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport
    load(class IPackManifestFactory&, gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);

    // NOLINTEND
};
