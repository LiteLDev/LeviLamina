/**
 * @file  WorldTemplateLevelData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldTemplateLevelData.
 *
 */
class WorldTemplateLevelData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATELEVELDATA
public:
    class WorldTemplateLevelData& operator=(class WorldTemplateLevelData const &) = delete;
    WorldTemplateLevelData(class WorldTemplateLevelData const &) = delete;
#endif

public:
    /**
     * @symbol  ??0WorldTemplateLevelData\@\@QEAA\@_N0AEBVBaseGameVersion\@\@1\@Z
     */
    MCAPI WorldTemplateLevelData(bool, bool, class BaseGameVersion const &, class BaseGameVersion const &);
    /**
     * @symbol  ??0WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI WorldTemplateLevelData();
    /**
     * @symbol  ?getBaseGameVersion\@WorldTemplateLevelData\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @symbol  ?getContentIdentity\@WorldTemplateLevelData\@\@QEBAAEBVContentIdentity\@\@XZ
     */
    MCAPI class ContentIdentity const & getContentIdentity() const;
    /**
     * @symbol  ?getTagData\@WorldTemplateLevelData\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @symbol  ?getWorldTemplateIdentity\@WorldTemplateLevelData\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const & getWorldTemplateIdentity() const;
    /**
     * @symbol  ?isFromWorldTemplate\@WorldTemplateLevelData\@\@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @symbol  ?isWorldTemplateOptionLocked\@WorldTemplateLevelData\@\@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @symbol  ?setBaseGameVersion\@WorldTemplateLevelData\@\@QEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol  ?setContentIdentity\@WorldTemplateLevelData\@\@QEAAXAEBVContentIdentity\@\@\@Z
     */
    MCAPI void setContentIdentity(class ContentIdentity const &);
    /**
     * @symbol  ?setIsWorldTemplateOptionLocked\@WorldTemplateLevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setIsWorldTemplateOptionLocked(bool);
    /**
     * @symbol  ?setMaxBaseGameVersion\@WorldTemplateLevelData\@\@QEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setMaxBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol  ?setTagData\@WorldTemplateLevelData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @symbol  ?setWorldTemplateIdentity\@WorldTemplateLevelData\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const &);
    /**
     * @symbol  ??1WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI ~WorldTemplateLevelData();

//protected:
    /**
     * @symbol  ?_getTagData\@WorldTemplateLevelData\@\@IEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _getTagData(class CompoundTag const &);
    /**
     * @symbol  ?_setTagData\@WorldTemplateLevelData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _setTagData(class CompoundTag &) const;

protected:

};