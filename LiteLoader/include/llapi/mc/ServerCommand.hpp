/**
 * @file  ServerCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerCommand.
 *
 */
class ServerCommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMAND
public:
    class ServerCommand& operator=(class ServerCommand const &) = delete;
    ServerCommand(class ServerCommand const &) = delete;
    ServerCommand() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCOMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerCommand();
#endif
    /**
     * @hash   -518883642
     * @symbol ?setup@ServerCommand@@SAXAEAVMinecraft@@@Z
     */
    MCAPI static void setup(class Minecraft &);

//protected:

protected:
    /**
     * @hash   1961881618
     * @symbol ?mGame@ServerCommand@@1PEAVMinecraft@@EA
     */
    MCAPI static class Minecraft * mGame;

};