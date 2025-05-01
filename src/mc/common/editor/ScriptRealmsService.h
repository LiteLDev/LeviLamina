#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/RealmsServiceStatus.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorPlayerServiceProvider; }
namespace Editor::ScriptModule { class ScriptGameOptions; }
namespace Editor::Services { class EditorRealmsServiceProvider; }
namespace Editor::Services { struct EditorRealmsWorld; }
namespace Editor::Services { struct EditorRealmsWorldSlot; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptRealmsService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptRealmsService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk10a30a;
    ::ll::UntypedStorage<8, 24> mUnka75234;
    ::ll::UntypedStorage<8, 24> mUnk377ca8;
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
    MCNAPI ScriptRealmsService(::Editor::ScriptModule::ScriptRealmsService&&);

    MCNAPI ScriptRealmsService(
        ::Editor::Services::EditorRealmsServiceProvider* realmsService,
        ::Editor::EditorPlayerServiceProvider*           playerService,
        ::Scripting::WeakLifetimeScope const&            scope
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<::std::string const, ::Scripting::Error, void>>
    beginDownloadFromRealms(::std::string realmsWorldId, int slotId, ::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<bool, ::Scripting::Error, void>> beginUploadToRealms(
        ::std::string                             realmsWorldId,
        int                                       slotId,
        ::Editor::ScriptModule::ScriptGameOptions gameOptions,
        ::Scripting::ScriptObjectFactory&         factory
    );

    MCNAPI bool canUploadWorld();

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::Promise<::std::vector<::Editor::Services::EditorRealmsWorld>, ::Scripting::Error, void>>
    getRealmWorldlist(::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::Editor::Services::RealmsServiceStatus getServiceStatus();

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::Promise<::std::vector<::Editor::Services::EditorRealmsWorldSlot>, ::Scripting::Error, void>>
    getSlots(::std::string const& worldId, ::Scripting::ScriptObjectFactory& factory);

    MCNAPI bool isRealmsServiceAvailable();

    MCNAPI ::Editor::ScriptModule::ScriptRealmsService& operator=(::Editor::ScriptModule::ScriptRealmsService&&);

    MCNAPI ~ScriptRealmsService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::Services::EditorRealmsWorld> bindEditorRealmsWorld();

    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::Services::EditorRealmsWorldSlot>
    bindEditorRealmsWorldSlot();

    MCNAPI static ::Scripting::
        EnumBindingBuilder<::Editor::Services::RealmsServiceStatus, ::Editor::Services::RealmsServiceStatus>
        bindRealmsServiceStatusEnum();

    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptRealmsService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptRealmsService&&);

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
