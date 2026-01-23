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
namespace Scripting { struct Version; }
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
    MCNAPI explicit ScriptEngine(::Scripting::RegistryManager* registryManager);

    MCNAPI ::Scripting::IModuleBindingFactory* _getModuleBindingFactoryByName(::std::string const& name) const;

    MCNAPI void addModuleBindingFactory(::std::unique_ptr<::Scripting::IModuleBindingFactory> moduleBindingFactory);

    MCNAPI ::Scripting::ScriptContextResult createScriptingContext(
        ::Scripting::ContextConfig const&                   config,
        ::Scripting::ModuleDescriptor const&                forModule,
        ::std::vector<::Scripting::ModuleDescriptor> const& dependencies,
        ::Scripting::IDependencyLoader*                     loader,
        ::Scripting::IPrinter*                              printer
    );

    MCNAPI ::std::optional<::Scripting::Version>
    getLatestVersionOfModuleWithPreRelease(::std::string const& name, ::std::string_view preRelease) const;

    MCNAPI ::std::optional<::Scripting::ModuleDescriptor> getModuleDescriptorByName(::std::string const& name) const;

    MCNAPI ::std::vector<::Scripting::SupportedBindingModule> getSupportedBindingModules() const;

    MCNAPI bool hasModuleBindingFactoryByName(::std::string const& name) const;

    MCNAPI void setRuntimeFactory(
        ::std::function<::std::shared_ptr<::Scripting::IRuntime>(
            ::Scripting::ContextConfig const&,
            ::std::vector<::Scripting::ModuleDescriptor> const&
        )> factoryFn
    );

    MCNAPI ~ScriptEngine();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::RegistryManager* registryManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
