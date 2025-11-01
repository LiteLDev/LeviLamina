#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/IModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class GenericModuleBindingFactory : public ::Scripting::IModuleBindingFactory {
public:
    // GenericModuleBindingFactory inner types declare
    // clang-format off
    struct ModuleData;
    // clang-format on
    
    // GenericModuleBindingFactory inner types define
    struct ModuleData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf72c40;
        ::ll::UntypedStorage<8, 40> mUnk8aa486;
        ::ll::UntypedStorage<8, 64> mUnk339eb2;
        ::ll::UntypedStorage<8, 24> mUnk179b59;
        ::ll::UntypedStorage<1, 1> mUnk6b9ccf;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ModuleData& operator=(ModuleData const&);
        ModuleData(ModuleData const&);
        ModuleData();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ModuleData(::std::string _alias, ::Scripting::Version&& _version, ::std::function<::std::optional<::Scripting::ModuleBinding>(::Scripting::ModuleBindingBuilder&, ::std::optional<::Scripting::ContextConfig> const&)>&& _moduleCreatorFn, ::std::vector<::Scripting::ModuleDependency>&& _dependencies, bool _importRestricted);
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::string _alias, ::Scripting::Version&& _version, ::std::function<::std::optional<::Scripting::ModuleBinding>(::Scripting::ModuleBindingBuilder&, ::std::optional<::Scripting::ContextConfig> const&)>&& _moduleCreatorFn, ::std::vector<::Scripting::ModuleDependency>&& _dependencies, bool _importRestricted);
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk474121;
    ::ll::UntypedStorage<8, 16> mUnk13b033;
    ::ll::UntypedStorage<8, 24> mUnkafd931;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericModuleBindingFactory& operator=(GenericModuleBindingFactory const&);
    GenericModuleBindingFactory(GenericModuleBindingFactory const&);
    GenericModuleBindingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GenericModuleBindingFactory() /*override*/;

    // vIndex: 1
    virtual ::std::string getName() const /*override*/;

    // vIndex: 2
    virtual ::mce::UUID getUUID() const /*override*/;

    // vIndex: 3
    virtual bool hasAlias(::std::string const& alias) const /*override*/;

    // vIndex: 4
    virtual ::std::vector<::Scripting::Version> getSupportedVersions() const /*override*/;

    // vIndex: 5
    virtual ::std::vector<::Scripting::ModuleDependency> getDependencies(::Scripting::Version version) const /*override*/;

    // vIndex: 6
    virtual ::std::optional<::Scripting::ModuleBinding> createModuleBinding(::Scripting::Version version, ::std::optional<::Scripting::ContextConfig> const& config) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GenericModuleBindingFactory(::std::string moduleName, ::mce::UUID moduleUUID);

    MCNAPI void _addRuntimeDependency(::std::vector<::Scripting::ModuleDependency>& dependencies, ::Scripting::Version runtimeVersion);

    MCNAPI void addVersionedModuleBinding(::Scripting::Version version, ::std::function<::std::optional<::Scripting::ModuleBinding>(::Scripting::ModuleBindingBuilder&, ::std::optional<::Scripting::ContextConfig> const&)> moduleCreatorFn, ::Scripting::Version runtimeVersion, ::std::vector<::Scripting::ModuleDependency> dependencies, bool importRestricted);

    MCNAPI void addVersionedModuleBinding(::std::string alias, ::Scripting::Version version, ::std::function<::std::optional<::Scripting::ModuleBinding>(::Scripting::ModuleBindingBuilder&, ::std::optional<::Scripting::ContextConfig> const&)> moduleCreatorFn, ::Scripting::Version runtimeVersion, ::std::vector<::Scripting::ModuleDependency> dependencies, bool importRestricted);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string moduleName, ::mce::UUID moduleUUID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getName() const;

    MCNAPI ::mce::UUID $getUUID() const;

    MCNAPI bool $hasAlias(::std::string const& alias) const;

    MCNAPI ::std::vector<::Scripting::Version> $getSupportedVersions() const;

    MCNAPI ::std::vector<::Scripting::ModuleDependency> $getDependencies(::Scripting::Version version) const;

    MCNAPI ::std::optional<::Scripting::ModuleBinding> $createModuleBinding(::Scripting::Version version, ::std::optional<::Scripting::ContextConfig> const& config);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
