/**
 * @file  CommandResponseBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandResponseBase.
 *
 */
class CommandResponseBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDRESPONSEBASE
public:
    class CommandResponseBase& operator=(class CommandResponseBase const &) = delete;
    CommandResponseBase(class CommandResponseBase const &) = delete;
    CommandResponseBase() = delete;
#endif

public:
    /**
     * @hash   -1223049943
     * @symbol  ??1CommandResponseBase\@\@QEAA\@XZ
     */
    MCAPI ~CommandResponseBase();
    /**
     * @hash   279823883
     * @symbol  ?NameID\@CommandResponseBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;

//protected:
    /**
     * @hash   -1195764659
     * @symbol  ?_addCommand\@CommandResponseBase\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _addCommand(std::string const &);
    /**
     * @hash   1098278909
     * @symbol  ?_executeAction\@CommandResponseBase\@\@IEBAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void _executeAction(class RenderParams &) const;

protected:

};