/**
 * @file  SetActorLinkPacketSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SetActorLinkPacketSystem.
 *
 */
class SetActorLinkPacketSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORLINKPACKETSYSTEM
public:
    class SetActorLinkPacketSystem& operator=(class SetActorLinkPacketSystem const &) = delete;
    SetActorLinkPacketSystem(class SetActorLinkPacketSystem const &) = delete;
    SetActorLinkPacketSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSetActorLinkPacketSystem\@SetActorLinkPacketSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetActorLinkPacketSystem();

};