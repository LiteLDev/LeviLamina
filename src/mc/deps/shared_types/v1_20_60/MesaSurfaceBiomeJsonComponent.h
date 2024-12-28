#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct MesaSurfaceBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb7f703;
    ::ll::UntypedStorage<8, 96> mUnkcbd22d;
    ::ll::UntypedStorage<8, 96> mUnk8fb94c;
    ::ll::UntypedStorage<8, 96> mUnke0a4de;
    ::ll::UntypedStorage<8, 96> mUnk329c12;
    ::ll::UntypedStorage<8, 96> mUnk25f56c;
    ::ll::UntypedStorage<8, 96> mUnk6926b2;
    ::ll::UntypedStorage<8, 96> mUnk61c20e;
    ::ll::UntypedStorage<1, 1>  mUnke85178;
    ::ll::UntypedStorage<1, 1>  mUnke3a083;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBiomeJsonComponent& operator=(MesaSurfaceBiomeJsonComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MesaSurfaceBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MesaSurfaceBiomeJsonComponent();

    MCAPI MesaSurfaceBiomeJsonComponent(::SharedTypes::v1_20_60::MesaSurfaceBiomeJsonComponent const&);

    MCAPI ::SharedTypes::v1_20_60::MesaSurfaceBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::MesaSurfaceBiomeJsonComponent&&);
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

    MCAPI void* $ctor(::SharedTypes::v1_20_60::MesaSurfaceBiomeJsonComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
