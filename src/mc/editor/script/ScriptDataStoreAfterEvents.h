#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreAfterEvents
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptDataStoreAfterEvents> {
public:
    // ScriptDataStoreAfterEvents inner types declare
    // clang-format off
    class ScriptDataStoreAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptDataStoreAfterEvents inner types define
    class ScriptDataStoreAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::Editor::ScriptModule::ScriptDataStoreAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk12d589;
    ::ll::UntypedStorage<8, 8>  mUnk19d7df;
    ::ll::UntypedStorage<8, 24> mUnkbce81d;
    ::ll::UntypedStorage<8, 24> mUnk3b5e67;
    ::ll::UntypedStorage<8, 8>  mUnkd2291d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreAfterEvents& operator=(ScriptDataStoreAfterEvents const&);
    ScriptDataStoreAfterEvents(ScriptDataStoreAfterEvents const&);
    ScriptDataStoreAfterEvents();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& mMetadata();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
