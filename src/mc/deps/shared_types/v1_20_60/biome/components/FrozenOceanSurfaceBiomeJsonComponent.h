#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct FrozenOceanSurfaceBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9aab19;
    ::ll::UntypedStorage<8, 96> mUnk2afd42;
    ::ll::UntypedStorage<8, 96> mUnk7a44fe;
    ::ll::UntypedStorage<8, 96> mUnka69a72;
    ::ll::UntypedStorage<8, 96> mUnk81681e;
    ::ll::UntypedStorage<8, 96> mUnkd1d578;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FrozenOceanSurfaceBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrozenOceanSurfaceBiomeJsonComponent();

    MCNAPI FrozenOceanSurfaceBiomeJsonComponent(::SharedTypes::v1_20_60::FrozenOceanSurfaceBiomeJsonComponent const&);

    MCNAPI ::SharedTypes::v1_20_60::FrozenOceanSurfaceBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::FrozenOceanSurfaceBiomeJsonComponent const&);
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

    MCNAPI void* $ctor(::SharedTypes::v1_20_60::FrozenOceanSurfaceBiomeJsonComponent const&);
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
