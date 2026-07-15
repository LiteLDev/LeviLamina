#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAfterEventSignalHandle; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct IScriptAfterEventSignalBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptAfterEventSignalBuilder() = default;

    virtual ::ScriptModuleMinecraft::ScriptAfterEventSignalHandle
    createSignal(::Scripting::WeakLifetimeScope& scope) const = 0;

    virtual ::std::vector<::Scripting::Release> getEventDataReleases() const = 0;

    virtual ::std::vector<::Scripting::Release> getSignalReleases() const = 0;

    virtual ::std::vector<::Scripting::Release> getPropertyReleases() const = 0;

    virtual ::std::string getEventDataName() const = 0;

    virtual void
    bind(::Scripting::ModuleBindingBuilder& modulebindingBuilder, ::entt::meta_any& classBindingAny) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
