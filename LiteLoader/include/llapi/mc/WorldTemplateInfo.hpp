/**
 * @file  WorldTemplateInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure WorldTemplateInfo.
 *
 */
struct WorldTemplateInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEINFO
public:
    struct WorldTemplateInfo& operator=(struct WorldTemplateInfo const &) = delete;
    WorldTemplateInfo(struct WorldTemplateInfo const &) = delete;
    WorldTemplateInfo() = delete;
#endif

public:
    /**
     * @symbol  ??0WorldTemplateInfo\@\@QEAA\@AEBVWorldTemplatePackManifest\@\@\@Z
     */
    MCAPI WorldTemplateInfo(class WorldTemplatePackManifest const &);
    /**
     * @symbol  ?addWorldTemplatePackSource\@WorldTemplateInfo\@\@QEAAXAEAVWorldTemplatePackSource\@\@\@Z
     */
    MCAPI void addWorldTemplatePackSource(class WorldTemplatePackSource &);
    /**
     * @symbol  ?getPackManifest\@WorldTemplateInfo\@\@QEBAAEBVWorldTemplatePackManifest\@\@XZ
     */
    MCAPI class WorldTemplatePackManifest const & getPackManifest() const;
    /**
     * @symbol  ?getWorldName\@WorldTemplateInfo\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getWorldName() const;
    /**
     * @symbol  ?getWorldPath\@WorldTemplateInfo\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const & getWorldPath() const;
    /**
     * @symbol  ?isVirtualCatalogItem\@WorldTemplateInfo\@\@QEBA_NXZ
     */
    MCAPI bool isVirtualCatalogItem() const;
    /**
     * @symbol  ??1WorldTemplateInfo\@\@QEAA\@XZ
     */
    MCAPI ~WorldTemplateInfo();

};