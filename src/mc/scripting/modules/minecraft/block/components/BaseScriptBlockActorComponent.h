#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

namespace ScriptModuleMinecraft {

class BaseScriptBlockActorComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb09225;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptBlockActorComponent& operator=(BaseScriptBlockActorComponent const&);
    BaseScriptBlockActorComponent(BaseScriptBlockActorComponent const&);
    BaseScriptBlockActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseScriptBlockActorComponent() /*override*/;

    // vIndex: 3
    virtual bool _isValid() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
