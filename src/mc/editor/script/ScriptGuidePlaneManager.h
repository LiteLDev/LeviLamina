#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptGuidePlaneManager
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptGuidePlaneManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9f05cf;
    ::ll::UntypedStorage<8, 8>  mUnk80bfd4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGuidePlaneManager& operator=(ScriptGuidePlaneManager const&);
    ScriptGuidePlaneManager(ScriptGuidePlaneManager const&);
    ScriptGuidePlaneManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> _setPlaneNormal(::std::string const& planeId, ::Vec3 const& normal);

    MCNAPI ::Scripting::Result_deprecated<void> _setPlaneOrigin(::std::string const& planeId, ::Vec3 const& origin);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
