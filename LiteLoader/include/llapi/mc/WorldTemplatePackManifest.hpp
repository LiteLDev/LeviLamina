/**
 * @file  WorldTemplatePackManifest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldTemplatePackManifest.
 *
 */
class WorldTemplatePackManifest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEPACKMANIFEST
public:
    class WorldTemplatePackManifest& operator=(class WorldTemplatePackManifest const &) = delete;
    WorldTemplatePackManifest(class WorldTemplatePackManifest const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WorldTemplatePackManifest();
    /**
     * @hash   976196210
     * @vftbl  1
     * @symbol  ?clone\@WorldTemplatePackManifest\@\@UEBA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class PackManifest> clone() const;
    /**
     * @hash   275791952
     * @symbol  ??0WorldTemplatePackManifest\@\@QEAA\@XZ
     */
    MCAPI WorldTemplatePackManifest();
    /**
     * @hash   -513512755
     * @symbol  ??0WorldTemplatePackManifest\@\@QEAA\@$$QEAVPackManifest\@\@\@Z
     */
    MCAPI WorldTemplatePackManifest(class PackManifest &&);
    /**
     * @hash   -806328202
     * @symbol  ?getGameType\@WorldTemplatePackManifest\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const;
    /**
     * @hash   1718499672
     * @symbol  ?setGameType\@WorldTemplatePackManifest\@\@QEAAXW4GameType\@\@\@Z
     */
    MCAPI void setGameType(enum class GameType);

};