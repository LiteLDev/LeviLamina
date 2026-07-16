#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorPlayerServiceProvider; }
namespace Editor::Services { class EditorRealmsServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptRealmsService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptRealmsService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka5de68;
    ::ll::UntypedStorage<8, 24> mUnk18b640;
    ::ll::UntypedStorage<8, 24> mUnke58cc5;
    ::ll::UntypedStorage<8, 16> mUnkde271f;
    ::ll::UntypedStorage<8, 16> mUnke5e21d;
    ::ll::UntypedStorage<8, 16> mUnk6d20ef;
    ::ll::UntypedStorage<8, 16> mUnkdb0f42;
    ::ll::UntypedStorage<8, 8>  mUnk3aa445;
    ::ll::UntypedStorage<8, 24> mUnk4d1c99;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsService& operator=(ScriptRealmsService const&);
    ScriptRealmsService(ScriptRealmsService const&);
    ScriptRealmsService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptRealmsService(
        ::Editor::Services::EditorRealmsServiceProvider* realmsService,
        ::Editor::EditorPlayerServiceProvider*           playerService,
        ::Scripting::WeakLifetimeScope const&            scope
    );

    MCNAPI ::Editor::ScriptModule::ScriptRealmsService& operator=(::Editor::ScriptModule::ScriptRealmsService&& other);

    MCNAPI ~ScriptRealmsService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindEditorRealmsServiceAvailabilityEnum();

    MCNAPI static ::Scripting::InterfaceBinding bindEditorRealmsWorld();

    MCNAPI static ::Scripting::InterfaceBinding bindEditorRealmsWorldSlot();

    MCNAPI static ::Scripting::EnumBinding bindRealmsServiceStatusEnum();

    MCNAPI static ::Scripting::EnumBinding bindRealmsWorldUploadResultEnum();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::Services::EditorRealmsServiceProvider* realmsService,
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
