#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class WeakObjectHandle {
public:
    // NOLINTBEGIN
    // symbol: ??0WeakObjectHandle@Scripting@@QEAA@XZ
    MCAPI WeakObjectHandle();

    // symbol: ??0WeakObjectHandle@Scripting@@QEAA@$$QEAV01@@Z
    MCAPI WeakObjectHandle(class Scripting::WeakObjectHandle&& rhs);

    // symbol: ??0WeakObjectHandle@Scripting@@QEAA@AEBV01@@Z
    MCAPI WeakObjectHandle(class Scripting::WeakObjectHandle const& rhs);

    // symbol: ??0WeakObjectHandle@Scripting@@QEAA@VWeakLifetimeScope@1@UObjectHandle@1@@Z
    MCAPI WeakObjectHandle(class Scripting::WeakLifetimeScope, struct Scripting::ObjectHandle);

    // symbol: ?getHandle@WeakObjectHandle@Scripting@@QEBA?AUObjectHandle@2@XZ
    MCAPI struct Scripting::ObjectHandle getHandle() const;

    // symbol: ?getLifetimeRegistry@WeakObjectHandle@Scripting@@QEBAPEAVLifetimeRegistry@2@XZ
    MCAPI class Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    // symbol: ?getScope@WeakObjectHandle@Scripting@@QEBA?AVWeakLifetimeScope@2@XZ
    MCAPI class Scripting::WeakLifetimeScope getScope() const;

    // symbol: ??4WeakObjectHandle@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::WeakObjectHandle& operator=(class Scripting::WeakObjectHandle&& rhs);

    // symbol: ??4WeakObjectHandle@Scripting@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Scripting::WeakObjectHandle& operator=(class Scripting::WeakObjectHandle const& rhs);

    // symbol: ??8WeakObjectHandle@Scripting@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class Scripting::WeakObjectHandle const& rhs) const;

    // symbol: ?valid@WeakObjectHandle@Scripting@@QEBA_NXZ
    MCAPI bool valid() const;

    // symbol: ??1WeakObjectHandle@Scripting@@QEAA@XZ
    MCAPI ~WeakObjectHandle();

    // NOLINTEND
};

}; // namespace Scripting
