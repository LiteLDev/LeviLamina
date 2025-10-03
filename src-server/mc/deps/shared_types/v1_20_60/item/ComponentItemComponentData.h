#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnkeeb296;
    ::ll::UntypedStorage<1, 2>  mUnkcec09b;
    ::ll::UntypedStorage<8, 48> mUnk422eab;
    ::ll::UntypedStorage<2, 4>  mUnk93d893;
    ::ll::UntypedStorage<8, 40> mUnk349e33;
    ::ll::UntypedStorage<8, 40> mUnkf0604f;
    ::ll::UntypedStorage<4, 16> mUnk3e6a84;
    ::ll::UntypedStorage<8, 48> mUnk6a3093;
    ::ll::UntypedStorage<8, 88> mUnkbbe873;
    ::ll::UntypedStorage<8, 48> mUnkd42e3e;
    ::ll::UntypedStorage<4, 8>  mUnke39fa1;
    ::ll::UntypedStorage<1, 2>  mUnk739353;
    ::ll::UntypedStorage<1, 2>  mUnk3eb9bd;
    ::ll::UntypedStorage<8, 40> mUnk6abf3e;
    ::ll::UntypedStorage<8, 72> mUnkaa2823;
    ::ll::UntypedStorage<8, 48> mUnkce8f79;
    ::ll::UntypedStorage<1, 2>  mUnk1f28f2;
    ::ll::UntypedStorage<2, 4>  mUnk1bc9e4;
    ::ll::UntypedStorage<8, 64> mUnk59d0e9;
    ::ll::UntypedStorage<8, 48> mUnkf9731d;
    ::ll::UntypedStorage<4, 16> mUnk91ecbd;
    ::ll::UntypedStorage<8, 32> mUnk4f6ea9;
    ::ll::UntypedStorage<8, 40> mUnkbac103;
    ::ll::UntypedStorage<1, 2>  mUnk3fa45f;
    ::ll::UntypedStorage<1, 2>  mUnkfc5604;
    ::ll::UntypedStorage<8, 32> mUnk4fd9eb;
    ::ll::UntypedStorage<4, 24> mUnk2f6b97;
    ::ll::UntypedStorage<1, 2>  mUnk88655c;
    ::ll::UntypedStorage<4, 16> mUnk62772b;
    ::ll::UntypedStorage<4, 12> mUnkacb969;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData(::SharedTypes::v1_20_60::ComponentItemComponentData&&);

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_20_60::ComponentItemComponentData const&);

    MCNAPI ::SharedTypes::v1_20_60::ComponentItemComponentData&
    operator=(::SharedTypes::v1_20_60::ComponentItemComponentData&&);

    MCNAPI ::SharedTypes::v1_20_60::ComponentItemComponentData&
    operator=(::SharedTypes::v1_20_60::ComponentItemComponentData const&);

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
    MCNAPI void* $ctor(::SharedTypes::v1_20_60::ComponentItemComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_60::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
