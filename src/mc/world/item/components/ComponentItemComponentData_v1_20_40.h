#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemComponentData_v1_20_40 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 280> mUnk768da2;
    ::ll::UntypedStorage<8, 80>  mUnka69b69;
    ::ll::UntypedStorage<8, 40>  mUnkb97016;
    ::ll::UntypedStorage<8, 304> mUnk1bd2d3;
    ::ll::UntypedStorage<8, 56>  mUnk136989;
    ::ll::UntypedStorage<8, 240> mUnk6748bc;
    ::ll::UntypedStorage<8, 40>  mUnk440b59;
    ::ll::UntypedStorage<8, 32>  mUnk741e06;
    ::ll::UntypedStorage<8, 48>  mUnk23fb6e;
    ::ll::UntypedStorage<8, 72>  mUnka38246;
    ::ll::UntypedStorage<8, 208> mUnk96318d;
    ::ll::UntypedStorage<8, 48>  mUnkc03c19;
    ::ll::UntypedStorage<8, 48>  mUnk833b05;
    ::ll::UntypedStorage<4, 40>  mUnkb0862f;
    ::ll::UntypedStorage<4, 24>  mUnk10aa3c;
    ::ll::UntypedStorage<8, 40>  mUnk95602e;
    ::ll::UntypedStorage<8, 32>  mUnkf90e7c;
    ::ll::UntypedStorage<8, 32>  mUnk14eee3;
    ::ll::UntypedStorage<8, 72>  mUnkdb9d05;
    ::ll::UntypedStorage<4, 24>  mUnkb2275c;
    ::ll::UntypedStorage<8, 32>  mUnk966bad;
    ::ll::UntypedStorage<8, 32>  mUnk3328b7;
    ::ll::UntypedStorage<8, 32>  mUnk715628;
    ::ll::UntypedStorage<8, 32>  mUnkb5180a;
    ::ll::UntypedStorage<8, 32>  mUnkf1ab89;
    ::ll::UntypedStorage<8, 32>  mUnka8c6a6;
    ::ll::UntypedStorage<8, 32>  mUnkb1c85f;
    ::ll::UntypedStorage<8, 32>  mUnkf15d87;
    ::ll::UntypedStorage<8, 64>  mUnk259c9a;
    ::ll::UntypedStorage<8, 64>  mUnk82ad16;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData_v1_20_40();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData_v1_20_40(::ComponentItemComponentData_v1_20_40 const&);

    MCNAPI ComponentItemComponentData_v1_20_40(::ComponentItemComponentData_v1_20_40&&);

    MCNAPI ::ComponentItemComponentData_v1_20_40& operator=(::ComponentItemComponentData_v1_20_40&&);

    MCNAPI ::ComponentItemComponentData_v1_20_40& operator=(::ComponentItemComponentData_v1_20_40 const&);

    MCNAPI ~ComponentItemComponentData_v1_20_40();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemComponentData_v1_20_40 const&);

    MCNAPI void* $ctor(::ComponentItemComponentData_v1_20_40&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
