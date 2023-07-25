#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldSessionEndPoint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDSESSIONENDPOINT
public:
    WorldSessionEndPoint& operator=(WorldSessionEndPoint const&) = delete;
    WorldSessionEndPoint(WorldSessionEndPoint const&)            = delete;
    WorldSessionEndPoint()                                       = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDSESSIONENDPOINT
    /**
     * @symbol ?flush\@WorldSessionEndPoint\@\@UEAAXXZ
     */
    MCVAPI void flush();
    /**
     * @symbol ?isEnabled\@WorldSessionEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const;
    /**
     * @symbol ?log\@WorldSessionEndPoint\@\@UEAAXW4LogArea\@\@W4LogLevel\@\@PEBD\@Z
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const*);
    /**
     * @symbol ?logOnlyOnce\@WorldSessionEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const;
    /**
     * @symbol ?setEnabled\@WorldSessionEndPoint\@\@UEAAX_N\@Z
     */
    MCVAPI void setEnabled(bool);
#endif
    /**
     * @symbol ??0WorldSessionEndPoint\@\@QEAA\@AEAVIMinecraftEventing\@\@\@Z
     */
    MCAPI WorldSessionEndPoint(class IMinecraftEventing&);
};
