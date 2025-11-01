#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk73f8aa;
    ::ll::UntypedStorage<1, 2>  mUnk464573;
    ::ll::UntypedStorage<8, 48> mUnkd289f0;
    ::ll::UntypedStorage<8, 32> mUnkcebced;
    ::ll::UntypedStorage<2, 4>  mUnk61ffc4;
    ::ll::UntypedStorage<8, 40> mUnk5b3043;
    ::ll::UntypedStorage<8, 40> mUnk259ae5;
    ::ll::UntypedStorage<4, 16> mUnke36906;
    ::ll::UntypedStorage<8, 48> mUnk480fe3;
    ::ll::UntypedStorage<8, 88> mUnk1e5d91;
    ::ll::UntypedStorage<8, 48> mUnkfd6b8f;
    ::ll::UntypedStorage<4, 8>  mUnk617c2b;
    ::ll::UntypedStorage<1, 2>  mUnkdc49e9;
    ::ll::UntypedStorage<1, 2>  mUnk4e2c9e;
    ::ll::UntypedStorage<8, 40> mUnkd8dea2;
    ::ll::UntypedStorage<8, 72> mUnke04eaf;
    ::ll::UntypedStorage<8, 48> mUnk9420fe;
    ::ll::UntypedStorage<1, 2>  mUnk464d3a;
    ::ll::UntypedStorage<2, 4>  mUnkbd6589;
    ::ll::UntypedStorage<8, 64> mUnk38e53d;
    ::ll::UntypedStorage<8, 48> mUnkc9696a;
    ::ll::UntypedStorage<4, 16> mUnke4ffaa;
    ::ll::UntypedStorage<8, 32> mUnka79f50;
    ::ll::UntypedStorage<8, 40> mUnk837e23;
    ::ll::UntypedStorage<1, 2>  mUnkfaedec;
    ::ll::UntypedStorage<1, 2>  mUnk948611;
    ::ll::UntypedStorage<8, 32> mUnke5369e;
    ::ll::UntypedStorage<4, 24> mUnke1c184;
    ::ll::UntypedStorage<1, 2>  mUnkb7c545;
    ::ll::UntypedStorage<4, 20> mUnk792840;
    ::ll::UntypedStorage<4, 12> mUnk4d070c;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData(::SharedTypes::v1_20_80::ComponentItemComponentData&&);

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_20_80::ComponentItemComponentData const&);

    MCNAPI ::SharedTypes::v1_20_80::ComponentItemComponentData&
    operator=(::SharedTypes::v1_20_80::ComponentItemComponentData&&);

    MCNAPI ::SharedTypes::v1_20_80::ComponentItemComponentData&
    operator=(::SharedTypes::v1_20_80::ComponentItemComponentData const&);

    MCNAPI ~ComponentItemComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ComponentItemComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
