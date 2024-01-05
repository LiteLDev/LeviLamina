#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class StrongObjectHandle {
public:
    // NOLINTBEGIN
    // symbol: ??0StrongObjectHandle@Scripting@@QEAA@$$QEAV01@@Z
    MCAPI StrongObjectHandle(class Scripting::StrongObjectHandle&& rhs);

    // symbol: ??0StrongObjectHandle@Scripting@@QEAA@AEBV01@@Z
    MCAPI StrongObjectHandle(class Scripting::StrongObjectHandle const& rhs);

    // symbol: ??0StrongObjectHandle@Scripting@@QEAA@VWeakLifetimeScope@1@UObjectHandle@1@_N@Z
    MCAPI StrongObjectHandle(class Scripting::WeakLifetimeScope, struct Scripting::ObjectHandle, bool);

    // symbol: ?asAny@StrongObjectHandle@Scripting@@QEAA?AVmeta_any@entt@@XZ
    MCAPI entt::meta_any asAny();

    // symbol: ?getHandle@StrongObjectHandle@Scripting@@QEBA?AUObjectHandle@2@XZ
    MCAPI struct Scripting::ObjectHandle getHandle() const;

    // symbol: ?getLifetimeRegistry@StrongObjectHandle@Scripting@@QEBAPEAVLifetimeRegistry@2@XZ
    MCAPI class Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    // symbol: ?getScope@StrongObjectHandle@Scripting@@QEBA?AVWeakLifetimeScope@2@XZ
    MCAPI class Scripting::WeakLifetimeScope getScope() const;

    // symbol: ??4StrongObjectHandle@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::StrongObjectHandle& operator=(class Scripting::StrongObjectHandle&& rhs);

    // symbol: ??4StrongObjectHandle@Scripting@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Scripting::StrongObjectHandle& operator=(class Scripting::StrongObjectHandle const& rhs);

    // symbol: ??8StrongObjectHandle@Scripting@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class Scripting::StrongObjectHandle const& rhs) const;

    // symbol: ?valid@StrongObjectHandle@Scripting@@QEBA_NXZ
    MCAPI bool valid() const;

    // symbol: ??1StrongObjectHandle@Scripting@@QEAA@XZ
    MCAPI ~StrongObjectHandle();

    // symbol: ?release@StrongObjectHandle@Scripting@@SA?AUObjectHandle@2@$$QEAV12@@Z
    MCAPI static struct Scripting::ObjectHandle release(class Scripting::StrongObjectHandle&&);

    // symbol: ?InvalidHandle@StrongObjectHandle@Scripting@@2V12@B
    MCAPI static class Scripting::StrongObjectHandle const InvalidHandle;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0StrongObjectHandle@Scripting@@IEAA@XZ
    MCAPI StrongObjectHandle();

    // symbol: ?_addReference@StrongObjectHandle@Scripting@@IEAAXXZ
    MCAPI void _addReference();

    // NOLINTEND
};

}; // namespace Scripting
