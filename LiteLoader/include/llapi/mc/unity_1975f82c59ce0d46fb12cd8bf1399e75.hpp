/**
 * @file  unity_1975f82c59ce0d46fb12cd8bf1399e75.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace unity_1975f82c59ce0d46fb12cd8bf1399e75 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?attemptToAddIdToServerTag\@unity_1975f82c59ce0d46fb12cd8bf1399e75\@\@YA_NAEAVLevelStorage\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEAVCompoundTag\@\@_N\@Z
     */
    MCAPI bool attemptToAddIdToServerTag(class LevelStorage &, std::string const &, std::string const &, class CompoundTag &, bool);
    /**
     * @symbol ?createServerTag\@unity_1975f82c59ce0d46fb12cd8bf1399e75\@\@YAXAEAVLevelStorage\@\@AEBUPlayerStorageIds\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@2\@Z
     */
    MCAPI void createServerTag(class LevelStorage &, struct PlayerStorageIds const &, std::string const &, std::string const &);
    /**
     * @symbol ?generateServerKey\@unity_1975f82c59ce0d46fb12cd8bf1399e75\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string generateServerKey();
    /**
     * @symbol ?getServerTag\@unity_1975f82c59ce0d46fb12cd8bf1399e75\@\@YA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@AEBUPlayerStorageIds\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> getServerTag(class LevelStorage &, struct PlayerStorageIds const &, std::string &);
    /**
     * @symbol ?saveServerTag\@unity_1975f82c59ce0d46fb12cd8bf1399e75\@\@YAXAEAVLevelStorage\@\@AEBUPlayerStorageIds\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveServerTag(class LevelStorage &, struct PlayerStorageIds const &, class CompoundTag &);
    /**
     * @symbol ?updateServerTag\@unity_1975f82c59ce0d46fb12cd8bf1399e75\@\@YA_NAEAVLevelStorage\@\@AEBUPlayerStorageIds\@\@AEAVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool updateServerTag(class LevelStorage &, struct PlayerStorageIds const &, class CompoundTag &, std::string const &);

};