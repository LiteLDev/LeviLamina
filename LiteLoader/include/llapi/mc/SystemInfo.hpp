/**
 * @file  MC/SystemInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1220707529
     * @symbol ??0SystemInfo@@QEAA@XZ
     */
    MCAPI SystemInfo();
    /**
     * @hash   620952639
     * @symbol ??0SystemInfo@@QEAA@AEBU0@@Z
     */
    MCAPI SystemInfo(struct SystemInfo const &);
    /**
     * @hash   78123958
     * @symbol ??4SystemInfo@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct SystemInfo & operator=(struct SystemInfo const &);
    /**
     * @hash   1975772062
     * @symbol ??4SystemInfo@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct SystemInfo & operator=(struct SystemInfo &&);
    /**
     * @hash   488413783
     * @symbol ??1SystemInfo@@QEAA@XZ
     */
    MCAPI ~SystemInfo();
    /**
     * @hash   -1160929069
     * @symbol ?bindType@SystemInfo@@SAXXZ
     */
    MCAPI static void bindType();

};