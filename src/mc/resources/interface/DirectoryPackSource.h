#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class DirectoryPackSource : public ::PackSource {
public:
    // prevent constructor by default
    DirectoryPackSource& operator=(DirectoryPackSource const&);
    DirectoryPackSource(DirectoryPackSource const&);
    DirectoryPackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?forEachPackConst@DirectoryPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
    virtual void forEachPackConst(std::function<void(class Pack const&)>) const;

    // vIndex: 2, symbol: ?forEachPack@DirectoryPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    virtual void forEachPack(std::function<void(class Pack&)>);

    // vIndex: 3, symbol: ?getPackOrigin@DirectoryPackSource@@UEBA?AW4PackOrigin@@XZ
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4, symbol: ?getPackType@DirectoryPackSource@@UEBA?AW4PackType@@XZ
    virtual ::PackType getPackType() const;

    // vIndex: 5, symbol:
    // ?load@DirectoryPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport
    load(class IPackManifestFactory&, gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);

    // symbol: ??1DirectoryPackSource@@UEAA@XZ
    MCVAPI ~DirectoryPackSource();

    // symbol: ??0DirectoryPackSource@@QEAA@AEBVPath@Core@@W4PackType@@W4PackOrigin@@_N@Z
    MCAPI DirectoryPackSource(class Core::Path const&, ::PackType, ::PackOrigin, bool);

    // symbol: ?checkAndRemoveIncompletePacks@DirectoryPackSource@@SAXAEBVPath@Core@@@Z
    MCAPI static void checkAndRemoveIncompletePacks(class Core::Path const&);

    // NOLINTEND
};
