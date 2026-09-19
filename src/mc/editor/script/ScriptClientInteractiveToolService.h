#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { struct ExtrudeInteractiveToolOptions; }
namespace Editor::ScriptModule { struct SmartFillInteractiveToolOptions; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptClientInteractiveToolService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk20562b;
    ::ll::UntypedStorage<8, 8>  mUnkcf411e;
    ::ll::UntypedStorage<8, 16> mUnka50812;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientInteractiveToolService& operator=(ScriptClientInteractiveToolService const&);
    ScriptClientInteractiveToolService(ScriptClientInteractiveToolService const&);
    ScriptClientInteractiveToolService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error>> activateExtrude(
        ::Scripting::ScriptObjectFactory&                            factory,
        ::Editor::ScriptModule::ExtrudeInteractiveToolOptions const& options
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error>> activateSmartFill(
        ::Scripting::ScriptObjectFactory&                              factory,
        ::Editor::ScriptModule::SmartFillInteractiveToolOptions const& options
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error>>
    deactivate(::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error>>
    resume(::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<bool, ::Scripting::Error>>
    supportsExtrude(::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<bool, ::Scripting::Error>>
    supportsSmartFill(::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error>> updateExtrude(
        ::Scripting::ScriptObjectFactory&                            factory,
        ::Editor::ScriptModule::ExtrudeInteractiveToolOptions const& options
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error>> updateSmartFill(
        ::Scripting::ScriptObjectFactory&                              factory,
        ::Editor::ScriptModule::SmartFillInteractiveToolOptions const& options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindExtrudeOptions();

    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::InterfaceBinding bindSmartFillOptions();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
