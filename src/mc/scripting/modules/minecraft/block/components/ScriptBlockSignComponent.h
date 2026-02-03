#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class SignBlockActor;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawTextInterface; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockSignComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockSignComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SignBlockActor const* _tryGetSign() const;

    MCFOLD ::SignBlockActor* _tryGetSign();

    MCAPI ::Scripting::Result_deprecated<::std::optional<::ScriptModuleMinecraft::ScriptRawTextInterface>>
    getRawText(::SignTextSide side) const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getText(::SignTextSide side) const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::ItemColor>> getTextDyeColor(::SignTextSide side) const;

    MCAPI ::Scripting::Result_deprecated<bool> getWaxed() const;

    MCAPI ::Scripting::Result_deprecated<void> setText(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& messageParameter,
        ::SignTextSide                                                                           side
    );

    MCAPI ::Scripting::Result_deprecated<void> setTextDyeColor(::std::optional<::ItemColor> color, ::SignTextSide side);

    MCAPI ::Scripting::Result_deprecated<void> setWaxed(bool waxed);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockSignComponent>>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
