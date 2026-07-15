#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace Scripting { class WeakLifetimeScope; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidget_ComponentInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::WeakLifetimeScope& _getScope() = 0;

    virtual void _deleteComponent(::mce::UUID const&) = 0;

    virtual ::AABB const& _getWorldBounds() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
