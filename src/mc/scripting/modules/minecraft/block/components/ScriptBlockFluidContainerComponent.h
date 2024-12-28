#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFluidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockFluidContainerComponent& operator=(ScriptBlockFluidContainerComponent const&);
    ScriptBlockFluidContainerComponent(ScriptBlockFluidContainerComponent const&);
    ScriptBlockFluidContainerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptBlockFluidContainerComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<int> _tryGetFillLevel() const;

    MCAPI ::Scripting::Result<void, ::Scripting::Error> addDye(::ScriptModuleMinecraft::ScriptItemType const& dye);

    MCAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptRGBA, ::Scripting::Error> getCustomColor() const;

    MCAPI ::Scripting::Result<int, ::Scripting::Error> getFillLevel() const;

    MCAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptFluidType, ::Scripting::Error> getFluidType() const;

    MCAPI ::Scripting::Result<void, ::Scripting::Error> setCustomColor(::ScriptModuleMinecraft::ScriptRGBA const& color
    );

    MCAPI ::Scripting::Result<void, ::Scripting::Error> setFillLevel(int level) const;

    MCAPI ::Scripting::Result<void, ::Scripting::Error> setFluidType(::ScriptModuleMinecraft::ScriptFluidType fluidType
    );

    MCAPI ::Scripting::Result<void, ::Scripting::Error>
    setPotionType(::ScriptModuleMinecraft::ScriptItemStack const& item);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronFluidType(::BlockSource& region, ::BlockPos position);

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockFluidContainerComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
