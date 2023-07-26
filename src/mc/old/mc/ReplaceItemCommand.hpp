/**
 * @file  ReplaceItemCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Util.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ReplaceItemCommand.
 *
 */
class ReplaceItemCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLACEITEMCOMMAND
public:
    class ReplaceItemCommand& operator=(class ReplaceItemCommand const &) = delete;
    ReplaceItemCommand(class ReplaceItemCommand const &) = delete;
    ReplaceItemCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ReplaceItemCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@ReplaceItemCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@ReplaceItemCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol  ?_outputError\@ReplaceItemCommand\@\@AEBAXAEAVCommandOutput\@\@UReplacementResults\@Util\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _outputError(class CommandOutput &, struct Util::ReplacementResults, std::string const &) const;

private:

};