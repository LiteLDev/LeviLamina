#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RuntimeConditions; }
namespace Scripting { class TypeMapBuilder; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ObjectFactory; }
// clang-format on

namespace Scripting {

class ModuleBindingBuilder {
public:
    // ModuleBindingBuilder inner types declare
    // clang-format off
    struct BuilderData;
    // clang-format on

    // ModuleBindingBuilder inner types define
    struct BuilderData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk791e57;
        ::ll::UntypedStorage<8, 96> mUnk7003d2;
        ::ll::UntypedStorage<8, 24> mUnk4e5f71;
        ::ll::UntypedStorage<8, 24> mUnk8da241;
        ::ll::UntypedStorage<8, 24> mUnkc9781f;
        ::ll::UntypedStorage<8, 24> mUnkce8547;
        ::ll::UntypedStorage<8, 24> mUnk497dc8;
        ::ll::UntypedStorage<8, 24> mUnk143183;
        ::ll::UntypedStorage<8, 24> mUnk9f2b94;
        ::ll::UntypedStorage<8, 24> mUnk985790;
        ::ll::UntypedStorage<8, 24> mUnkcbd8d1;
        ::ll::UntypedStorage<8, 32> mUnkbcacb4;
        // NOLINTEND

    public:
        // prevent constructor by default
        BuilderData& operator=(BuilderData const&);
        BuilderData(BuilderData const&);
        BuilderData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 352> mUnkd4febe;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleBindingBuilder& operator=(ModuleBindingBuilder const&);
    ModuleBindingBuilder(ModuleBindingBuilder const&);
    ModuleBindingBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ModuleBinding build(
        bool                                  allowUntagged,
        ::std::vector<::std::string> const&   additionalTags,
        ::Scripting::RuntimeConditions const& currentRuntimeConditions
    );

    MCNAPI ::Scripting::ModuleBindingBuilder& createTypeMap(::Scripting::TypeMapBuilder& typeMapBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ConstantFactory& mEmptyConstantFactory();

    MCNAPI static ::Scripting::FunctionBinding& mEmptyFunctionBinding();

    MCNAPI static ::Scripting::ObjectFactory& mEmptyObjectFactory();
    // NOLINTEND
};

} // namespace Scripting
