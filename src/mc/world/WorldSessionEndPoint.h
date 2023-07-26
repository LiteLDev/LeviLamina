#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldSessionEndPoint {

public:
    // prevent constructor by default
    WorldSessionEndPoint& operator=(WorldSessionEndPoint const&) = delete;
    WorldSessionEndPoint(WorldSessionEndPoint const&)            = delete;
    WorldSessionEndPoint()                                       = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDSESSIONENDPOINT
    /**
     * @symbol ?flush\@WorldSessionEndPoint\@\@UEAAXXZ
     */
    MCVAPI void flush(); // NOLINT
    /**
     * @symbol ?isEnabled\@WorldSessionEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const; // NOLINT
    /**
     * @symbol ?log\@WorldSessionEndPoint\@\@UEAAXW4LogArea\@\@W4LogLevel\@\@PEBD\@Z
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const*); // NOLINT
    /**
     * @symbol ?logOnlyOnce\@WorldSessionEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const; // NOLINT
    /**
     * @symbol ?setEnabled\@WorldSessionEndPoint\@\@UEAAX_N\@Z
     */
    MCVAPI void setEnabled(bool); // NOLINT
#endif
    /**
     * @symbol ??0WorldSessionEndPoint\@\@QEAA\@AEAVIMinecraftEventing\@\@\@Z
     */
    MCAPI WorldSessionEndPoint(class IMinecraftEventing&); // NOLINT
};
