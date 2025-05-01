#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf47896;
    ::ll::UntypedStorage<4, 4> mUnk79f968;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptBlockLiquidContainerComponent& operator=(BaseScriptBlockLiquidContainerComponent const&);
    BaseScriptBlockLiquidContainerComponent(BaseScriptBlockLiquidContainerComponent const&);
    BaseScriptBlockLiquidContainerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::Scripting::Result<void> setFillLevel(int level);

    // vIndex: 3
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~BaseScriptBlockLiquidContainerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> getFillLevel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent>
    bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $setFillLevel(int level);

    MCNAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
