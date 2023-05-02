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
     * @symbol ??0WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI WorldTemplateLevelData();
    /**
     * @symbol ?getBaseGameVersion\@WorldTemplateLevelData\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @symbol ??1WorldTemplateLevelData\@\@QEAA\@XZ
     */
    MCAPI ~WorldTemplateLevelData();

//protected:
    /**
     * @symbol ?_getTagData\@WorldTemplateLevelData\@\@IEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _getTagData(class CompoundTag const &);
    /**
     * @symbol ?_setTagData\@WorldTemplateLevelData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _setTagData(class CompoundTag &) const;

protected:

};
