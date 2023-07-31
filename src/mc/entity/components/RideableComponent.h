#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RideableComponent {

public:
    // prevent constructor by default
    RideableComponent& operator=(RideableComponent const&) = delete;
    RideableComponent(RideableComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RideableComponent\@\@QEAA\@XZ
     */
    MCAPI RideableComponent();
    /**
     * @symbol ??0RideableComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RideableComponent(class RideableComponent&&);
    /**
     * @symbol ?areSeatsFull\@RideableComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool areSeatsFull(class Actor const&) const;
    /**
     * @symbol ?canAddPassenger\@RideableComponent\@\@QEBA_NAEBVActor\@\@AEAV2\@\@Z
     */
    MCAPI bool canAddPassenger(class Actor const&, class Actor&) const;
    /**
     * @symbol ?getFirstAvailableSeatPosition\@RideableComponent\@\@QEBA_NAEBVActor\@\@AEAV2\@AEAVVec3\@\@\@Z
     */
    MCAPI bool getFirstAvailableSeatPosition(class Actor const&, class Actor&, class Vec3&) const;
    /**
     * @symbol ?getInteraction\@RideableComponent\@\@QEBA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&) const;
    /**
     * @symbol ?getSeatCount\@RideableComponent\@\@QEBAHXZ
     */
    MCAPI int getSeatCount() const;
    /**
     * @symbol
     * ?getSeats\@RideableComponent\@\@QEBAAEBV?$vector\@USeatDescription\@\@V?$allocator\@USeatDescription\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct SeatDescription> const& getSeats() const;
    /**
     * @symbol ??4RideableComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class RideableComponent& operator=(class RideableComponent&&);
    /**
     * @symbol ?pullInEntity\@RideableComponent\@\@QEBA_NAEAVActor\@\@0\@Z
     */
    MCAPI bool pullInEntity(class Actor&, class Actor&) const;
    // NOLINTEND
};
