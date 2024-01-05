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
    // vIndex: 0, symbol: ??1DirectoryPackSource@@UEAA@XZ
    virtual ~DirectoryPackSource();

    // vIndex: 1, symbol: ?forEachPackConst@DirectoryPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const;

    // vIndex: 2, symbol: ?forEachPack@DirectoryPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    virtual void forEachPack(std::function<void(class Pack&)> callback);

    // vIndex: 3, symbol: ?getPackOrigin@DirectoryPackSource@@UEBA?AW4PackOrigin@@XZ
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4, symbol: ?getPackType@DirectoryPackSource@@UEBA?AW4PackType@@XZ
    virtual ::PackType getPackType() const;

    // vIndex: 5, symbol:
    // ?load@DirectoryPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // symbol: ??0DirectoryPackSource@@QEAA@AEBVPath@Core@@W4PackType@@W4PackOrigin@@_N@Z
    MCAPI DirectoryPackSource(
        class Core::Path const& path,
        ::PackType              packType,
        ::PackOrigin            packOrigin,
        bool                    isDeveloperDirectory
    );

    // symbol: ?checkAndRemoveIncompletePacks@DirectoryPackSource@@SAXAEBVPath@Core@@@Z
    MCAPI static void checkAndRemoveIncompletePacks(class Core::Path const& path);

    // NOLINTEND
};
