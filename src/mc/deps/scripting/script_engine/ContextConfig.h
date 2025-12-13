#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/DependencyResolutionBehavior.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ContextBaseGameVersion; }
namespace Scripting { class ContextCommandVersion; }
namespace Scripting { class ContextMolangVersion; }
namespace Scripting { class RuntimeConditions; }
namespace Scripting { struct Capabilities; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace Scripting {

struct ContextConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5da6f2;
    ::ll::UntypedStorage<8, 32> mUnk782aa9;
    ::ll::UntypedStorage<8, 96> mUnkc9edc0;
    ::ll::UntypedStorage<8, 32> mUnk7da5d5;
    ::ll::UntypedStorage<1, 1>  mUnkae7c5b;
    ::ll::UntypedStorage<8, 24> mUnk8dcce4;
    ::ll::UntypedStorage<4, 4>  mUnke423f8;
    ::ll::UntypedStorage<4, 8>  mUnk67ca24;
    ::ll::UntypedStorage<4, 8>  mUnkcb7615;
    ::ll::UntypedStorage<8, 40> mUnk3c790a;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContextConfig(::Scripting::ContextConfig&&);

    MCNAPI ContextConfig(::Scripting::ContextConfig const&);

    MCNAPI ContextConfig(
        ::std::string                                        runtimeName_,
        ::std::string                                        manifestUUID_,
        ::Scripting::ModuleDescriptor                        moduleDescriptor_,
        ::Scripting::Capabilities                            capabilities_,
        ::Scripting::RuntimeConditions                       runtimeConditions_,
        ::Scripting::DependencyResolutionBehavior            dependencyResolutionBehavior_,
        ::std::optional<::Scripting::ContextMolangVersion>   molangVersion_,
        ::std::optional<::Scripting::ContextCommandVersion>  commandVersion_,
        ::std::optional<::Scripting::ContextBaseGameVersion> baseGameVersion_
    );

    MCNAPI ::Scripting::ContextConfig& operator=(::Scripting::ContextConfig&&);

    MCNAPI ::Scripting::ContextConfig& operator=(::Scripting::ContextConfig const&);

    MCNAPI ~ContextConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ContextConfig&&);

    MCNAPI void* $ctor(::Scripting::ContextConfig const&);

    MCNAPI void* $ctor(
        ::std::string                                        runtimeName_,
        ::std::string                                        manifestUUID_,
        ::Scripting::ModuleDescriptor                        moduleDescriptor_,
        ::Scripting::Capabilities                            capabilities_,
        ::Scripting::RuntimeConditions                       runtimeConditions_,
        ::Scripting::DependencyResolutionBehavior            dependencyResolutionBehavior_,
        ::std::optional<::Scripting::ContextMolangVersion>   molangVersion_,
        ::std::optional<::Scripting::ContextCommandVersion>  commandVersion_,
        ::std::optional<::Scripting::ContextBaseGameVersion> baseGameVersion_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
