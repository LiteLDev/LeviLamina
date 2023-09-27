#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackType.h"

class WorldHistoryPackSource : public ::PackSource {
public:
    // prevent constructor by default
    WorldHistoryPackSource& operator=(WorldHistoryPackSource const&);
    WorldHistoryPackSource(WorldHistoryPackSource const&);
    WorldHistoryPackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?forEachPackConst@WorldHistoryPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
    virtual void forEachPackConst(std::function<void(class Pack const&)>) const;

    // vIndex: 2, symbol: ?forEachPack@WorldHistoryPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    virtual void forEachPack(std::function<void(class Pack&)>);

    // vIndex: 3, symbol: ?getPackOrigin@WorldHistoryPackSource@@UEBA?AW4PackOrigin@@XZ
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4, symbol: ?getPackType@WorldHistoryPackSource@@UEBA?AW4PackType@@XZ
    virtual ::PackType getPackType() const;

    // vIndex: 5, symbol:
    // ?load@WorldHistoryPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport
    load(class IPackManifestFactory&, Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addPackFromHistoryPack@WorldHistoryPackSource@@AEAAXAEBVWorldPackHistory@@@Z
    MCAPI void _addPackFromHistoryPack(class WorldPackHistory const&);

    // symbol:
    // ?_createPackFromHistoryPack@WorldHistoryPackSource@@AEAA?AV?$unique_ptr@VPack@@U?$default_delete@VPack@@@std@@@std@@AEBVWorldPackHistory@@@Z
    MCAPI std::unique_ptr<class Pack> _createPackFromHistoryPack(class WorldPackHistory const&);

    // symbol: ?_readWorldHistoryFile@WorldHistoryPackSource@@AEAA_NXZ
    MCAPI bool _readWorldHistoryFile();

    // NOLINTEND
};
