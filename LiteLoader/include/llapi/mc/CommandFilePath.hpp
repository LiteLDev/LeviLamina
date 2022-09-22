/**
 * @file  CommandFilePath.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandFilePath.
 *
 */
class CommandFilePath {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDFILEPATH
public:
    class CommandFilePath& operator=(class CommandFilePath const &) = delete;
    CommandFilePath(class CommandFilePath const &) = delete;
#endif

public:
    /**
     * @hash   -1737624984
     * @symbol ??0CommandFilePath@@QEAA@XZ
     */
    MCAPI CommandFilePath();
    /**
     * @hash   507892892
     * @symbol ?findInvalidCharacter@CommandFilePath@@QEBAHXZ
     */
    MCAPI int findInvalidCharacter() const;
    /**
     * @hash   -752515324
     * @symbol ?getText@CommandFilePath@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getText() const;
    /**
     * @hash   -267469320
     * @symbol ??1CommandFilePath@@QEAA@XZ
     */
    MCAPI ~CommandFilePath();

};