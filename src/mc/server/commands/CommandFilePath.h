#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDFILEPATH
public:
    CommandFilePath& operator=(CommandFilePath const&) = delete;
    CommandFilePath(CommandFilePath const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CommandFilePath\@\@QEAA\@XZ
     */
    MCAPI CommandFilePath();
    /**
     * @symbol ?findInvalidCharacter\@CommandFilePath\@\@QEBAHXZ
     */
    MCAPI int findInvalidCharacter() const;
    /**
     * @symbol
     * ?getText\@CommandFilePath\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getText() const;
    /**
     * @symbol ??1CommandFilePath\@\@QEAA\@XZ
     */
    MCAPI ~CommandFilePath();
};
