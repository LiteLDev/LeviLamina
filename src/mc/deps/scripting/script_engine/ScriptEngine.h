#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IRuntime; }
namespace Scripting { class RegistryManager; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ScriptContextResult; }
namespace Scripting { struct SupportedBindingModule; }
// clang-format on

namespace Scripting {

class ScriptEngine {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk10a4ec;
    ::ll::UntypedStorage<8, 8>  mUnk46b9bc;
    ::ll::UntypedStorage<8, 64> mUnk504baa;
    ::ll::UntypedStorage<8, 24> mUnke53786;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEngine& operator=(ScriptEngine const&);
    ScriptEngine(ScriptEngine const&);
    ScriptEngine();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptEngine(::Scripting::RegistryManager* registryManager);

    MCAPI void addModuleBindingFactory(::std::unique_ptr<::Scripting::IModuleBindingFactory> moduleBindingFactory);

    MCAPI ::Scripting::ScriptContextResult createScriptingContext(
        ::Scripting::ContextConfig const&                   config,
        ::Scripting::ModuleDescriptor const&                forModule,
        ::std::vector<::Scripting::ModuleDescriptor> const& dependencies,
        ::Scripting::IDependencyLoader*                     loader,
        ::Scripting::IPrinter*                              printer
    );

    MCAPI ::std::optional<::Scripting::ModuleDescriptor> getModuleDescriptorByName(::std::string const& name) const;

    MCAPI ::std::vector<::Scripting::SupportedBindingModule> getSupportedBindingModules() const;

    MCAPI void setRuntimeFactory(
        ::std::function<::std::shared_ptr<
            ::Scripting::
                IRuntime>(::Scripting::ContextConfig const&, ::std::vector<::Scripting::ModuleDescriptor> const&)>
            factoryFn
    );

    MCAPI ~ScriptEngine();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::RegistryManager* registryManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
