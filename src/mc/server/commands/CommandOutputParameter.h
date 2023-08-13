#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"

class CommandOutputParameter {
public:
    // CommandOutputParameter inner types define
    enum class NoCountType {};

public:
    // prevent constructor by default
    CommandOutputParameter& operator=(CommandOutputParameter const&) = delete;
    CommandOutputParameter()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI CommandOutputParameter(class Actor const&);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@PEBVActor\@\@\@Z
     */
    MCAPI CommandOutputParameter(class Actor const*);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@PEBD\@Z
     */
    MCAPI CommandOutputParameter(char const*);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@H\@Z
     */
    MCAPI CommandOutputParameter(int);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CommandOutputParameter(class CommandOutputParameter&&);
    /**
     * @symbol
     * ??0CommandOutputParameter\@\@QEAA\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI CommandOutputParameter(std::vector<std::string> const&);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@M\@Z
     */
    MCAPI CommandOutputParameter(float);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@AEBV?$CommandSelectorResults\@VActor\@\@\@\@\@Z
     */
    MCAPI CommandOutputParameter(class CommandSelectorResults<class Actor> const&);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@AEBV?$CommandSelectorResults\@VPlayer\@\@\@\@\@Z
     */
    MCAPI CommandOutputParameter(class CommandSelectorResults<class Player> const&);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@VBlockPos\@\@\@Z
     */
    MCAPI CommandOutputParameter(class BlockPos);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@_N\@Z
     */
    MCAPI CommandOutputParameter(bool);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@W4NoCountType\@0\@\@Z
     */
    MCAPI CommandOutputParameter(enum class CommandOutputParameter::NoCountType);
    /**
     * @symbol
     * ??0CommandOutputParameter\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI CommandOutputParameter(std::string const&);
    /**
     * @symbol
     * ??0CommandOutputParameter\@\@QEAA\@AEBV?$vector\@PEBVActor\@\@V?$allocator\@PEBVActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI CommandOutputParameter(std::vector<class Actor const*> const&);
    /**
     * @symbol
     * ??0CommandOutputParameter\@\@QEAA\@AEBV?$vector\@PEBVPlayer\@\@V?$allocator\@PEBVPlayer\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI CommandOutputParameter(std::vector<class Player const*> const&);
    /**
     * @symbol ??0CommandOutputParameter\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandOutputParameter(class CommandOutputParameter const&);
    /**
     * @symbol ??4CommandOutputParameter\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CommandOutputParameter& operator=(class CommandOutputParameter&&);
    /**
     * @symbol ??1CommandOutputParameter\@\@QEAA\@XZ
     */
    MCAPI ~CommandOutputParameter();
    // NOLINTEND
};
