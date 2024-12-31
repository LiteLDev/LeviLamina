#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct SurfaceParametersBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkfb2702;
    ::ll::UntypedStorage<8, 96> mUnkdc3706;
    ::ll::UntypedStorage<8, 96> mUnk1a525c;
    ::ll::UntypedStorage<8, 96> mUnkf48658;
    ::ll::UntypedStorage<8, 96> mUnk7047b1;
    ::ll::UntypedStorage<8, 96> mUnkf69032;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceParametersBiomeJsonComponent& operator=(SurfaceParametersBiomeJsonComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceParametersBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SurfaceParametersBiomeJsonComponent();

    MCAPI SurfaceParametersBiomeJsonComponent(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent const&);

    MCAPI ::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
