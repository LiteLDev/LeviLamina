/**
 * @file  WorldBuilderCommand.hpp
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
 * @brief MC class WorldBuilderCommand.
 *
 */
class WorldBuilderCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDBUILDERCOMMAND
public:
    class WorldBuilderCommand& operator=(class WorldBuilderCommand const &) = delete;
    WorldBuilderCommand(class WorldBuilderCommand const &) = delete;
    WorldBuilderCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WorldBuilderCommand();
    /**
     * @hash   2090200721
     * @vftbl  1
     * @symbol ?execute@WorldBuilderCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1806537407
     * @symbol ?setWorldBuilder@WorldBuilderCommand@@SAXAEAVLayeredAbilities@@_N@Z
     */
    MCAPI static void setWorldBuilder(class LayeredAbilities &, bool);
    /**
     * @hash   -2084250784
     * @symbol ?setup@WorldBuilderCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};