#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_40 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk1a63d7;
    ::ll::UntypedStorage<4, 8> mUnkc2fef1;
    ::ll::UntypedStorage<1, 2> mUnk504abe;
    ::ll::UntypedStorage<8, 48> mUnkd241a3;
    ::ll::UntypedStorage<8, 32> mUnke9f556;
    ::ll::UntypedStorage<8, 32> mUnkeab1b9;
    ::ll::UntypedStorage<2, 4> mUnk21c691;
    ::ll::UntypedStorage<8, 40> mUnkec81ee;
    ::ll::UntypedStorage<8, 40> mUnk798b80;
    ::ll::UntypedStorage<4, 16> mUnkab028c;
    ::ll::UntypedStorage<8, 32> mUnkc6e3f6;
    ::ll::UntypedStorage<4, 20> mUnkc77c1c;
    ::ll::UntypedStorage<8, 48> mUnk8152c2;
    ::ll::UntypedStorage<8, 88> mUnkc02cf5;
    ::ll::UntypedStorage<8, 48> mUnk631b6c;
    ::ll::UntypedStorage<4, 8> mUnkb8fd19;
    ::ll::UntypedStorage<1, 2> mUnk321cd2;
    ::ll::UntypedStorage<1, 2> mUnkd298b6;
    ::ll::UntypedStorage<8, 40> mUnk7b33bf;
    ::ll::UntypedStorage<8, 72> mUnk273ca3;
    ::ll::UntypedStorage<8, 48> mUnkf274e6;
    ::ll::UntypedStorage<1, 2> mUnk3ffd47;
    ::ll::UntypedStorage<2, 4> mUnkd326cd;
    ::ll::UntypedStorage<8, 72> mUnk1c66be;
    ::ll::UntypedStorage<8, 48> mUnka14b8b;
    ::ll::UntypedStorage<8, 40> mUnk378047;
    ::ll::UntypedStorage<4, 16> mUnk4a7890;
    ::ll::UntypedStorage<8, 32> mUnkad27c7;
    ::ll::UntypedStorage<8, 40> mUnk1ab8c0;
    ::ll::UntypedStorage<1, 2> mUnkd84aad;
    ::ll::UntypedStorage<1, 2> mUnkc2693e;
    ::ll::UntypedStorage<8, 72> mUnkc29fb2;
    ::ll::UntypedStorage<8, 32> mUnk5cfb8d;
    ::ll::UntypedStorage<4, 24> mUnk8231fa;
    ::ll::UntypedStorage<1, 2> mUnkbc05f0;
    ::ll::UntypedStorage<4, 20> mUnk8a09f4;
    ::ll::UntypedStorage<4, 12> mUnkc123d5;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_40::ComponentItemComponentData&&);

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_40::ComponentItemComponentData const&);

    MCNAPI ::SharedTypes::v1_21_40::ComponentItemComponentData& operator=(::SharedTypes::v1_21_40::ComponentItemComponentData&&);

    MCNAPI ::SharedTypes::v1_21_40::ComponentItemComponentData& operator=(::SharedTypes::v1_21_40::ComponentItemComponentData const&);

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
    MCNAPI void* $ctor(::SharedTypes::v1_21_40::ComponentItemComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_40::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
