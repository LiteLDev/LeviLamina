/**
 * @file  MC/ComponentInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1862298850
     * @symbol ??4ComponentInfo@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct ComponentInfo & operator=(struct ComponentInfo const &);
    /**
     * @hash   946847798
     * @symbol ??4ComponentInfo@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct ComponentInfo & operator=(struct ComponentInfo &&);
    /**
     * @hash   -47034601
     * @symbol ??1ComponentInfo@@QEAA@XZ
     */
    MCAPI ~ComponentInfo();
    /**
     * @hash   -1836262817
     * @symbol ?bindType@ComponentInfo@@SAXXZ
     */
    MCAPI static void bindType();

};