/**
 * @file  GameVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   721383793
     * @symbol  ??0GameVersion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI GameVersion(class GameVersion const &);
    /**
     * @hash   -300966638
     * @symbol  ??0GameVersion\@\@QEAA\@XZ
     */
    MCAPI GameVersion();
    /**
     * @hash   1656415651
     * @symbol  ??0GameVersion\@\@QEAA\@IIIII\@Z
     */
    MCAPI GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    /**
     * @hash   -896695749
     * @symbol  ??0GameVersion\@\@QEAA\@AEBVListTag\@\@\@Z
     */
    MCAPI GameVersion(class ListTag const &);
    /**
     * @hash   1990885202
     * @symbol  ?asString\@GameVersion\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & asString() const;
    /**
     * @hash   1493713170
     * @symbol  ??MGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class GameVersion const &) const;
    /**
     * @hash   -1015166532
     * @symbol  ??4GameVersion\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class GameVersion & operator=(class GameVersion const &);
    /**
     * @hash   -1092975776
     * @symbol  ??4GameVersion\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class GameVersion & operator=(class GameVersion &&);
    /**
     * @hash   -1528869286
     * @symbol  ??PGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>=(class GameVersion const &) const;
    /**
     * @hash   1385309298
     * @symbol  ?serialize\@GameVersion\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> serialize() const;
    /**
     * @hash   -491424494
     * @symbol  ??1GameVersion\@\@QEAA\@XZ
     */
    MCAPI ~GameVersion();
    /**
     * @hash   -696797843
     * @symbol  ?current\@GameVersion\@\@SA?AV1\@XZ
     */
    MCAPI static class GameVersion current();

};