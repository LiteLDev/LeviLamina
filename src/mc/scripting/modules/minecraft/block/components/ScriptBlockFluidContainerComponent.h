#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
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
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFluidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptBlockFluidContainerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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

    MCAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockFluidContainerComponent>>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
