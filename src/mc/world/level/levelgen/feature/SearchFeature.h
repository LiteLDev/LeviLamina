#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SearchFeature : public ::IFeature {
public:
    // prevent constructor by default
    SearchFeature& operator=(SearchFeature const&);
    SearchFeature(SearchFeature const&);
    SearchFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SearchFeature@@UEAA@XZ
    virtual ~SearchFeature() = default;

    // vIndex: 1, symbol:
    // ?place@SearchFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND
};
