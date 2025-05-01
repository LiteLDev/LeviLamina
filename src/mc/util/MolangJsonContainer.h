#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    MCNAPI MolangJsonContainer();

    MCNAPI MolangJsonContainer(::MolangJsonContainer const&);

    MCNAPI MolangJsonContainer(::MolangJsonContainer&&);

    MCNAPI ~MolangJsonContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void valueFromBool(::MolangJsonContainer& instance, bool value);

    MCNAPI static void valueFromFloat(::MolangJsonContainer& instance, float value);

    MCNAPI static void valueFromString(::MolangJsonContainer& instance, ::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::MolangJsonContainer const&);

    MCNAPI void* $ctor(::MolangJsonContainer&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
