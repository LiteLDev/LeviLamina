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
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft::Detail { struct BeforeEventExecutor; }
namespace Scripting { struct ModuleBindingBuilder; }
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
    // vIndex: 13
    virtual void registerClosures(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    ) /*override*/;

    // vIndex: 14
    virtual void subscribeToItemForComponent(
        ::ComponentItem&                                item,
        ::std::vector<::ItemCustomComponentData> const& components
    ) /*override*/;

    // vIndex: 15
    virtual void clear() /*override*/;

    // vIndex: 9
    virtual void onPreFlushAfterEvents() /*override*/;

    // vIndex: 8
    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

    // vIndex: 10
    virtual void onPostFlushAfterEvents() /*override*/;

    // vIndex: 0
    virtual ~ScriptItemCustomComponentSignalCollection() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptItemCustomComponentSignalCollection(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface> const
    _getEventMetadata();

    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerClosures(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );

    MCAPI void
    $subscribeToItemForComponent(::ComponentItem& item, ::std::vector<::ItemCustomComponentData> const& components);

    MCAPI void $clear();

    MCAPI void $onPreFlushAfterEvents();

    MCAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void $onPostFlushAfterEvents();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
