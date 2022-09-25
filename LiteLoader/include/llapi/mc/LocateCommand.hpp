/**
 * @file  LocateCommand.hpp
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
 * @brief MC class LocateCommand.
 *
 */
class LocateCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCATECOMMAND
public:
    class LocateCommand& operator=(class LocateCommand const &) = delete;
    LocateCommand(class LocateCommand const &) = delete;
    LocateCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LocateCommand();
    /**
     * @hash   465314378
     * @vftbl  1
     * @symbol ?execute@LocateCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1262123344
     * @symbol ?setup@LocateCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -1200984590
     * @symbol ?_executeLocateBiome@LocateCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _executeLocateBiome(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -892436683
     * @symbol ?_executeLocateStructure@LocateCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void _executeLocateStructure(class CommandOrigin const &, class CommandOutput &) const;

private:

};