#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameVersion {

public:
    // prevent constructor by default
    GameVersion& operator=(GameVersion const&) = delete;

public:
    /**
     * @symbol ??0GameVersion\@\@QEAA\@XZ
     */
    MCAPI GameVersion(); // NOLINT
    /**
     * @symbol ??0GameVersion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI GameVersion(class GameVersion const&); // NOLINT
    /**
     * @symbol ??0GameVersion\@\@QEAA\@IIIII\@Z
     */
    MCAPI GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); // NOLINT
    /**
     * @symbol ??0GameVersion\@\@QEAA\@AEBVListTag\@\@\@Z
     */
    MCAPI GameVersion(class ListTag const&); // NOLINT
    /**
     * @symbol
     * ?asString\@GameVersion\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& asString() const; // NOLINT
    /**
     * @symbol ??MGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class GameVersion const&) const; // NOLINT
    /**
     * @symbol ??4GameVersion\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class GameVersion& operator=(class GameVersion&&); // NOLINT
    /**
     * @symbol ??PGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>=(class GameVersion const&) const; // NOLINT
    /**
     * @symbol
     * ?serialize\@GameVersion\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> serialize() const; // NOLINT
    /**
     * @symbol ??1GameVersion\@\@QEAA\@XZ
     */
    MCAPI ~GameVersion(); // NOLINT
    /**
     * @symbol ?current\@GameVersion\@\@SA?AV1\@XZ
     */
    MCAPI static class GameVersion current(); // NOLINT
};
