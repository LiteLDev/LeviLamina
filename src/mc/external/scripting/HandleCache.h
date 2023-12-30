#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class HandleCache {
public:
    // prevent constructor by default
    HandleCache& operator=(HandleCache const&);
    HandleCache(HandleCache const&);

public:
    // NOLINTBEGIN
    // symbol: ??0HandleCache@Scripting@@QEAA@XZ
    MCAPI HandleCache();

    // symbol: ?remove@HandleCache@Scripting@@QEAAXAEBUObjectHandle@2@@Z
    MCAPI void remove(struct Scripting::ObjectHandle const&);

    // symbol: ??1HandleCache@Scripting@@QEAA@XZ
    MCAPI ~HandleCache();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_add@HandleCache@Scripting@@AEAAX_K0AEBUObjectHandle@2@@Z
    MCAPI void _add(uint64, uint64, struct Scripting::ObjectHandle const&);

    // symbol: ?_remove@HandleCache@Scripting@@AEAAX_K0@Z
    MCAPI void _remove(uint64, uint64);

    // symbol: ?_tryGetHandle@HandleCache@Scripting@@AEBA?AV?$optional@UObjectHandle@Scripting@@@std@@_K0@Z
    MCAPI std::optional<struct Scripting::ObjectHandle> _tryGetHandle(uint64, uint64) const;

    // NOLINTEND
};

}; // namespace Scripting
