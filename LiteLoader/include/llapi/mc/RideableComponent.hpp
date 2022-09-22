/**
 * @file  RideableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RideableComponent.
 *
 */
class RideableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLECOMPONENT
public:
    class RideableComponent& operator=(class RideableComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1745294985
     * @symbol ??0RideableComponent@@QEAA@XZ
     */
    MCAPI RideableComponent();
    /**
     * @hash   -1994386271
     * @symbol ??0RideableComponent@@QEAA@AEBV0@@Z
     */
    MCAPI RideableComponent(class RideableComponent const &);
    /**
     * @hash   -114458513
     * @symbol ??0RideableComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI RideableComponent(class RideableComponent &&);
    /**
     * @hash   -523219537
     * @symbol ?areSeatsFull@RideableComponent@@QEBA_NAEBVActor@@@Z
     */
    MCAPI bool areSeatsFull(class Actor const &) const;
    /**
     * @hash   853587981
     * @symbol ?canAddPassenger@RideableComponent@@QEBA_NAEBVActor@@AEAV2@@Z
     */
    MCAPI bool canAddPassenger(class Actor const &, class Actor &) const;
    /**
     * @hash   1925599272
     * @symbol ?getFirstAvailableSeatPosition@RideableComponent@@QEBA_NAEBVActor@@AEAV2@AEAVVec3@@@Z
     */
    MCAPI bool getFirstAvailableSeatPosition(class Actor const &, class Actor &, class Vec3 &) const;
    /**
     * @hash   2054433927
     * @symbol ?getInteraction@RideableComponent@@QEBA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &) const;
    /**
     * @hash   -1195643394
     * @symbol ?getSeatCount@RideableComponent@@QEBAHXZ
     */
    MCAPI int getSeatCount() const;
    /**
     * @symbol ?getSeats@RideableComponent@@QEBAAEBV?$vector@USeatDescription@@V?$allocator@USeatDescription@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct SeatDescription> const & getSeats() const;
    /**
     * @hash   1344212442
     * @symbol ??4RideableComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class RideableComponent & operator=(class RideableComponent &&);
    /**
     * @hash   41481049
     * @symbol ?positionPassenger@RideableComponent@@QEBAXAEAVActor@@0@Z
     */
    MCAPI void positionPassenger(class Actor &, class Actor &) const;
    /**
     * @hash   792544974
     * @symbol ?pullInEntity@RideableComponent@@QEBA_NAEAVActor@@0@Z
     */
    MCAPI bool pullInEntity(class Actor &, class Actor &) const;
    /**
     * @hash   1357360775
     * @symbol ??1RideableComponent@@QEAA@XZ
     */
    MCAPI ~RideableComponent();

//private:
    /**
     * @hash   856285823
     * @symbol ?_setCanPlayerRide@RideableComponent@@AEBAXAEAVPlayer@@_N@Z
     */
    MCAPI void _setCanPlayerRide(class Player &, bool) const;

private:

};