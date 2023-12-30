#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

struct WorldTemplateInfo {
public:
    // prevent constructor by default
    WorldTemplateInfo& operator=(WorldTemplateInfo const&);
    WorldTemplateInfo(WorldTemplateInfo const&);
    WorldTemplateInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0WorldTemplateInfo@@QEAA@AEBVWorldTemplatePackManifest@@@Z
    MCAPI explicit WorldTemplateInfo(class WorldTemplatePackManifest const& manifest);

    // symbol: ?addWorldTemplatePackSource@WorldTemplateInfo@@QEAAXAEAVWorldTemplatePackSource@@@Z
    MCAPI void addWorldTemplatePackSource(class WorldTemplatePackSource& source);

    // symbol: ?getPackManifest@WorldTemplateInfo@@QEBAAEBVWorldTemplatePackManifest@@XZ
    MCAPI class WorldTemplatePackManifest const& getPackManifest() const;

    // symbol: ?getWorldName@WorldTemplateInfo@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getWorldName() const;

    // symbol:
    // ?getWorldPath@WorldTemplateInfo@@QEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> const& getWorldPath() const;

    // symbol: ?isVirtualCatalogItem@WorldTemplateInfo@@QEBA_NXZ
    MCAPI bool isVirtualCatalogItem() const;

    // symbol: ??1WorldTemplateInfo@@QEAA@XZ
    MCAPI ~WorldTemplateInfo();

    // NOLINTEND
};
