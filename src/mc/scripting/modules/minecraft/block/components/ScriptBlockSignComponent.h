#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawTextInterface; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockSignComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockSignComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::std::optional<::ScriptModuleMinecraft::ScriptRawTextInterface>>
    getRawText(::SignTextSide side) const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getText(::SignTextSide side) const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::ItemColor>> getTextDyeColor(::SignTextSide side) const;

    MCNAPI ::Scripting::Result_deprecated<bool> getWaxed() const;

    MCNAPI ::Scripting::Result_deprecated<void> setText(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& messageParameter,
        ::SignTextSide                                                                           side
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    setTextDyeColor(::std::optional<::ItemColor> color, ::SignTextSide side);

    MCNAPI ::Scripting::Result_deprecated<void> setWaxed(bool waxed);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
