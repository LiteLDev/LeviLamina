/**
 * @file  RideCommand.hpp
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
 * @brief MC class RideCommand.
 *
 */
class RideCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDECOMMAND
public:
    class RideCommand& operator=(class RideCommand const &) = delete;
    RideCommand(class RideCommand const &) = delete;
    RideCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RideCommand();
    /**
     * @hash   223729392
     * @vftbl  1
     * @symbol ?execute@RideCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1771808768
     * @symbol ?setup@RideCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   1651525426
     * @symbol ?evictPassengers@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void evictPassengers(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   167720455
     * @symbol ?startRiding@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void startRiding(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1747003383
     * @symbol ?stopRiding@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void stopRiding(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -168011783
     * @symbol ?summonPassenger@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void summonPassenger(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   807033243
     * @symbol ?summonVehicle@RideCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void summonVehicle(class CommandOrigin const &, class CommandOutput &) const;

private:

};