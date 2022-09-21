/**
 * @file  MC/PermissionCommand.hpp
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
 * @brief MC class PermissionCommand.
 *
 */
class PermissionCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONCOMMAND
public:
    class PermissionCommand& operator=(class PermissionCommand const &) = delete;
    PermissionCommand(class PermissionCommand const &) = delete;
    PermissionCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PermissionCommand();
    /**
     * @hash   581511671
     * @vftbl  1
     * @symbol ?execute@PermissionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   140597490
     * @symbol ?setup@PermissionCommand@@SAXAEAVCommandRegistry@@PEAVPermissionsFile@@@Z
     */
    MCAPI static void setup(class CommandRegistry &, class PermissionsFile *);

//private:
    /**
     * @hash   170026933
     * @symbol ?list@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void list(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -135920272
     * @symbol ?reload@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void reload(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1126969319
     * @symbol ?set@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void set(class CommandOrigin const &, class CommandOutput &) const;

private:
    /**
     * @hash   -465380673
     * @symbol ?mPermissionsFile@PermissionCommand@@0PEAVPermissionsFile@@EA
     */
    MCAPI static class PermissionsFile * mPermissionsFile;

};