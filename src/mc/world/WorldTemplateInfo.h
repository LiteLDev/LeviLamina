#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

struct WorldTemplateInfo {

public:
    // prevent constructor by default
    WorldTemplateInfo& operator=(WorldTemplateInfo const&) = delete;
    WorldTemplateInfo(WorldTemplateInfo const&)            = delete;
    WorldTemplateInfo()                                    = delete;

public:
    /**
     * @symbol ??0WorldTemplateInfo\@\@QEAA\@AEBVWorldTemplatePackManifest\@\@\@Z
     */
    MCAPI WorldTemplateInfo(class WorldTemplatePackManifest const&); // NOLINT
    /**
     * @symbol ?addWorldTemplatePackSource\@WorldTemplateInfo\@\@QEAAXAEAVWorldTemplatePackSource\@\@\@Z
     */
    MCAPI void addWorldTemplatePackSource(class WorldTemplatePackSource&); // NOLINT
    /**
     * @symbol ?getPackManifest\@WorldTemplateInfo\@\@QEBAAEBVWorldTemplatePackManifest\@\@XZ
     */
    MCAPI class WorldTemplatePackManifest const& getPackManifest() const; // NOLINT
    /**
     * @symbol
     * ?getWorldName\@WorldTemplateInfo\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getWorldName() const; // NOLINT
    /**
     * @symbol
     * ?getWorldPath\@WorldTemplateInfo\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const& getWorldPath() const; // NOLINT
    /**
     * @symbol ?isVirtualCatalogItem\@WorldTemplateInfo\@\@QEBA_NXZ
     */
    MCAPI bool isVirtualCatalogItem() const; // NOLINT
    /**
     * @symbol ??1WorldTemplateInfo\@\@QEAA\@XZ
     */
    MCAPI ~WorldTemplateInfo(); // NOLINT
};
