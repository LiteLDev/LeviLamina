/**
 * @file  WorldSessionEndPoint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldSessionEndPoint.
 *
 */
class WorldSessionEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDSESSIONENDPOINT
public:
    class WorldSessionEndPoint& operator=(class WorldSessionEndPoint const &) = delete;
    WorldSessionEndPoint(class WorldSessionEndPoint const &) = delete;
    WorldSessionEndPoint() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDSESSIONENDPOINT
    /**
     * @hash   1010316882
     * @symbol ?flush@WorldSessionEndPoint@@UEAAXXZ
     */
    MCVAPI void flush();
    /**
     * @hash   390861414
     * @symbol ?isEnabled@WorldSessionEndPoint@@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const;
    /**
     * @hash   1560120818
     * @symbol ?log@WorldSessionEndPoint@@UEAAXW4LogArea@@W4LogLevel@@PEBD@Z
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const *);
    /**
     * @hash   1905934928
     * @symbol ?logOnlyOnce@WorldSessionEndPoint@@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const;
    /**
     * @hash   -2136813809
     * @symbol ?setEnabled@WorldSessionEndPoint@@UEAAX_N@Z
     */
    MCVAPI void setEnabled(bool);
#endif
    /**
     * @hash   1922829156
     * @symbol ??0WorldSessionEndPoint@@QEAA@AEAVIMinecraftEventing@@@Z
     */
    MCAPI WorldSessionEndPoint(class IMinecraftEventing &);

};