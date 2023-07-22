/**
 * @file  SystemInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure SystemInfo.
 *
 */
struct SystemInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
    /**
     * @symbol  ??0SystemInfo\@\@QEAA\@XZ
     */
    MCAPI SystemInfo();
    /**
     * @symbol  ??0SystemInfo\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SystemInfo(struct SystemInfo const &);
    /**
     * @symbol  ??4SystemInfo\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SystemInfo & operator=(struct SystemInfo const &);
    /**
     * @symbol  ??4SystemInfo\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SystemInfo & operator=(struct SystemInfo &&);
    /**
     * @symbol  ??1SystemInfo\@\@QEAA\@XZ
     */
    MCAPI ~SystemInfo();
    /**
     * @symbol  ?bindType\@SystemInfo\@\@SAXXZ
     */
    MCAPI static void bindType();

};