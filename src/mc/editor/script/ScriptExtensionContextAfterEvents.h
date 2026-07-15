#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace Editor { class ServiceProviderCollection; }
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptExtensionContextAfterEvents
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptExtensionContextAfterEvents> {
public:
    // ScriptExtensionContextAfterEvents inner types declare
    // clang-format off
    class ScriptExtensionContextAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptExtensionContextAfterEvents inner types define
    class ScriptExtensionContextAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::Editor::ScriptModule::ScriptExtensionContextAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf45d6d;
    ::ll::UntypedStorage<8, 16> mUnk86589b;
    ::ll::UntypedStorage<8, 8>  mUnk586770;
    ::ll::UntypedStorage<8, 24> mUnk21fe84;
    ::ll::UntypedStorage<8, 8>  mUnkd307a2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExtensionContextAfterEvents& operator=(ScriptExtensionContextAfterEvents const&);
    ScriptExtensionContextAfterEvents(ScriptExtensionContextAfterEvents const&);
    ScriptExtensionContextAfterEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptExtensionContextAfterEvents&
    operator=(::Editor::ScriptModule::ScriptExtensionContextAfterEvents&& rhs);

    MCNAPI void registerListeners(::Editor::ServiceProviderCollection& serviceProviders);

    MCNAPI ~ScriptExtensionContextAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );

    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& getMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
