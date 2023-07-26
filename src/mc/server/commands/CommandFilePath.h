#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {

public:
    // prevent constructor by default
    CommandFilePath& operator=(CommandFilePath const&) = delete;
    CommandFilePath(CommandFilePath const&)            = delete;

public:
    /**
     * @symbol ??0CommandFilePath\@\@QEAA\@XZ
     */
    MCAPI CommandFilePath(); // NOLINT
    /**
     * @symbol ?findInvalidCharacter\@CommandFilePath\@\@QEBAHXZ
     */
    MCAPI int findInvalidCharacter() const; // NOLINT
    /**
     * @symbol
     * ?getText\@CommandFilePath\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getText() const; // NOLINT
    /**
     * @symbol ??1CommandFilePath\@\@QEAA\@XZ
     */
    MCAPI ~CommandFilePath(); // NOLINT
};
