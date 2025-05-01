#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 280> mUnkcf5289;
    ::ll::UntypedStorage<8, 80>  mUnkd240aa;
    ::ll::UntypedStorage<8, 40>  mUnk8ab560;
    ::ll::UntypedStorage<8, 304> mUnk53d280;
    ::ll::UntypedStorage<8, 56>  mUnkfeeaa0;
    ::ll::UntypedStorage<8, 240> mUnk2c5468;
    ::ll::UntypedStorage<8, 40>  mUnkea62ae;
    ::ll::UntypedStorage<8, 32>  mUnk1769fd;
    ::ll::UntypedStorage<8, 48>  mUnk438306;
    ::ll::UntypedStorage<8, 272> mUnk50359e;
    ::ll::UntypedStorage<8, 272> mUnka0229b;
    ::ll::UntypedStorage<8, 72>  mUnk2c028a;
    ::ll::UntypedStorage<8, 208> mUnk3b222e;
    ::ll::UntypedStorage<8, 168> mUnkcaca34;
    ::ll::UntypedStorage<8, 48>  mUnk8e34cb;
    ::ll::UntypedStorage<8, 48>  mUnkd26818;
    ::ll::UntypedStorage<4, 40>  mUnk5ab2e7;
    ::ll::UntypedStorage<8, 784> mUnk6e0601;
    ::ll::UntypedStorage<4, 24>  mUnk1d1791;
    ::ll::UntypedStorage<8, 40>  mUnkaff3c4;
    ::ll::UntypedStorage<8, 32>  mUnk8a6787;
    ::ll::UntypedStorage<8, 32>  mUnkc4a00c;
    ::ll::UntypedStorage<8, 72>  mUnk8f45fa;
    ::ll::UntypedStorage<4, 24>  mUnk63934b;
    ::ll::UntypedStorage<8, 32>  mUnk243cce;
    ::ll::UntypedStorage<8, 32>  mUnk1998ff;
    ::ll::UntypedStorage<8, 32>  mUnkd0db5d;
    ::ll::UntypedStorage<8, 32>  mUnk6f73ee;
    ::ll::UntypedStorage<8, 32>  mUnk1a5b2a;
    ::ll::UntypedStorage<8, 32>  mUnkbe58d0;
    ::ll::UntypedStorage<8, 32>  mUnkf9b945;
    ::ll::UntypedStorage<8, 32>  mUnkb259f6;
    ::ll::UntypedStorage<8, 64>  mUnk551771;
    ::ll::UntypedStorage<8, 64>  mUnk3871c6;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData_v1_20_30();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData_v1_20_30(::ComponentItemComponentData_v1_20_30 const&);

    MCNAPI ComponentItemComponentData_v1_20_30(::ComponentItemComponentData_v1_20_30&&);

    MCNAPI ::ComponentItemComponentData_v1_20_30& operator=(::ComponentItemComponentData_v1_20_30&&);

    MCNAPI ::ComponentItemComponentData_v1_20_30& operator=(::ComponentItemComponentData_v1_20_30 const&);

    MCNAPI ~ComponentItemComponentData_v1_20_30();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemComponentData_v1_20_30 const&);

    MCNAPI void* $ctor(::ComponentItemComponentData_v1_20_30&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
