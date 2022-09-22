/**
 * @file  WorldTemplateLevelData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1332091573
     * @symbol ??0WorldTemplateLevelData@@QEAA@_N0AEBVBaseGameVersion@@1@Z
     */
    MCAPI WorldTemplateLevelData(bool, bool, class BaseGameVersion const &, class BaseGameVersion const &);
    /**
     * @hash   -1934840658
     * @symbol ??0WorldTemplateLevelData@@QEAA@XZ
     */
    MCAPI WorldTemplateLevelData();
    /**
     * @hash   -89646488
     * @symbol ?getBaseGameVersion@WorldTemplateLevelData@@QEBAAEBVBaseGameVersion@@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @hash   -1071768508
     * @symbol ?getContentIdentity@WorldTemplateLevelData@@QEBAAEBVContentIdentity@@XZ
     */
    MCAPI class ContentIdentity const & getContentIdentity() const;
    /**
     * @hash   -379386878
     * @symbol ?getTagData@WorldTemplateLevelData@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @hash   1440678540
     * @symbol ?getWorldTemplateIdentity@WorldTemplateLevelData@@QEBAAEBUPackIdVersion@@XZ
     */
    MCAPI struct PackIdVersion const & getWorldTemplateIdentity() const;
    /**
     * @hash   -1576856980
     * @symbol ?isFromWorldTemplate@WorldTemplateLevelData@@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @hash   -1143175730
     * @symbol ?isWorldTemplateOptionLocked@WorldTemplateLevelData@@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @hash   -1243382138
     * @symbol ?setBaseGameVersion@WorldTemplateLevelData@@QEAAXAEBVBaseGameVersion@@@Z
     */
    MCAPI void setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   -72847310
     * @symbol ?setContentIdentity@WorldTemplateLevelData@@QEAAXAEBVContentIdentity@@@Z
     */
    MCAPI void setContentIdentity(class ContentIdentity const &);
    /**
     * @hash   -2063462572
     * @symbol ?setIsWorldTemplateOptionLocked@WorldTemplateLevelData@@QEAAX_N@Z
     */
    MCAPI void setIsWorldTemplateOptionLocked(bool);
    /**
     * @hash   367961080
     * @symbol ?setMaxBaseGameVersion@WorldTemplateLevelData@@QEAAXAEBVBaseGameVersion@@@Z
     */
    MCAPI void setMaxBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   473961238
     * @symbol ?setTagData@WorldTemplateLevelData@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @hash   -1845091174
     * @symbol ?setWorldTemplateIdentity@WorldTemplateLevelData@@QEAAXAEBUPackIdVersion@@@Z
     */
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const &);
    /**
     * @hash   -1878592660
     * @symbol ??1WorldTemplateLevelData@@QEAA@XZ
     */
    MCAPI ~WorldTemplateLevelData();

//protected:
    /**
     * @hash   376792252
     * @symbol ?_getTagData@WorldTemplateLevelData@@IEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _getTagData(class CompoundTag const &);
    /**
     * @hash   1204018618
     * @symbol ?_setTagData@WorldTemplateLevelData@@IEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void _setTagData(class CompoundTag &) const;

protected:

};