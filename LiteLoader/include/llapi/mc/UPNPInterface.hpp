/**
 * @file  UPNPInterface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UPNPInterface.
 *
 */
class UPNPInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPNPINTERFACE
public:
    class UPNPInterface& operator=(class UPNPInterface const &) = delete;
    UPNPInterface(class UPNPInterface const &) = delete;
    UPNPInterface() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPNPINTERFACE
    /**
     * @hash   391266423
     * @symbol  ?_onDisable\@UPNPInterface\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @hash   -1666693922
     * @symbol  ?_onEnable\@UPNPInterface\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
#endif
    /**
     * @hash   -815181890
     * @symbol  ??0UPNPInterface\@\@QEAA\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI UPNPInterface(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @hash   -1973859021
     * @symbol  ?reset\@UPNPInterface\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   1434520733
     * @symbol  ?tick\@UPNPInterface\@\@QEAAXXZ
     */
    MCAPI void tick();

};