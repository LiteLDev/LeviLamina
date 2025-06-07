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
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentSignalCollection
: public ::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3e8f4b;
    ::ll::UntypedStorage<8, 24> mUnk19348b;
    ::ll::UntypedStorage<8, 88> mUnk39381f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentSignalCollection& operator=(ScriptItemCustomComponentSignalCollection const&);
    ScriptItemCustomComponentSignalCollection(ScriptItemCustomComponentSignalCollection const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual void registerClosures(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    ) /*override*/;

    // vIndex: 13
    virtual void subscribeToItemForComponent(
        ::ComponentItem&                                item,
        ::std::vector<::ItemCustomComponentData> const& components
    ) /*override*/;

    // vIndex: 14
    virtual void clear() /*override*/;

    // vIndex: 8
    virtual void onPreFlushAfterEvents() /*override*/;

    // vIndex: 7
    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

    // vIndex: 9
    virtual void onPostFlushAfterEvents() /*override*/;

    // vIndex: 0
    virtual ~ScriptItemCustomComponentSignalCollection() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemCustomComponentSignalCollection();

    MCNAPI explicit ScriptItemCustomComponentSignalCollection(
        ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
            ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface>&& metadata
    );

    MCNAPI void bindMetadata(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
            ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface>&& metadata
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
