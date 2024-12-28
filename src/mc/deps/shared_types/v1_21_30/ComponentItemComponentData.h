#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk303505;
    ::ll::UntypedStorage<4, 8>  mUnk5a2e68;
    ::ll::UntypedStorage<1, 2>  mUnk207a0d;
    ::ll::UntypedStorage<8, 48> mUnkb7981d;
    ::ll::UntypedStorage<8, 32> mUnk70b731;
    ::ll::UntypedStorage<8, 32> mUnk3317cf;
    ::ll::UntypedStorage<2, 4>  mUnk26a5c6;
    ::ll::UntypedStorage<8, 40> mUnk52453b;
    ::ll::UntypedStorage<8, 40> mUnkb9d140;
    ::ll::UntypedStorage<4, 16> mUnkcc0946;
    ::ll::UntypedStorage<8, 32> mUnk390f35;
    ::ll::UntypedStorage<4, 20> mUnkb7b93e;
    ::ll::UntypedStorage<8, 48> mUnkf67cb1;
    ::ll::UntypedStorage<8, 88> mUnk274b13;
    ::ll::UntypedStorage<8, 48> mUnkae46a4;
    ::ll::UntypedStorage<4, 8>  mUnka44e16;
    ::ll::UntypedStorage<1, 2>  mUnke7eec3;
    ::ll::UntypedStorage<1, 2>  mUnkff8f76;
    ::ll::UntypedStorage<8, 40> mUnkc66e25;
    ::ll::UntypedStorage<8, 72> mUnk186d76;
    ::ll::UntypedStorage<8, 48> mUnkff9fac;
    ::ll::UntypedStorage<1, 2>  mUnk125ef2;
    ::ll::UntypedStorage<2, 4>  mUnk8a0fec;
    ::ll::UntypedStorage<8, 64> mUnk515345;
    ::ll::UntypedStorage<8, 48> mUnkb50024;
    ::ll::UntypedStorage<8, 40> mUnk7175d0;
    ::ll::UntypedStorage<4, 16> mUnk69f6fa;
    ::ll::UntypedStorage<8, 32> mUnk128a4a;
    ::ll::UntypedStorage<8, 40> mUnkc81b7e;
    ::ll::UntypedStorage<1, 2>  mUnkbd1f9e;
    ::ll::UntypedStorage<1, 2>  mUnkfdf09e;
    ::ll::UntypedStorage<8, 72> mUnk22f642;
    ::ll::UntypedStorage<8, 32> mUnkb554e6;
    ::ll::UntypedStorage<4, 24> mUnk8888e9;
    ::ll::UntypedStorage<1, 2>  mUnkaad399;
    ::ll::UntypedStorage<4, 16> mUnkb9eb46;
    ::ll::UntypedStorage<4, 12> mUnkf2e292;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemComponentData(::SharedTypes::v1_21_30::ComponentItemComponentData&&);

    MCAPI ComponentItemComponentData(::SharedTypes::v1_21_30::ComponentItemComponentData const&);

    MCAPI ::SharedTypes::v1_21_30::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_30::ComponentItemComponentData&&);

    MCAPI ::SharedTypes::v1_21_30::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_30::ComponentItemComponentData const&);

    MCAPI ~ComponentItemComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersion const& FIRST_VERSION();

    MCAPI static ::SemVersion const& LAST_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_30::ComponentItemComponentData&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_30::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
