/**
 * @file  EnchantCommand.hpp
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
 * @brief MC class EnchantCommand.
 *
 */
class EnchantCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTCOMMAND
public:
    class EnchantCommand& operator=(class EnchantCommand const &) = delete;
    EnchantCommand(class EnchantCommand const &) = delete;
    EnchantCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EnchantCommand();
    /**
     * @hash   -2021189919
     * @vftbl  1
     * @symbol ?execute@EnchantCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1866706612
     * @symbol ?setup@EnchantCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};