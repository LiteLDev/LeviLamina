/**
 * @file  WorldTemplateLevelData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1994166757
     * @symbol  ??0WorldTemplateLevelData\@\@QEAA\@_N0AEBVBaseGameVersion\@\@1\@Z
     */
    MCAPI WorldTemplateLevelData(bool, bool, class BaseGameVersion const &, class BaseGameVersion const &);
    /**
     * @hash   -1272765474
     * @symbol  ??0WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI WorldTemplateLevelData();
    /**
     * @hash   572397944
     * @symbol  ?getBaseGameVersion\@WorldTemplateLevelData\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @hash   -975145724
     * @symbol  ?getContentIdentity\@WorldTemplateLevelData\@\@QEBAAEBVContentIdentity\@\@XZ
     */
    MCAPI class ContentIdentity const & getContentIdentity() const;
    /**
     * @hash   282657554
     * @symbol  ?getTagData\@WorldTemplateLevelData\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @hash   575178876
     * @symbol  ?getWorldTemplateIdentity\@WorldTemplateLevelData\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const & getWorldTemplateIdentity() const;
    /**
     * @hash   -914812548
     * @symbol  ?isFromWorldTemplate\@WorldTemplateLevelData\@\@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @hash   -481131298
     * @symbol  ?isWorldTemplateOptionLocked\@WorldTemplateLevelData\@\@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @hash   -581337706
     * @symbol  ?setBaseGameVersion\@WorldTemplateLevelData\@\@QEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   589197122
     * @symbol  ?setContentIdentity\@WorldTemplateLevelData\@\@QEAAXAEBVContentIdentity\@\@\@Z
     */
    MCAPI void setContentIdentity(class ContentIdentity const &);
    /**
     * @hash   -1401418140
     * @symbol  ?setIsWorldTemplateOptionLocked\@WorldTemplateLevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setIsWorldTemplateOptionLocked(bool);
    /**
     * @hash   1030005512
     * @symbol  ?setMaxBaseGameVersion\@WorldTemplateLevelData\@\@QEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setMaxBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   1136005670
     * @symbol  ?setTagData\@WorldTemplateLevelData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @hash   -1183046742
     * @symbol  ?setWorldTemplateIdentity\@WorldTemplateLevelData\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const &);
    /**
     * @hash   -1093417220
     * @symbol  ??1WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI ~WorldTemplateLevelData();

//protected:
    /**
     * @hash   1038867436
     * @symbol  ?_getTagData\@WorldTemplateLevelData\@\@IEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _getTagData(class CompoundTag const &);
    /**
     * @hash   1866093802
     * @symbol  ?_setTagData\@WorldTemplateLevelData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _setTagData(class CompoundTag &) const;

protected:

};