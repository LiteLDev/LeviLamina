#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptAnnotationInstance; }
namespace Editor::ScriptModule { class ScriptAnnotationMetadata; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptAnnotationManager
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptAnnotationManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7fffa7;
    ::ll::UntypedStorage<8, 16> mUnkc6f817;
    ::ll::UntypedStorage<8, 8>  mUnked63fa;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAnnotationManager& operator=(ScriptAnnotationManager const&);
    ScriptAnnotationManager(ScriptAnnotationManager const&);
    ScriptAnnotationManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptAnnotationInstance>>
    getInstance(::std::string const& id) const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptAnnotationMetadata>>
    getMetadata(::std::string const& id) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
