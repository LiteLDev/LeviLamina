#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnke457d9;
    ::ll::UntypedStorage<4, 8>  mUnk23a714;
    ::ll::UntypedStorage<1, 2>  mUnkb7b7ba;
    ::ll::UntypedStorage<8, 48> mUnk58d488;
    ::ll::UntypedStorage<1, 2>  mUnk9f0790;
    ::ll::UntypedStorage<8, 40> mUnk6e61bf;
    ::ll::UntypedStorage<8, 32> mUnk84c3d8;
    ::ll::UntypedStorage<2, 4>  mUnk23579b;
    ::ll::UntypedStorage<8, 40> mUnk9e7e6d;
    ::ll::UntypedStorage<8, 40> mUnk1c2056;
    ::ll::UntypedStorage<4, 16> mUnka9d206;
    ::ll::UntypedStorage<8, 32> mUnk268d93;
    ::ll::UntypedStorage<4, 20> mUnk1b0176;
    ::ll::UntypedStorage<8, 48> mUnka863f2;
    ::ll::UntypedStorage<8, 88> mUnk88d8c1;
    ::ll::UntypedStorage<8, 48> mUnk960168;
    ::ll::UntypedStorage<4, 8>  mUnkc08bc4;
    ::ll::UntypedStorage<1, 2>  mUnkd15c5a;
    ::ll::UntypedStorage<1, 2>  mUnk14ba2e;
    ::ll::UntypedStorage<8, 40> mUnk772e47;
    ::ll::UntypedStorage<8, 72> mUnk872747;
    ::ll::UntypedStorage<8, 48> mUnk1d5aa8;
    ::ll::UntypedStorage<1, 2>  mUnka9e54d;
    ::ll::UntypedStorage<2, 4>  mUnkb4d9ed;
    ::ll::UntypedStorage<8, 72> mUnkb58b35;
    ::ll::UntypedStorage<8, 48> mUnk1c65aa;
    ::ll::UntypedStorage<8, 40> mUnk329b5a;
    ::ll::UntypedStorage<4, 16> mUnkf82d21;
    ::ll::UntypedStorage<8, 32> mUnk73ece2;
    ::ll::UntypedStorage<8, 40> mUnk3b6d51;
    ::ll::UntypedStorage<1, 2>  mUnk9319cb;
    ::ll::UntypedStorage<1, 2>  mUnk6c0dfa;
    ::ll::UntypedStorage<8, 64> mUnkbf5b20;
    ::ll::UntypedStorage<4, 8>  mUnk91c34d;
    ::ll::UntypedStorage<4, 8>  mUnk913042;
    ::ll::UntypedStorage<8, 32> mUnkb5647c;
    ::ll::UntypedStorage<4, 24> mUnk167adf;
    ::ll::UntypedStorage<1, 2>  mUnk89ab00;
    ::ll::UntypedStorage<4, 16> mUnke4ab6b;
    ::ll::UntypedStorage<4, 12> mUnk3c267e;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData();

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_60::ComponentItemComponentData&&);

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_60::ComponentItemComponentData const&);

    MCNAPI ::std::shared_ptr<::cereal::DynamicValue> getCustomComponent(::cereal::SerializerContext const& context
    ) const;

    MCNAPI ::SharedTypes::v1_21_60::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_60::ComponentItemComponentData&&);

    MCNAPI ::SharedTypes::v1_21_60::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_60::ComponentItemComponentData const&);

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

    MCNAPI void* $ctor(::SharedTypes::v1_21_60::ComponentItemComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_60::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
