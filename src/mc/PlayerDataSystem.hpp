/**
 * @file  PlayerDataSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PlayerDataSystem.
 *
 */
namespace PlayerDataSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?forEachIdByPrecedence\@PlayerDataSystem\@\@YAXAEBUPlayerStorageIds\@\@V?$function\@$$A6A_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI void forEachIdByPrecedence(struct PlayerStorageIds const &, class std::function<bool (std::string const &, std::string const &)>);
    /**
     * @symbol  ?getPlayerFilename\@PlayerDataSystem\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Core::PathBuffer<std::string> getPlayerFilename(class Core::Path const &, std::string const &);
    /**
     * @symbol  ?getServerId\@PlayerDataSystem\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@AEBUPlayerStorageIds\@\@\@Z
     */
    MCAPI std::string getServerId(class LevelStorage &, struct PlayerStorageIds const &);
    /**
     * @symbol  ?legacyLoadClientPlayer\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> legacyLoadClientPlayer(std::string const &, class Core::Path const &);
    /**
     * @symbol  ?legacyLoadPlayer\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> legacyLoadPlayer(class LevelStorage &, std::string const &);
    /**
     * @symbol  ?loadLocalPlayerData\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> loadLocalPlayerData(class LevelStorage &);
    /**
     * @symbol  ?loadPlayerData\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@AEBUPlayerStorageIds\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> loadPlayerData(class LevelStorage &, struct PlayerStorageIds const &, bool);
    /**
     * @symbol  ?loadPlayerDataFromTag\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> loadPlayerDataFromTag(class LevelStorage &, class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?playerKey\@PlayerDataSystem\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI std::string playerKey(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?serverKey\@PlayerDataSystem\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI std::string serverKey(class LevelStorage &, class Player const &);
    /**
     * @symbol  ?serverKey\@PlayerDataSystem\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI std::string serverKey(class LevelStorage &, class gsl::basic_string_span<char const, -1>);

};