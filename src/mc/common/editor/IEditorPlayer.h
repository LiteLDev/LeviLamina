#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class IEditorPlayer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEditorPlayer() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() = 0;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() = 0;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() = 0;

    // vIndex: 4
    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;

    // vIndex: 5
    virtual void _onTick() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
