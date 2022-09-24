/**
 * @file  BlockMaterialInstanceProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockMaterialInstanceProxy.
 *
 */
struct BlockMaterialInstanceProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCEPROXY
public:
    struct BlockMaterialInstanceProxy& operator=(struct BlockMaterialInstanceProxy const &) = delete;
    BlockMaterialInstanceProxy() = delete;
#endif

public:
    /**
     * @hash   578841071
     * @symbol ??0BlockMaterialInstanceProxy@@QEAA@AEBU0@@Z
     */
    MCAPI BlockMaterialInstanceProxy(struct BlockMaterialInstanceProxy const &);
    /**
     * @hash   1066830879
     * @symbol ??1BlockMaterialInstanceProxy@@QEAA@XZ
     */
    MCAPI ~BlockMaterialInstanceProxy();
    /**
     * @hash   -1641357357
     * @symbol ?bindType@BlockMaterialInstanceProxy@@SAXXZ
     */
    MCAPI static void bindType();

};