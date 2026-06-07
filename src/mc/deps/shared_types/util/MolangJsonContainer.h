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
    // member functions
    // NOLINTBEGIN
    MCAPI ~MolangJsonContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void valueFromBool(::SharedTypes::Util::MolangJsonContainer& instance, bool value);

    MCAPI static void valueFromFloat(::SharedTypes::Util::MolangJsonContainer& instance, float value);

    MCAPI static void valueFromString(::SharedTypes::Util::MolangJsonContainer& instance, ::std::string const& str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Util
