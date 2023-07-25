#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandResponseBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDRESPONSEBASE
public:
    CommandResponseBase& operator=(CommandResponseBase const&) = delete;
    CommandResponseBase(CommandResponseBase const&)            = delete;
    CommandResponseBase()                                      = delete;
#endif

public:
    /**
     * @symbol ??1CommandResponseBase\@\@QEAA\@XZ
     */
    MCAPI ~CommandResponseBase();
    /**
     * @symbol
     * ?NameID\@CommandResponseBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;

    // protected:
    /**
     * @symbol
     * ?_addCommand\@CommandResponseBase\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _addCommand(std::string const&);
    /**
     * @symbol ?_executeAction\@CommandResponseBase\@\@IEBAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void _executeAction(class RenderParams&) const;

    // private:
    /**
     * @symbol ?_compileCommands\@CommandResponseBase\@\@AEBAXAEAVLevel\@\@\@Z
     */
    MCAPI void _compileCommands(class Level&) const;

protected:
private:
};
