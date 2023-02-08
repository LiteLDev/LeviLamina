/**
 * @file  WorldSessionEndPoint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1102203858
     * @symbol  ?flush\@WorldSessionEndPoint\@\@UEAAXXZ
     */
    MCVAPI void flush();
    /**
     * @hash   495940998
     * @symbol  ?isEnabled\@WorldSessionEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const;
    /**
     * @hash   500729794
     * @symbol  ?log\@WorldSessionEndPoint\@\@UEAAXW4LogArea\@\@W4LogLevel\@\@PEBD\@Z
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const *);
    /**
     * @hash   2005832800
     * @symbol  ?logOnlyOnce\@WorldSessionEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const;
    /**
     * @hash   1307230271
     * @symbol  ?setEnabled\@WorldSessionEndPoint\@\@UEAAX_N\@Z
     */
    MCVAPI void setEnabled(bool);
#endif
    /**
     * @hash   863422756
     * @symbol  ??0WorldSessionEndPoint\@\@QEAA\@AEAVIMinecraftEventing\@\@\@Z
     */
    MCAPI WorldSessionEndPoint(class IMinecraftEventing &);

};