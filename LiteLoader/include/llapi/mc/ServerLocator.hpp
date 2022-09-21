/**
 * @file  MC/ServerLocator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerLocator.
 *
 */
class ServerLocator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLOCATOR
public:
    class ServerLocator& operator=(class ServerLocator const &) = delete;
    ServerLocator(class ServerLocator const &) = delete;
    ServerLocator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLOCATOR
    /**
     * @hash   945413840
     * @symbol ?_onDisable@ServerLocator@@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @hash   1480949575
     * @symbol ?_onEnable@ServerLocator@@EEAAXXZ
     */
    MCVAPI void _onEnable();
#endif

};