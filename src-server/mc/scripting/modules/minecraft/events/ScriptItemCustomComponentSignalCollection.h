#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/IScriptItemCustomComponentSignalCollection.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ScriptDeferredFlushTracker;
struct ItemCustomComponentData;
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentSignalCollection
: public ::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk19348b;
    ::ll::UntypedStorage<8, 96> mUnk39381f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentSignalCollection& operator=(ScriptItemCustomComponentSignalCollection const&);
    ScriptItemCustomComponentSignalCollection(ScriptItemCustomComponentSignalCollection const&);
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
