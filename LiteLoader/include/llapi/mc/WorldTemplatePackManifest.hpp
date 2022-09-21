/**
 * @file  MC/WorldTemplatePackManifest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~WorldTemplatePackManifest();
    /**
     * @hash   -1655975102
     * @vftbl  1
     * @symbol ?clone@WorldTemplatePackManifest@@UEBA?AV?$unique_ptr@VPackManifest@@U?$default_delete@VPackManifest@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class PackManifest> clone() const;
    /**
     * @hash   1939079968
     * @symbol ??0WorldTemplatePackManifest@@QEAA@XZ
     */
    MCAPI WorldTemplatePackManifest();
    /**
     * @hash   1149775261
     * @symbol ??0WorldTemplatePackManifest@@QEAA@$$QEAVPackManifest@@@Z
     */
    MCAPI WorldTemplatePackManifest(class PackManifest &&);
    /**
     * @hash   856698422
     * @symbol ?getGameType@WorldTemplatePackManifest@@QEBA?AW4GameType@@XZ
     */
    MCAPI enum GameType getGameType() const;
    /**
     * @hash   -913548632
     * @symbol ?setGameType@WorldTemplatePackManifest@@QEAAXW4GameType@@@Z
     */
    MCAPI void setGameType(enum GameType);

};