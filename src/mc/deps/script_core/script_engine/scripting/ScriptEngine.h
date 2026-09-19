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
    // ScriptEngine inner types define
    using RuntimeFactory = ::std::function<::std::shared_ptr<
        ::Scripting::IRuntime>(::Scripting::ContextConfig const&, ::std::vector<::Scripting::ModuleDescriptor> const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::RegistryManager>> mRegistryManagerUP;
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager*>                   mRegistryManager;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::shared_ptr<::Scripting::IRuntime>(
            ::Scripting::ContextConfig const&,
            ::std::vector<::Scripting::ModuleDescriptor> const&
        )>>
                                                                                                    mRuntimeFactoryFn;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Scripting::IModuleBindingFactory>>> mModuleFactories;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEngine();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptEngine(::Scripting::RegistryManager* registryManager);

    MCAPI ::Scripting::IModuleBindingFactory* _getModuleBindingFactoryByName(::std::string const& name) const;

    MCAPI void addModuleBindingFactory(::std::unique_ptr<::Scripting::IModuleBindingFactory> moduleBindingFactory);

    MCAPI ::Scripting::ScriptContextResult createScriptingContext(
        ::Scripting::ContextConfig const&                   config,
        ::Scripting::ModuleDescriptor const&                forModule,
        ::std::vector<::Scripting::ModuleDescriptor> const& dependencies,
        ::Scripting::IDependencyLoader*                     loader,
        ::Scripting::IPrinter*                              printer
    );

    MCAPI ::std::optional<::Scripting::Version>
    getLatestVersionOfModuleWithPreRelease(::std::string const& name, ::std::string_view preRelease) const;

    MCAPI ::std::optional<::Scripting::ModuleDescriptor> getModuleDescriptorByName(::std::string const& name) const;

    MCAPI ::std::vector<::Scripting::SupportedBindingModule> getSupportedBindingModules() const;

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
