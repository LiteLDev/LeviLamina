/**
 * @file  MC/GetChunksCommand.hpp
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
 * @brief MC class GetChunksCommand.
 *
 */
class GetChunksCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCHUNKSCOMMAND
public:
    class GetChunksCommand& operator=(class GetChunksCommand const &) = delete;
    GetChunksCommand(class GetChunksCommand const &) = delete;
    GetChunksCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~GetChunksCommand();
    /**
     * @hash   2060294740
     * @vftbl  1
     * @symbol ?execute@GetChunksCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   778514172
     * @symbol ?setup@GetChunksCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};