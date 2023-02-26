/**
 * @file  BlockMaterialInstanceProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0BlockMaterialInstanceProxy\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockMaterialInstanceProxy(struct BlockMaterialInstanceProxy const &);
    /**
     * @symbol  ??1BlockMaterialInstanceProxy\@\@QEAA\@XZ
     */
    MCAPI ~BlockMaterialInstanceProxy();
    /**
     * @symbol  ?bindType\@BlockMaterialInstanceProxy\@\@SAXXZ
     */
    MCAPI static void bindType();

};