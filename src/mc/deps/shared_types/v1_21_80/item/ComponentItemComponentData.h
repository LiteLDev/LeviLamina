#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnkf8f132;
    ::ll::UntypedStorage<4, 8>  mUnk7a8585;
    ::ll::UntypedStorage<1, 2>  mUnk73bd1d;
    ::ll::UntypedStorage<8, 48> mUnk211efc;
    ::ll::UntypedStorage<1, 2>  mUnkb893e2;
    ::ll::UntypedStorage<8, 40> mUnk273020;
    ::ll::UntypedStorage<8, 32> mUnk98c019;
    ::ll::UntypedStorage<2, 4>  mUnk85b6de;
    ::ll::UntypedStorage<8, 40> mUnk79cbff;
    ::ll::UntypedStorage<8, 40> mUnk6ac6ac;
    ::ll::UntypedStorage<4, 16> mUnk1a0416;
    ::ll::UntypedStorage<8, 32> mUnk8839ec;
    ::ll::UntypedStorage<4, 20> mUnkaf7ef8;
    ::ll::UntypedStorage<8, 48> mUnkcc42ba;
    ::ll::UntypedStorage<8, 88> mUnkb7e63b;
    ::ll::UntypedStorage<8, 48> mUnkb3960e;
    ::ll::UntypedStorage<4, 8>  mUnk72eeb8;
    ::ll::UntypedStorage<1, 2>  mUnk1d8b0e;
    ::ll::UntypedStorage<1, 2>  mUnk8940b9;
    ::ll::UntypedStorage<8, 40> mUnk7d9c71;
    ::ll::UntypedStorage<8, 72> mUnk4acd58;
    ::ll::UntypedStorage<8, 48> mUnka7f066;
    ::ll::UntypedStorage<1, 2>  mUnk4f4a10;
    ::ll::UntypedStorage<2, 4>  mUnkaa5a23;
    ::ll::UntypedStorage<8, 72> mUnkde629c;
    ::ll::UntypedStorage<8, 48> mUnk47e55c;
    ::ll::UntypedStorage<8, 40> mUnkae8cfb;
    ::ll::UntypedStorage<4, 16> mUnkec4c70;
    ::ll::UntypedStorage<8, 32> mUnkd5b009;
    ::ll::UntypedStorage<8, 40> mUnk90ebdd;
    ::ll::UntypedStorage<1, 2>  mUnk1d9360;
    ::ll::UntypedStorage<1, 2>  mUnk278146;
    ::ll::UntypedStorage<8, 64> mUnk72b71f;
    ::ll::UntypedStorage<4, 8>  mUnkb5b838;
    ::ll::UntypedStorage<4, 8>  mUnkd4e2cc;
    ::ll::UntypedStorage<8, 32> mUnk9e700e;
    ::ll::UntypedStorage<4, 24> mUnkbf182b;
    ::ll::UntypedStorage<1, 2>  mUnk15cad8;
    ::ll::UntypedStorage<4, 16> mUnkb8f47c;
    ::ll::UntypedStorage<4, 12> mUnkcedfa2;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData();

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_80::ComponentItemComponentData&&);

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_80::ComponentItemComponentData const&);

    MCNAPI ::std::shared_ptr<::cereal::DynamicValue>
    getCustomComponent(::cereal::SerializerContext const& context) const;

    MCNAPI ::SharedTypes::v1_21_80::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_80::ComponentItemComponentData&&);

    MCNAPI ::SharedTypes::v1_21_80::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_80::ComponentItemComponentData const&);

    MCNAPI void
    setCustomComponent(::std::shared_ptr<::cereal::DynamicValue> data, ::cereal::SerializerContext const& context);

    MCNAPI ~ComponentItemComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersion const& FIRST_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_80::ComponentItemComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_80::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
