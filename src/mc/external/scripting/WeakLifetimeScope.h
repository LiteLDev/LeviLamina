#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ILifetimeScopeListener; }
namespace Scripting { class LifetimeRegistry; }
// clang-format on

namespace Scripting {

class WeakLifetimeScope {
public:
    // NOLINTBEGIN
    // symbol: ??0WeakLifetimeScope@Scripting@@QEAA@XZ
    MCAPI WeakLifetimeScope();

    // symbol: ??0WeakLifetimeScope@Scripting@@QEAA@$$QEAV01@@Z
    MCAPI WeakLifetimeScope(class Scripting::WeakLifetimeScope&& rhs);

    // symbol: ??0WeakLifetimeScope@Scripting@@QEAA@AEBV01@@Z
    MCAPI WeakLifetimeScope(class Scripting::WeakLifetimeScope const& rhs);

    // symbol: ??0WeakLifetimeScope@Scripting@@QEAA@V?$weak_ptr@VLifetimeRegistry@Scripting@@@std@@@Z
    MCAPI explicit WeakLifetimeScope(std::weak_ptr<class Scripting::LifetimeRegistry>);

    // symbol: ?addListener@WeakLifetimeScope@Scripting@@QEBAXV?$weak_ptr@VILifetimeScopeListener@Scripting@@@std@@@Z
    MCAPI void addListener(std::weak_ptr<class Scripting::ILifetimeScopeListener> listener) const;

    // symbol: ?getLifetimeRegistry@WeakLifetimeScope@Scripting@@QEBAPEAVLifetimeRegistry@2@XZ
    MCAPI class Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    // symbol: ??4WeakLifetimeScope@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::WeakLifetimeScope& operator=(class Scripting::WeakLifetimeScope&& rhs);

    // symbol: ??4WeakLifetimeScope@Scripting@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Scripting::WeakLifetimeScope& operator=(class Scripting::WeakLifetimeScope const& rhs);

    // symbol: ??8WeakLifetimeScope@Scripting@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class Scripting::WeakLifetimeScope const& rhs) const;

    // symbol:
    // ?removeListener@WeakLifetimeScope@Scripting@@QEBAXV?$shared_ptr@VILifetimeScopeListener@Scripting@@@std@@@Z
    MCAPI void removeListener(std::shared_ptr<class Scripting::ILifetimeScopeListener> listener) const;

    // symbol: ?valid@WeakLifetimeScope@Scripting@@QEBA_NXZ
    MCAPI bool valid() const;

    // symbol: ??1WeakLifetimeScope@Scripting@@QEAA@XZ
    MCAPI ~WeakLifetimeScope();

    // NOLINTEND
};

}; // namespace Scripting
