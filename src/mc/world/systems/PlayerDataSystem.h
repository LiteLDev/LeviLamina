#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { template<typename T0> class PathBuffer; }
// clang-format on

namespace PlayerDataSystem {
/**
 * @symbol
 * ?forEachIdByPrecedence\@PlayerDataSystem\@\@YAXAEBUPlayerStorageIds\@\@V?$function\@$$A6A_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z\@std\@\@\@Z
 */
MCAPI void
forEachIdByPrecedence(struct PlayerStorageIds const&, class std::function<bool(std::string const&, std::string const&)>); // NOLINT
/**
 * @symbol
 * ?getPlayerFilename\@PlayerDataSystem\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI class Core::PathBuffer<std::string> getPlayerFilename(class Core::Path const&, std::string const&); // NOLINT
/**
 * @symbol
 * ?getServerId\@PlayerDataSystem\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@AEBUPlayerStorageIds\@\@\@Z
 */
MCAPI std::string getServerId(class LevelStorage&, struct PlayerStorageIds const&); // NOLINT
/**
 * @symbol
 * ?legacyLoadClientPlayer\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVPath\@Core\@\@\@Z
 */
MCAPI std::unique_ptr<class CompoundTag> legacyLoadClientPlayer(std::string const&, class Core::Path const&); // NOLINT
/**
 * @symbol
 * ?legacyLoadPlayer\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
 */
MCAPI std::unique_ptr<class CompoundTag> legacyLoadPlayer(class LevelStorage&, std::string const&); // NOLINT
/**
 * @symbol
 * ?loadPlayerData\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@AEBUPlayerStorageIds\@\@_N\@Z
 */
MCAPI std::unique_ptr<class CompoundTag>
      loadPlayerData(class LevelStorage&, struct PlayerStorageIds const&, bool); // NOLINT
/**
 * @symbol
 * ?loadPlayerDataFromTag\@PlayerDataSystem\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::unique_ptr<class CompoundTag>
loadPlayerDataFromTag(class LevelStorage&, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol
 * ?playerKey\@PlayerDataSystem\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string playerKey(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
/**
 * @symbol
 * ?serverKey\@PlayerDataSystem\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@AEBVPlayer\@\@\@Z
 */
MCAPI std::string serverKey(class LevelStorage&, class Player const&); // NOLINT
/**
 * @symbol
 * ?serverKey\@PlayerDataSystem\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI std::string
      serverKey(class LevelStorage&, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT

}; // namespace PlayerDataSystem
