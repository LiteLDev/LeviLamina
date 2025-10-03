#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnkf2303c;
    ::ll::UntypedStorage<1, 2>  mUnk657c85;
    ::ll::UntypedStorage<8, 48> mUnk242ab8;
    ::ll::UntypedStorage<8, 32> mUnka151ba;
    ::ll::UntypedStorage<8, 32> mUnkd9fafa;
    ::ll::UntypedStorage<2, 4>  mUnk3e26ec;
    ::ll::UntypedStorage<8, 40> mUnkd40e22;
    ::ll::UntypedStorage<8, 40> mUnkc04e6b;
    ::ll::UntypedStorage<4, 16> mUnk798e37;
    ::ll::UntypedStorage<8, 32> mUnk3f32c9;
    ::ll::UntypedStorage<8, 48> mUnk153022;
    ::ll::UntypedStorage<8, 88> mUnke7a9de;
    ::ll::UntypedStorage<8, 48> mUnk8b7c29;
    ::ll::UntypedStorage<4, 8>  mUnk191877;
    ::ll::UntypedStorage<1, 2>  mUnkd74d30;
    ::ll::UntypedStorage<1, 2>  mUnk8eebb6;
    ::ll::UntypedStorage<8, 40> mUnkaa8199;
    ::ll::UntypedStorage<8, 72> mUnk1385be;
    ::ll::UntypedStorage<8, 48> mUnk2bff52;
    ::ll::UntypedStorage<1, 2>  mUnk7a81b8;
    ::ll::UntypedStorage<2, 4>  mUnkae1c78;
    ::ll::UntypedStorage<8, 64> mUnk6bf8e1;
    ::ll::UntypedStorage<8, 48> mUnk933ee7;
    ::ll::UntypedStorage<4, 16> mUnkcc9eab;
    ::ll::UntypedStorage<8, 32> mUnk1be8e5;
    ::ll::UntypedStorage<8, 40> mUnke2e369;
    ::ll::UntypedStorage<1, 2>  mUnk396256;
    ::ll::UntypedStorage<1, 2>  mUnkc38cbd;
    ::ll::UntypedStorage<8, 32> mUnk74041b;
    ::ll::UntypedStorage<4, 24> mUnkd7fe00;
    ::ll::UntypedStorage<1, 2>  mUnk2f7e52;
    ::ll::UntypedStorage<4, 16> mUnked21c2;
    ::ll::UntypedStorage<4, 12> mUnk8ab8cf;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_10::ComponentItemComponentData&&);

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_10::ComponentItemComponentData const&);

    MCNAPI ::SharedTypes::v1_21_10::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_10::ComponentItemComponentData&&);

    MCNAPI ::SharedTypes::v1_21_10::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_10::ComponentItemComponentData const&);

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
    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ComponentItemComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
