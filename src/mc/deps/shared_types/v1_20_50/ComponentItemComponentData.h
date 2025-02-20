#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk6ba557;
    ::ll::UntypedStorage<1, 2>  mUnkf9de0c;
    ::ll::UntypedStorage<8, 48> mUnk1ddbc1;
    ::ll::UntypedStorage<2, 4>  mUnk140f92;
    ::ll::UntypedStorage<8, 40> mUnk6fb32f;
    ::ll::UntypedStorage<8, 40> mUnk3953a0;
    ::ll::UntypedStorage<4, 16> mUnkace416;
    ::ll::UntypedStorage<8, 48> mUnk1dcfb5;
    ::ll::UntypedStorage<8, 88> mUnk5ffb93;
    ::ll::UntypedStorage<8, 48> mUnk50ecb4;
    ::ll::UntypedStorage<4, 8>  mUnk286f78;
    ::ll::UntypedStorage<1, 2>  mUnke21cb1;
    ::ll::UntypedStorage<1, 2>  mUnkf0fe3b;
    ::ll::UntypedStorage<8, 40> mUnk95893f;
    ::ll::UntypedStorage<8, 40> mUnkc44735;
    ::ll::UntypedStorage<8, 48> mUnk6cf976;
    ::ll::UntypedStorage<1, 2>  mUnk4bdbf1;
    ::ll::UntypedStorage<2, 4>  mUnk117935;
    ::ll::UntypedStorage<8, 64> mUnk15f6a4;
    ::ll::UntypedStorage<8, 48> mUnk5995f5;
    ::ll::UntypedStorage<4, 16> mUnkb13862;
    ::ll::UntypedStorage<8, 32> mUnkeb71c3;
    ::ll::UntypedStorage<8, 40> mUnkcbaad5;
    ::ll::UntypedStorage<1, 2>  mUnk2c2a7a;
    ::ll::UntypedStorage<1, 2>  mUnkad63e6;
    ::ll::UntypedStorage<8, 32> mUnked7d2e;
    ::ll::UntypedStorage<4, 24> mUnkb63d62;
    ::ll::UntypedStorage<1, 2>  mUnkffbb02;
    ::ll::UntypedStorage<4, 16> mUnkfb42e8;
    ::ll::UntypedStorage<4, 12> mUnk755713;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemComponentData(::SharedTypes::v1_20_50::ComponentItemComponentData&&);

    MCAPI ComponentItemComponentData(::SharedTypes::v1_20_50::ComponentItemComponentData const&);

    MCAPI ::SharedTypes::v1_20_50::ComponentItemComponentData&
    operator=(::SharedTypes::v1_20_50::ComponentItemComponentData&&);

    MCAPI ::SharedTypes::v1_20_50::ComponentItemComponentData&
    operator=(::SharedTypes::v1_20_50::ComponentItemComponentData const&);

    MCAPI ~ComponentItemComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::ComponentItemComponentData&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_50::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
