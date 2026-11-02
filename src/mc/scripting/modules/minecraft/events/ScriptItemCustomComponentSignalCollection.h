#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/IScriptItemCustomComponentSignalCollection.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubAdapter.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentAfterEventList.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ScriptDeferredFlushTracker;
struct ItemCustomComponentData;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace ScriptModuleMinecraft::Detail { struct BeforeEventExecutor; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentSignalCollection
: public ::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptCustomComponentAfterEventList> mAfterEventSignals;
    ::ll::TypedStorage<
        8,
        96,
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubAdapter<
            ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface,
            ::ComponentItem,
            ::ScriptModuleMinecraft::Detail::BeforeEventExecutor>>
        mAdapter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentSignalCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void registerClosures(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    ) /*override*/;

    virtual void subscribeToItemForComponent(
        ::ComponentItem&                                item,
        ::std::vector<::ItemCustomComponentData> const& components
    ) /*override*/;

    virtual void clear() /*override*/;

    virtual void onPreFlushAfterEvents() /*override*/;

    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

    virtual void onPostFlushAfterEvents() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptItemCustomComponentSignalCollection(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface> const
    _getEventMetadata();

    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerClosures(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );

    MCNAPI void
    $subscribeToItemForComponent(::ComponentItem& item, ::std::vector<::ItemCustomComponentData> const& components);

    MCNAPI void $clear();

    MCNAPI void $onPreFlushAfterEvents();

    MCNAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onPostFlushAfterEvents();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
