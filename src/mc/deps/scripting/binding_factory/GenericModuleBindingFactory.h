#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/IModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
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
        ::ll::UntypedStorage<8, 24> mUnk25c5a6;
        // NOLINTEND

    public:
        // prevent constructor by default
        ModuleData& operator=(ModuleData const&);
        ModuleData(ModuleData const&);
        ModuleData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ModuleData(
            ::std::string const&   _alias,
            ::Scripting::Version&& _version,
            ::std::function<::std::optional<
                ::Scripting::
                    ModuleBinding>(::Scripting::ModuleBindingBuilder&, ::std::optional<::Scripting::ContextConfig> const&)>&&
                                                           _moduleCreatorFn,
            ::std::vector<::Scripting::ModuleDescriptor>&& _dependencies
        );

        MCAPI ~ModuleData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::std::string const&   _alias,
            ::Scripting::Version&& _version,
            ::std::function<::std::optional<
                ::Scripting::
                    ModuleBinding>(::Scripting::ModuleBindingBuilder&, ::std::optional<::Scripting::ContextConfig> const&)>&&
                                                           _moduleCreatorFn,
            ::std::vector<::Scripting::ModuleDescriptor>&& _dependencies
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3f0c4d;
    ::ll::UntypedStorage<8, 32> mUnk518bdc;
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
    virtual ::Scripting::UUID getUUID() const /*override*/;

    // vIndex: 3
    virtual bool hasAlias(::std::string const& alias) const /*override*/;

    // vIndex: 4
    virtual ::std::vector<::Scripting::Version> getSupportedVersions() const /*override*/;

    // vIndex: 5
    virtual ::std::vector<::Scripting::ModuleDescriptor> getDependencies(::Scripting::Version version) const
        /*override*/;

    // vIndex: 6
    virtual ::std::optional<::Scripting::ModuleBinding> createModuleBinding(
        ::Scripting::Version                               version,
        ::std::optional<::Scripting::ContextConfig> const& config
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GenericModuleBindingFactory(::std::string name, ::Scripting::UUID uuid);

    MCAPI void _addRuntimeDependency(
        ::std::vector<::Scripting::ModuleDescriptor>& dependencies,
        ::Scripting::Version                          runtimeVersion
    );

    MCAPI void addVersionedModuleBinding(
        ::Scripting::Version version,
        ::std::function<::std::optional<
            ::Scripting::
                ModuleBinding>(::Scripting::ModuleBindingBuilder&, ::std::optional<::Scripting::ContextConfig> const&)>
                                                     moduleCreatorFn,
        ::Scripting::Version                         runtimeVersion,
        ::std::vector<::Scripting::ModuleDescriptor> dependencies
    );

    MCAPI void addVersionedModuleBinding(
        ::std::string        alias,
        ::Scripting::Version version,
        ::std::function<::std::optional<
            ::Scripting::
                ModuleBinding>(::Scripting::ModuleBindingBuilder&, ::std::optional<::Scripting::ContextConfig> const&)>
                                                     moduleCreatorFn,
        ::Scripting::Version                         runtimeVersion,
        ::std::vector<::Scripting::ModuleDescriptor> dependencies
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name, ::Scripting::UUID uuid);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string $getName() const;

    MCAPI ::Scripting::UUID $getUUID() const;

    MCAPI bool $hasAlias(::std::string const& alias) const;

    MCAPI ::std::vector<::Scripting::Version> $getSupportedVersions() const;

    MCAPI ::std::vector<::Scripting::ModuleDescriptor> $getDependencies(::Scripting::Version version) const;

    MCAPI ::std::optional<::Scripting::ModuleBinding>
    $createModuleBinding(::Scripting::Version version, ::std::optional<::Scripting::ContextConfig> const& config);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
