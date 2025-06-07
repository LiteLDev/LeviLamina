#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceParametersBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SurfaceParametersBiomeJsonComponent();

    MCNAPI SurfaceParametersBiomeJsonComponent(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent const&);

    MCNAPI ::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_20_60::SurfaceParametersBiomeJsonComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
