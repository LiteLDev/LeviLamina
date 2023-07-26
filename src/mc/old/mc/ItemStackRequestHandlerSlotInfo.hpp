/**
 * @file  ItemStackRequestHandlerSlotInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0ItemStackRequestHandlerSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestHandlerSlotInfo();
    /**
     * @symbol  ??BItemStackRequestHandlerSlotInfo\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @symbol  ??1ItemStackRequestHandlerSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestHandlerSlotInfo();

};