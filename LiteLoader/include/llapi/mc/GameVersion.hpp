/**
 * @file  GameVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameVersion.
 *
 */
class GameVersion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0GameVersion@@QEAA@AEBV0@@Z
     */
    MCAPI GameVersion(class GameVersion const &);
    /**
     * @hash   564533026
     * @symbol ??0GameVersion@@QEAA@XZ
     */
    MCAPI GameVersion();
    /**
     * @hash   -1773051981
     * @symbol ??0GameVersion@@QEAA@IIIII@Z
     */
    MCAPI GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    /**
     * @hash   -31196085
     * @symbol ??0GameVersion@@QEAA@AEBVListTag@@@Z
     */
    MCAPI GameVersion(class ListTag const &);
    /**
     * @hash   -1438582430
     * @symbol ?asString@GameVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & asString() const;
    /**
     * @hash   -1935754462
     * @symbol ??MGameVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator<(class GameVersion const &) const;
    /**
     * @symbol ??4GameVersion@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class GameVersion & operator=(class GameVersion const &);
    /**
     * @hash   -29586992
     * @symbol ??4GameVersion@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class GameVersion & operator=(class GameVersion &&);
    /**
     * @hash   -663369622
     * @symbol ??PGameVersion@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator>=(class GameVersion const &) const;
    /**
     * @hash   -2044158334
     * @symbol ?serialize@GameVersion@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class ListTag> serialize() const;
    /**
     * @hash   -713669198
     * @symbol ??1GameVersion@@QEAA@XZ
     */
    MCAPI ~GameVersion();
    /**
     * @hash   168701821
     * @symbol ?current@GameVersion@@SA?AV1@XZ
     */
    MCAPI static class GameVersion current();

};