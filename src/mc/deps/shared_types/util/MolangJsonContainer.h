#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Util {

struct MolangJsonContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk51298a;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangJsonContainer();

    MCNAPI MolangJsonContainer(::SharedTypes::Util::MolangJsonContainer const&);

    MCNAPI MolangJsonContainer(::SharedTypes::Util::MolangJsonContainer&&);

    MCNAPI ::SharedTypes::Util::MolangJsonContainer& operator=(::SharedTypes::Util::MolangJsonContainer const&);

    MCNAPI ~MolangJsonContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void valueFromBool(::SharedTypes::Util::MolangJsonContainer& instance, bool value);

    MCNAPI static void valueFromFloat(::SharedTypes::Util::MolangJsonContainer& instance, float value);

    MCNAPI static void valueFromString(::SharedTypes::Util::MolangJsonContainer& instance, ::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::Util::MolangJsonContainer const&);

    MCNAPI void* $ctor(::SharedTypes::Util::MolangJsonContainer&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Util
