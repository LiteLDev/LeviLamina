#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorPlayerServiceProvider; }
namespace Editor::Services { class EditorJigsawServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptJigsawService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptJigsawService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkef3cbc;
    ::ll::UntypedStorage<8, 24> mUnkb17c45;
    ::ll::UntypedStorage<8, 16> mUnk46598d;
    ::ll::UntypedStorage<8, 16> mUnk429e86;
    ::ll::UntypedStorage<8, 16> mUnk1e3220;
    ::ll::UntypedStorage<8, 16> mUnk3d5c5f;
    ::ll::UntypedStorage<8, 16> mUnk9f66df;
    ::ll::UntypedStorage<8, 8>  mUnk285082;
    ::ll::UntypedStorage<8, 24> mUnkb976de;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptJigsawService& operator=(ScriptJigsawService const&);
    ScriptJigsawService(ScriptJigsawService const&);
    ScriptJigsawService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptJigsawService(
        ::Editor::Services::EditorJigsawServiceProvider* jigsawService,
        ::Editor::EditorPlayerServiceProvider*           playerService,
        ::Scripting::WeakLifetimeScope const&            scope
    );

    MCNAPI ::Editor::ScriptModule::ScriptJigsawService& operator=(::Editor::ScriptModule::ScriptJigsawService&& other);

    MCNAPI ~ScriptJigsawService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindEditorJigsawSection();

    MCNAPI static ::Scripting::InterfaceBinding bindEditorRegistryFile();

    MCNAPI static ::Scripting::InterfaceBinding bindJigsawBlockData();

    MCNAPI static ::Scripting::EnumBinding bindJigsawJointType();

    MCNAPI static ::Scripting::EnumBinding bindJigsawJsonType();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::Services::EditorJigsawServiceProvider* jigsawService,
        ::Editor::EditorPlayerServiceProvider*           playerService,
        ::Scripting::WeakLifetimeScope const&            scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
