#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class IEditorPlayer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEditorPlayer() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() = 0;

    virtual ::Scripting::Result_deprecated<void> ready() = 0;

    virtual ::Scripting::Result_deprecated<void> quit() = 0;

    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;

    virtual void _onTick() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
