/**
 * @file  EntitySystemsInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure EntitySystemsInfo.
 *
 */
struct EntitySystemsInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSYSTEMSINFO
public:
    struct EntitySystemsInfo& operator=(struct EntitySystemsInfo const &) = delete;
    EntitySystemsInfo(struct EntitySystemsInfo const &) = delete;
    EntitySystemsInfo() = delete;
#endif

public:
    /**
     * @symbol  ??1EntitySystemsInfo\@\@QEAA\@XZ
     */
    MCAPI ~EntitySystemsInfo();
    /**
     * @symbol  ?bindType\@EntitySystemsInfo\@\@SAXXZ
     */
    MCAPI static void bindType();

};