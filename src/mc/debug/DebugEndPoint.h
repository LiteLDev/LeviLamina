#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LogArea.h"
#include "mc/enums/LogLevel.h"

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
    public:
        // prevent constructor by default
        VanillaWorldChecker& operator=(VanillaWorldChecker const&);
        VanillaWorldChecker(VanillaWorldChecker const&);
        VanillaWorldChecker();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1VanillaWorldChecker@DebugEndPoint@@UEAA@XZ
        virtual ~VanillaWorldChecker();

        // vIndex: 1, symbol:
        // ?onActiveResourcePacksChanged@VanillaWorldChecker@DebugEndPoint@@UEAAXAEAVResourcePackManager@@@Z
        virtual void onActiveResourcePacksChanged(class ResourcePackManager& mgr);

        // vIndex: 2, symbol: __unk_vfn_2
        virtual void __unk_vfn_2();

        // vIndex: 3, symbol: __unk_vfn_3
        virtual void __unk_vfn_3();

        // vIndex: 4, symbol: __unk_vfn_4
        virtual void __unk_vfn_4();

        // vIndex: 5, symbol:
        // ?onResourceManagerDestroyed@VanillaWorldChecker@DebugEndPoint@@UEAAXAEAVResourcePackManager@@@Z
        virtual void onResourceManagerDestroyed(class ResourcePackManager& mgr);

        // symbol: ?checkWorldData@VanillaWorldChecker@DebugEndPoint@@QEAAXAEBVPath@Core@@@Z
        MCAPI void checkWorldData(class Core::Path const& levelPath);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DebugEndPoint& operator=(DebugEndPoint const&);
    DebugEndPoint(DebugEndPoint const&);
    DebugEndPoint();

public:
    // NOLINTBEGIN
    // symbol: ?contentAssert@DebugEndPoint@@MEAAXW4LogArea@@W4LogLevel@@PEBD@Z
    MCVAPI void contentAssert(::LogArea area, ::LogLevel level, char const* message);

    // symbol: ?flush@DebugEndPoint@@UEAAXXZ
    MCVAPI void flush();

    // symbol: ?isEnabled@DebugEndPoint@@UEBA_NXZ
    MCVAPI bool isEnabled() const;

    // symbol: ?log@DebugEndPoint@@UEAAXW4LogArea@@W4LogLevel@@PEBD@Z
    MCVAPI void log(::LogArea area, ::LogLevel level, char const* message);

    // symbol: ?logOnlyOnce@DebugEndPoint@@UEBA_NXZ
    MCVAPI bool logOnlyOnce() const;

    // symbol: ?setEnabled@DebugEndPoint@@UEAAX_N@Z
    MCVAPI void setEnabled(bool newState);

    // symbol: ??0DebugEndPoint@@QEAA@V?$optional@W4LogLevel@@@std@@@Z
    MCAPI explicit DebugEndPoint(std::optional<::LogLevel>);

    // symbol: ?initializeContentLogging@DebugEndPoint@@QEAAXAEAVResourcePackManager@@AEBVPath@Core@@@Z
    MCAPI void initializeContentLogging(class ResourcePackManager& mgr, class Core::Path const& levelPath);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mAssertAreas@DebugEndPoint@@0V?$unordered_map@W4LogArea@@_NU?$hash@W4LogArea@@@std@@U?$equal_to@W4LogArea@@@3@V?$allocator@U?$pair@$$CBW4LogArea@@_N@std@@@3@@std@@B
    MCAPI static std::unordered_map<::LogArea, bool> const mAssertAreas;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mAssertAreas() { return mAssertAreas; }

    // NOLINTEND
};
