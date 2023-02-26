/**
 * @file  FunctionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FunctionManager.
 *
 */
class FunctionManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUNCTIONMANAGER
public:
    class FunctionManager& operator=(class FunctionManager const &) = delete;
    FunctionManager(class FunctionManager const &) = delete;
    FunctionManager() = delete;
#endif

public:
    /**
     * @symbol  ??0FunctionManager\@\@QEAA\@V?$unique_ptr\@VICommandDispatcher\@\@U?$default_delete\@VICommandDispatcher\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@2\@PEBVGameRule\@\@\@Z
     */
    MCAPI FunctionManager(std::unique_ptr<class ICommandDispatcher>, std::unique_ptr<class CommandOrigin>, class GameRule const *);
    /**
     * @symbol  ?execute\@FunctionManager\@\@QEAAHAEAVFunctionEntry\@\@AEBVCommandOrigin\@\@W4FunctionQueueOrder\@\@\@Z
     */
    MCAPI int execute(class FunctionEntry &, class CommandOrigin const &, enum class FunctionQueueOrder);
    /**
     * @symbol  ?getCommandDispatcher\@FunctionManager\@\@QEAAAEAVICommandDispatcher\@\@XZ
     */
    MCAPI class ICommandDispatcher & getCommandDispatcher();
    /**
     * @symbol  ?getFunction\@FunctionManager\@\@QEAAPEAVFunctionEntry\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class FunctionEntry * getFunction(std::string const &);
    /**
     * @symbol  ?load\@FunctionManager\@\@QEAAXAEAVResourcePackManager\@\@AEAVCommandRegistry\@\@\@Z
     */
    MCAPI void load(class ResourcePackManager &, class CommandRegistry &);
    /**
     * @symbol  ?queueCommands\@FunctionManager\@\@QEAAXAEBV?$vector\@V?$unique_ptr\@VIFunctionEntry\@\@U?$default_delete\@VIFunctionEntry\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VIFunctionEntry\@\@U?$default_delete\@VIFunctionEntry\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVCommandOrigin\@\@W4FunctionQueueOrder\@\@\@Z
     */
    MCAPI void queueCommands(std::vector<std::unique_ptr<class IFunctionEntry>> const &, class CommandOrigin const &, enum class FunctionQueueOrder);
    /**
     * @symbol  ?tick\@FunctionManager\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol  ?getQueueOrderForCommandVersion\@FunctionManager\@\@SA?AW4FunctionQueueOrder\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI static enum class FunctionQueueOrder getQueueOrderForCommandVersion(enum class CurrentCmdVersion);

//protected:
    /**
     * @symbol  ?_addTickFunctionsFromJson\@FunctionManager\@\@IEAAXAEBVValue\@Json\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void _addTickFunctionsFromJson(class Json::Value const &, enum class CurrentCmdVersion);
    /**
     * @symbol  ?_processFunctionEntry\@FunctionManager\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEAV43\@W4CurrentCmdVersion\@\@AEBVCommandRegistry\@\@\@Z
     */
    MCAPI void _processFunctionEntry(std::string const &, std::vector<std::string> const &, std::vector<std::string> &, enum class CurrentCmdVersion, class CommandRegistry const &);

//private:
    /**
     * @symbol  ?_addOriginReference\@FunctionManager\@\@AEAAAEBVCommandOrigin\@\@AEBV2\@I\@Z
     */
    MCAPI class CommandOrigin const & _addOriginReference(class CommandOrigin const &, unsigned int);
    /**
     * @symbol  ?_queueCommandsAfterCaller\@FunctionManager\@\@AEAAXAEBV?$vector\@V?$unique_ptr\@VIFunctionEntry\@\@U?$default_delete\@VIFunctionEntry\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VIFunctionEntry\@\@U?$default_delete\@VIFunctionEntry\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI void _queueCommandsAfterCaller(std::vector<std::unique_ptr<class IFunctionEntry>> const &, class CommandOrigin const &);
    /**
     * @symbol  ?_removeOriginReference\@FunctionManager\@\@AEAAXAEBVCommandOrigin\@\@I\@Z
     */
    MCAPI void _removeOriginReference(class CommandOrigin const &, unsigned int);

protected:

private:

};