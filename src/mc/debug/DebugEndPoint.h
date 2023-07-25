#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class DebugEndPoint {
public:
    // DebugEndPoint inner types declare
    // clang-format off
    class VanillaWorldChecker;
    // clang-format on

    // DebugEndPoint inner types define
    class VanillaWorldChecker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGENDPOINT_VANILLAWORLDCHECKER
    public:
        VanillaWorldChecker& operator=(VanillaWorldChecker const&) = delete;
        VanillaWorldChecker(VanillaWorldChecker const&)            = delete;
        VanillaWorldChecker()                                      = delete;
#endif

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol
         * ?onActiveResourcePacksChanged\@VanillaWorldChecker\@DebugEndPoint\@\@UEAAXAEAVResourcePackManager\@\@\@Z
         */
        virtual void onActiveResourcePacksChanged(class ResourcePackManager&);
        /**
         * @vftbl 2
         * @symbol __unk_vfn_2
         */
        virtual void __unk_vfn_2();
        /**
         * @vftbl 3
         * @symbol __unk_vfn_3
         */
        virtual void __unk_vfn_3();
        /**
         * @vftbl 4
         * @symbol __unk_vfn_4
         */
        virtual void __unk_vfn_4();
        /**
         * @vftbl 5
         * @symbol
         * ?onResourceManagerDestroyed\@VanillaWorldChecker\@DebugEndPoint\@\@UEAAXAEAVResourcePackManager\@\@\@Z
         */
        virtual void onResourceManagerDestroyed(class ResourcePackManager&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEBUGENDPOINT_VANILLAWORLDCHECKER
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~VanillaWorldChecker();
#endif
        /**
         * @symbol ?checkWorldData\@VanillaWorldChecker\@DebugEndPoint\@\@QEAAXAEBVPath\@Core\@\@\@Z
         */
        MCAPI void checkWorldData(class Core::Path const&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGENDPOINT
public:
    DebugEndPoint& operator=(DebugEndPoint const&) = delete;
    DebugEndPoint(DebugEndPoint const&)            = delete;
    DebugEndPoint()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEBUGENDPOINT
    /**
     * @symbol ?contentAssert\@DebugEndPoint\@\@MEAAXW4LogArea\@\@W4LogLevel\@\@PEBD\@Z
     */
    MCVAPI void contentAssert(enum class LogArea, enum class LogLevel, char const*);
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
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const*);
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
    MCAPI void initializeContentLogging(class ResourcePackManager&, class Core::Path const&);

    // private:

private:
    /**
     * @symbol
     * ?mAssertAreas\@DebugEndPoint\@\@0V?$unordered_map\@W4LogArea\@\@_NU?$hash\@W4LogArea\@\@\@std\@\@U?$equal_to\@W4LogArea\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4LogArea\@\@_N\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        enum class LogArea,
        bool,
        struct std::hash<enum class LogArea>,
        struct std::equal_to<enum class LogArea>,
        class std::allocator<struct std::pair<enum class LogArea const, bool>>> const mAssertAreas;
};
