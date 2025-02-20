#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RuntimeConditions; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct ClassBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkc3213e;
    ::ll::UntypedStorage<8, 144> mUnk73d31d;
    ::ll::UntypedStorage<8, 144> mUnk14e611;
    ::ll::UntypedStorage<8, 24>  mUnk70649c;
    ::ll::UntypedStorage<8, 16>  mUnk7411e3;
    ::ll::UntypedStorage<8, 24>  mUnkcf5277;
    ::ll::UntypedStorage<8, 24>  mUnk3ab719;
    ::ll::UntypedStorage<8, 24>  mUnkdd6337;
    ::ll::UntypedStorage<8, 24>  mUnk706766;
    ::ll::UntypedStorage<8, 24>  mUnk77c25d;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassBinding& operator=(ClassBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClassBinding();

    MCAPI ClassBinding(::Scripting::ClassBinding const&);

    MCAPI ClassBinding(::Scripting::ClassBinding&&);

    MCAPI ClassBinding(
        ::std::string                                   name_,
        ::entt::meta_type                               type_,
        ::entt::meta_type                               baseType_,
        ::std::vector<::Scripting::FunctionBinding>     constructors_,
        ::std::shared_ptr<::Scripting::IteratorBinding> iterator_,
        ::std::vector<::Scripting::FunctionBinding>     functions_,
        ::std::vector<::Scripting::PropertyBinding>     properties_,
        ::std::vector<::Scripting::ConstantFactory>     constants_,
        ::Scripting::RuntimeConditions                  requiredRuntimeConditions_,
        ::Scripting::RuntimeConditions                  missingRuntimeConditions_
    );

    MCAPI ~ClassBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Scripting::ClassBinding const&);

    MCAPI void* $ctor(::Scripting::ClassBinding&&);

    MCAPI void* $ctor(
        ::std::string                                   name_,
        ::entt::meta_type                               type_,
        ::entt::meta_type                               baseType_,
        ::std::vector<::Scripting::FunctionBinding>     constructors_,
        ::std::shared_ptr<::Scripting::IteratorBinding> iterator_,
        ::std::vector<::Scripting::FunctionBinding>     functions_,
        ::std::vector<::Scripting::PropertyBinding>     properties_,
        ::std::vector<::Scripting::ConstantFactory>     constants_,
        ::Scripting::RuntimeConditions                  requiredRuntimeConditions_,
        ::Scripting::RuntimeConditions                  missingRuntimeConditions_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
