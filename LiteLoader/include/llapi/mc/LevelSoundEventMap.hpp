/**
 * @file  MC/LevelSoundEventMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelSoundEventMap.
 *
 */
class LevelSoundEventMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTMAP
public:
    class LevelSoundEventMap& operator=(class LevelSoundEventMap const &) = delete;
    LevelSoundEventMap(class LevelSoundEventMap const &) = delete;
    LevelSoundEventMap() = delete;
#endif

public:
    /**
     * @hash   -1089468421
     * @symbol ?getId@LevelSoundEventMap@@SA?AW4LevelSoundEvent@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum LevelSoundEvent getId(std::string const &);
    /**
     * @hash   1653105685
     * @symbol ?getName@LevelSoundEventMap@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@@@Z
     */
    MCAPI static std::string const & getName(enum LevelSoundEvent);
    /**
     * @hash   -1886138609
     * @symbol ?initializerData@LevelSoundEventMap@@2V?$initializer_list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@@@std@@@std@@B
     */
    MCAPI static class std::initializer_list<struct std::pair<std::string, enum LevelSoundEvent>> const initializerData;

//private:

private:
    /**
     * @hash   1981803707
     * @symbol ?map@LevelSoundEventMap@@0V?$BidirectionalUnorderedMap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<std::string, enum LevelSoundEvent> const map;

};