#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::ScriptModule { class ScriptCursorProperties; }
namespace Editor::ScriptModule { class ScriptCursorRay; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptCursorService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptCursorService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk107f9a;
    ::ll::UntypedStorage<8, 8>  mUnkdd38d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorService& operator=(ScriptCursorService const&);
    ScriptCursorService(ScriptCursorService const&);
    ScriptCursorService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<uchar> getFacingDirection() const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getPosition() const;

    MCAPI ::Scripting::Result_deprecated<::Editor::ScriptModule::ScriptCursorProperties> getProperties() const;

    MCAPI ::Scripting::Result<::Editor::ScriptModule::ScriptCursorRay, ::Scripting::Error> getRay() const;

    MCAPI ::Scripting::Result_deprecated<bool> isVisible() const;

    MCAPI ::Scripting::Result<void> setProperties(::Editor::ScriptModule::ScriptCursorProperties const& properties);

    MCAPI ::Scripting::Result<void> setVisible(bool value);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptCursorService> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
