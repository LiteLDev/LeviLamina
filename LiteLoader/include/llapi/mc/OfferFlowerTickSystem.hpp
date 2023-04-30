/**
 * @file  OfferFlowerTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class OfferFlowerTickSystem.
 *
 */
class OfferFlowerTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OFFERFLOWERTICKSYSTEM
public:
    class OfferFlowerTickSystem& operator=(class OfferFlowerTickSystem const &) = delete;
    OfferFlowerTickSystem(class OfferFlowerTickSystem const &) = delete;
    OfferFlowerTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@OfferFlowerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doOfferFlowerTickSystem\@OfferFlowerTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUOfferFlowerTickComponent\@\@\@Z
     */
    MCAPI static void _doOfferFlowerTickSystem(class StrictEntityContext const &, struct OfferFlowerTickComponent &);
    /**
     * @symbol ?_tickOfferFlowerTickSystem\@OfferFlowerTickSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@VActorTickNeededComponent\@\@\@\@UOfferFlowerTickComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickOfferFlowerTickSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class ActorTickNeededComponent>, struct OfferFlowerTickComponent>);

private:

};
