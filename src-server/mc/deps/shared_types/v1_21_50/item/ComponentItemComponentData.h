#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk2d7bd7;
    ::ll::UntypedStorage<4, 8>  mUnkcdf8fc;
    ::ll::UntypedStorage<1, 2>  mUnk221437;
    ::ll::UntypedStorage<8, 48> mUnk33baeb;
    ::ll::UntypedStorage<1, 2>  mUnk2d9efd;
    ::ll::UntypedStorage<8, 32> mUnk1d76f3;
    ::ll::UntypedStorage<8, 32> mUnk914905;
    ::ll::UntypedStorage<2, 4>  mUnk9e5c0a;
    ::ll::UntypedStorage<8, 40> mUnk10ab90;
    ::ll::UntypedStorage<8, 40> mUnk26d19c;
    ::ll::UntypedStorage<4, 16> mUnkf7a680;
    ::ll::UntypedStorage<8, 32> mUnkd5049c;
    ::ll::UntypedStorage<4, 20> mUnkfdf39f;
    ::ll::UntypedStorage<8, 48> mUnk80fbfe;
    ::ll::UntypedStorage<8, 88> mUnk245c89;
    ::ll::UntypedStorage<8, 48> mUnk5e701b;
    ::ll::UntypedStorage<4, 8>  mUnk1697ea;
    ::ll::UntypedStorage<1, 2>  mUnka2bdd5;
    ::ll::UntypedStorage<1, 2>  mUnk870ba7;
    ::ll::UntypedStorage<8, 40> mUnkd5cfd9;
    ::ll::UntypedStorage<8, 72> mUnk26dd9f;
    ::ll::UntypedStorage<8, 48> mUnkef2146;
    ::ll::UntypedStorage<1, 2>  mUnkf07f01;
    ::ll::UntypedStorage<2, 4>  mUnk3effff;
    ::ll::UntypedStorage<8, 72> mUnka884c1;
    ::ll::UntypedStorage<8, 48> mUnke79813;
    ::ll::UntypedStorage<8, 40> mUnka4fcbc;
    ::ll::UntypedStorage<4, 16> mUnkb7317d;
    ::ll::UntypedStorage<8, 32> mUnk6824ea;
    ::ll::UntypedStorage<8, 40> mUnk99e2f5;
    ::ll::UntypedStorage<1, 2>  mUnkecf66e;
    ::ll::UntypedStorage<1, 2>  mUnka1e8ed;
    ::ll::UntypedStorage<8, 72> mUnk858cd8;
    ::ll::UntypedStorage<8, 32> mUnk9c6ea2;
    ::ll::UntypedStorage<4, 24> mUnke46062;
    ::ll::UntypedStorage<1, 2>  mUnk805480;
    ::ll::UntypedStorage<4, 16> mUnkb5ffd3;
    ::ll::UntypedStorage<4, 12> mUnk93a804;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_50::ComponentItemComponentData&&);

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_50::ComponentItemComponentData const&);

    MCNAPI ::SharedTypes::v1_21_50::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_50::ComponentItemComponentData&&);

    MCNAPI ::SharedTypes::v1_21_50::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_50::ComponentItemComponentData const&);

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
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::ComponentItemComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_50::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
