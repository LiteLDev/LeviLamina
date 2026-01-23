#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Util {

struct MolangJsonContainer {
public:
    // MolangJsonContainer inner types define
    using ContainerValue = ::std::variant<float, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::variant<float, ::std::string>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangJsonContainer& operator=(MolangJsonContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangJsonContainer();

    MCAPI MolangJsonContainer(::SharedTypes::Util::MolangJsonContainer&&);

    MCAPI MolangJsonContainer(::SharedTypes::Util::MolangJsonContainer const&);

    MCAPI ~MolangJsonContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void valueFromString(::SharedTypes::Util::MolangJsonContainer& instance, ::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::Util::MolangJsonContainer&&);

    MCAPI void* $ctor(::SharedTypes::Util::MolangJsonContainer const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Util
