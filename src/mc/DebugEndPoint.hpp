/**
 * @file  DebugEndPoint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
    /**
     * @symbol  ?initializeContentLogging\@DebugEndPoint\@\@QEAAXAEAVResourcePackManager\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI void initializeContentLogging(class ResourcePackManager &, class Core::Path const &);

//private:

private:
    /**
     * @symbol  ?mAssertAreas\@DebugEndPoint\@\@0V?$unordered_map\@W4LogArea\@\@_NU?$hash\@W4LogArea\@\@\@std\@\@U?$equal_to\@W4LogArea\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4LogArea\@\@_N\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<enum class LogArea, bool, struct std::hash<enum class LogArea>, struct std::equal_to<enum class LogArea>, class std::allocator<struct std::pair<enum class LogArea const, bool>>> const mAssertAreas;

};