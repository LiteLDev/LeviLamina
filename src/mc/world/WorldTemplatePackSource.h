#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"
#include "mc/resources/interface/DirectoryPackSource.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class WorldTemplatePackSource : public ::DirectoryPackSource {
public:
    // prevent constructor by default
    WorldTemplatePackSource& operator=(WorldTemplatePackSource const&) = delete;
    WorldTemplatePackSource(WorldTemplatePackSource const&)            = delete;
    WorldTemplatePackSource()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 5, symbol:
    // ?load@WorldTemplatePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport
    load(class IPackManifestFactory&, gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);

    // symbol:
    // ??0WorldTemplatePackSource@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@$$CBVWorldTemplateManager@@@Bedrock@@@gsl@@AEBVUUID@mce@@W4PackType@@W4PackOrigin@@@Z
    MCAPI WorldTemplatePackSource(
        gsl::not_null<class Bedrock::NonOwnerPointer<class WorldTemplateManager const>> const&,
        class mce::UUID const&,
        ::PackType,
        ::PackOrigin
    );

    // symbol: ?getWorldTemplateId@WorldTemplatePackSource@@QEBAAEBVUUID@mce@@XZ
    MCAPI class mce::UUID const& getWorldTemplateId() const;

    // NOLINTEND
};
