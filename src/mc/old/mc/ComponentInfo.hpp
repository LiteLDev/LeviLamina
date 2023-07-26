/**
 * @file  ComponentInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ComponentInfo.
 *
 */
struct ComponentInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTINFO
public:
    ComponentInfo(struct ComponentInfo const &) = delete;
    ComponentInfo() = delete;
#endif

public:
    /**
     * @symbol  ??4ComponentInfo\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ComponentInfo & operator=(struct ComponentInfo const &);
    /**
     * @symbol  ??4ComponentInfo\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ComponentInfo & operator=(struct ComponentInfo &&);
    /**
     * @symbol  ??1ComponentInfo\@\@QEAA\@XZ
     */
    MCAPI ~ComponentInfo();
    /**
     * @symbol  ?bindType\@ComponentInfo\@\@SAXXZ
     */
    MCAPI static void bindType();

};