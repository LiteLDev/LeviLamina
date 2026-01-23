#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::ScriptModule { class ScriptCursorProperties; }
namespace Editor::ScriptModule { class ScriptCursorRay; }
namespace Scripting { struct ClassBinding; }
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
    MCNAPI ::Scripting::Result_deprecated<uchar> getFacingDirection() const;

    MCNAPI ::Scripting::Result_deprecated<int> getMaxViewBlockDistance() const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> getPosition() const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::ScriptModule::ScriptCursorProperties> getProperties() const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::ScriptModule::ScriptCursorRay> getRay() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isVisible() const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> moveBy(::glm::ivec3 const& offset);

    MCNAPI ::Scripting::Result_deprecated<void>
    setProperties(::Editor::ScriptModule::ScriptCursorProperties const& properties);

    MCNAPI ::Scripting::Result_deprecated<void> setVisible(bool value);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
