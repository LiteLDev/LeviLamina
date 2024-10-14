#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentBeforeDurabilityDamageEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentClosureFlags; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentCompleteUseEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentConsumeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentHitEntityEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentMineBlockEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentUseEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentUseOnEvent; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentClosures {
public:
    // prevent constructor by default
    ScriptItemCustomComponentClosures();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentClosures() = default;

    // vIndex: 1
    virtual struct Scripting::Version getVersion() const;

    // vIndex: 2
    virtual struct ScriptModuleMinecraft::ScriptItemCustomComponentClosureFlags toFlags() const;

    // vIndex: 3
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent>)>>
    onUse() const;

    // vIndex: 4
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent>)>>
    onUseOn() const;

    // vIndex: 5
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent>)>>
    onCompleteUse() const;

    // vIndex: 6
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent>)>>
    onConsume() const;

    // vIndex: 7
    virtual std::optional<class Scripting::Closure<
        void(class Scripting::StrongTypedObjectHandle<
             struct ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent>)>>
    onBeforeDurabilityDamage() const;

    // vIndex: 8
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent>)>>
    onHitEntity() const;

    // vIndex: 9
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent>)>>
    onMineBlock() const;

    MCAPI ScriptItemCustomComponentClosures(struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures&&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures const&);

    MCAPI static struct Scripting::InterfaceBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI struct Scripting::Version getVersion$() const;

    MCAPI std::optional<class Scripting::Closure<
        void(class Scripting::StrongTypedObjectHandle<
             struct ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent>)>>
          onBeforeDurabilityDamage$() const;

    MCAPI std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent>)>>
    onCompleteUse$() const;

    MCAPI std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent>)>>
    onConsume$() const;

    MCAPI std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent>)>>
    onHitEntity$() const;

    MCAPI std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent>)>>
    onMineBlock$() const;

    MCAPI
    std::optional<class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                                struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent>)>>
    onUse$() const;

    MCAPI std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent>)>>
    onUseOn$() const;

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentClosureFlags toFlags$() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
