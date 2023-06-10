/**
 * @file  DebugEndPoint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DebugEndPoint.
 *
 */
class DebugEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGENDPOINT
public:
    class DebugEndPoint& operator=(class DebugEndPoint const &) = delete;
    DebugEndPoint(class DebugEndPoint const &) = delete;
    DebugEndPoint() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEBUGENDPOINT
    /**
     * @symbol ?contentAssert\@DebugEndPoint\@\@MEAAXW4LogArea\@\@W4LogLevel\@\@PEBD\@Z
     */
    MCVAPI void contentAssert(enum class LogArea, enum class LogLevel, char const *);
    /**
     * @symbol ?flush\@DebugEndPoint\@\@UEAAXXZ
     */
    MCVAPI void flush();
    /**
     * @symbol ?isEnabled\@DebugEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const;
    /**
     * @symbol ?log\@DebugEndPoint\@\@UEAAXW4LogArea\@\@W4LogLevel\@\@PEBD\@Z
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const *);
    /**
     * @symbol ?logOnlyOnce\@DebugEndPoint\@\@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const;
    /**
     * @symbol ?setEnabled\@DebugEndPoint\@\@UEAAX_N\@Z
     */
    MCVAPI void setEnabled(bool);
#endif
    /**
     * @symbol ??0DebugEndPoint\@\@QEAA\@V?$optional\@W4LogLevel\@\@\@std\@\@\@Z
     */
    MCAPI DebugEndPoint(class std::optional<enum class LogLevel>);
    /**
     * @symbol ?initializeContentLogging\@DebugEndPoint\@\@QEAAXAEAVResourcePackManager\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI void initializeContentLogging(class ResourcePackManager &, class Core::Path const &);

//private:

private:
    /**
     * @symbol ?mAssertAreas\@DebugEndPoint\@\@0V?$unordered_map\@W4LogArea\@\@_NU?$hash\@W4LogArea\@\@\@std\@\@U?$equal_to\@W4LogArea\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4LogArea\@\@_N\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<enum class LogArea, bool, struct std::hash<enum class LogArea>, struct std::equal_to<enum class LogArea>, class std::allocator<struct std::pair<enum class LogArea const, bool>>> const mAssertAreas;

};
