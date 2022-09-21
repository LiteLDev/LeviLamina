/**
 * @file  MC/ChangeSettingCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChangeSettingCommand.
 *
 */
class ChangeSettingCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANGESETTINGCOMMAND
public:
    class ChangeSettingCommand& operator=(class ChangeSettingCommand const &) = delete;
    ChangeSettingCommand(class ChangeSettingCommand const &) = delete;
    ChangeSettingCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChangeSettingCommand();
    /**
     * @hash   1696082376
     * @vftbl  1
     * @symbol ?execute@ChangeSettingCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   607855628
     * @symbol ?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};