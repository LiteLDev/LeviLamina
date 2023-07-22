/**
 * @file  SendPacketsSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SendPacketsSystem.
 *
 */
class SendPacketsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDPACKETSSYSTEM
public:
    class SendPacketsSystem& operator=(class SendPacketsSystem const &) = delete;
    SendPacketsSystem(class SendPacketsSystem const &) = delete;
    SendPacketsSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSendPacketsSystem\@SendPacketsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSendPacketsSystem();

};