#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/IScriptItemCustomComponentSignalCollection.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentSignalCollection
: public ::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3e8f4b;
    ::ll::UntypedStorage<8, 24> mUnk854234;
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
    virtual void
    subscribeToItemForComponent(::ComponentItem& item, ::std::vector<::std::string> const& componentNames) /*override*/;

    // vIndex: 14
    virtual void clear() /*override*/;

    // vIndex: 8
    virtual void onPreFlushAfterEvents() /*override*/;

    // vIndex: 7
    virtual bool onFlushItemCustomComponentAfterEvents() /*override*/;

    // vIndex: 9
    virtual void onPostFlushAfterEvents() /*override*/;

    // vIndex: 0
    virtual ~ScriptItemCustomComponentSignalCollection() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentSignalCollection();

    MCAPI explicit ScriptItemCustomComponentSignalCollection(
        ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
            ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface>&& metadata
    );

    MCAPI void bindMetadata(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
                      ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface>&& metadata);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerClosures(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );

    MCAPI void $subscribeToItemForComponent(::ComponentItem& item, ::std::vector<::std::string> const& componentNames);

    MCAPI void $clear();

    MCAPI void $onPreFlushAfterEvents();

    MCAPI bool $onFlushItemCustomComponentAfterEvents();

    MCAPI void $onPostFlushAfterEvents();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
