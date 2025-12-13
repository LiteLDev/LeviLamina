#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _isValid() const /*override*/;

    virtual ~ScriptBlockRecordPlayerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> ejectRecord();

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getRecord();

    MCNAPI ::Scripting::Result_deprecated<bool> isPlaying();

    MCNAPI ::Scripting::Result_deprecated<void> pauseRecord();

    MCNAPI ::Scripting::Result_deprecated<void> playRecord();

    MCNAPI ::Scripting::Result_deprecated<void> setRecord(
        ::std::optional<::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>> const& itemTypeOrId,
        bool                                                                                       startPlaying
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockRecordPlayerComponent>>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
