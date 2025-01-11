#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct SwampSurfaceBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3d73a2;
    ::ll::UntypedStorage<8, 96> mUnk5462b2;
    ::ll::UntypedStorage<8, 96> mUnk777ebf;
    ::ll::UntypedStorage<8, 96> mUnk3e796a;
    ::ll::UntypedStorage<8, 96> mUnk22f6fd;
    ::ll::UntypedStorage<8, 96> mUnkb958b8;
    // NOLINTEND

public:
    // prevent constructor by default
    SwampSurfaceBiomeJsonComponent& operator=(SwampSurfaceBiomeJsonComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwampSurfaceBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SwampSurfaceBiomeJsonComponent();

    MCAPI SwampSurfaceBiomeJsonComponent(::SharedTypes::v1_20_60::SwampSurfaceBiomeJsonComponent const&);

    MCFOLD ::SharedTypes::v1_20_60::SwampSurfaceBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::SwampSurfaceBiomeJsonComponent&&);
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
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::SharedTypes::v1_20_60::SwampSurfaceBiomeJsonComponent const&);
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
