/**
 * @file  ItemStackRequestHandlerSlotInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemStackRequestHandlerSlotInfo.
 *
 */
struct ItemStackRequestHandlerSlotInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTHANDLERSLOTINFO
public:
    struct ItemStackRequestHandlerSlotInfo& operator=(struct ItemStackRequestHandlerSlotInfo const &) = delete;
    ItemStackRequestHandlerSlotInfo(struct ItemStackRequestHandlerSlotInfo const &) = delete;
#endif

public:
    /**
     * @hash   -677437736
     * @symbol  ??0ItemStackRequestHandlerSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestHandlerSlotInfo();
    /**
     * @hash   -863942484
     * @symbol  ??BItemStackRequestHandlerSlotInfo\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   2116725272
     * @symbol  ??1ItemStackRequestHandlerSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestHandlerSlotInfo();

};