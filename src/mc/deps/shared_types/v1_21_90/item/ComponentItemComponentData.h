#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk294da1;
    ::ll::UntypedStorage<4, 8>  mUnk813987;
    ::ll::UntypedStorage<1, 2>  mUnkf76687;
    ::ll::UntypedStorage<8, 48> mUnk4b200b;
    ::ll::UntypedStorage<1, 2>  mUnkfb8ed4;
    ::ll::UntypedStorage<8, 32> mUnk1bd476;
    ::ll::UntypedStorage<2, 4>  mUnk19c74f;
    ::ll::UntypedStorage<8, 40> mUnk8cfa9b;
    ::ll::UntypedStorage<8, 40> mUnkf0aee3;
    ::ll::UntypedStorage<4, 16> mUnka77152;
    ::ll::UntypedStorage<8, 32> mUnkae1067;
    ::ll::UntypedStorage<4, 20> mUnk1459ea;
    ::ll::UntypedStorage<8, 48> mUnk6cd0b9;
    ::ll::UntypedStorage<8, 88> mUnk43c020;
    ::ll::UntypedStorage<8, 48> mUnkb55089;
    ::ll::UntypedStorage<4, 8>  mUnk8740dd;
    ::ll::UntypedStorage<1, 2>  mUnkba5807;
    ::ll::UntypedStorage<1, 2>  mUnka549fb;
    ::ll::UntypedStorage<8, 40> mUnk1366a7;
    ::ll::UntypedStorage<8, 72> mUnk66fe73;
    ::ll::UntypedStorage<8, 48> mUnk34d22b;
    ::ll::UntypedStorage<1, 2>  mUnkf233cd;
    ::ll::UntypedStorage<2, 4>  mUnkbd5dfc;
    ::ll::UntypedStorage<8, 72> mUnk7b8da2;
    ::ll::UntypedStorage<8, 48> mUnk880ced;
    ::ll::UntypedStorage<8, 40> mUnk42d629;
    ::ll::UntypedStorage<4, 16> mUnk9ed522;
    ::ll::UntypedStorage<8, 32> mUnkec8ba5;
    ::ll::UntypedStorage<8, 40> mUnkff3bc7;
    ::ll::UntypedStorage<1, 2>  mUnka71b1e;
    ::ll::UntypedStorage<1, 2>  mUnk3b2414;
    ::ll::UntypedStorage<8, 64> mUnk2271ee;
    ::ll::UntypedStorage<4, 8>  mUnkf61e55;
    ::ll::UntypedStorage<4, 8>  mUnkc0b2f0;
    ::ll::UntypedStorage<8, 32> mUnk7c8270;
    ::ll::UntypedStorage<4, 24> mUnkb082fb;
    ::ll::UntypedStorage<1, 2>  mUnk5873b2;
    ::ll::UntypedStorage<4, 16> mUnkd35b6d;
    ::ll::UntypedStorage<4, 16> mUnk91cd4a;
    ::ll::UntypedStorage<8, 40> mUnkdcee49;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemComponentData();

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_90::ComponentItemComponentData&&);

    MCNAPI ComponentItemComponentData(::SharedTypes::v1_21_90::ComponentItemComponentData const&);

    MCNAPI ::std::shared_ptr<::cereal::DynamicValue>
    getCustomComponent(::cereal::SerializerContext const& context) const;

    MCNAPI ::SharedTypes::v1_21_90::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_90::ComponentItemComponentData&&);

    MCNAPI ::SharedTypes::v1_21_90::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_90::ComponentItemComponentData const&);

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

    MCNAPI void* $ctor(::SharedTypes::v1_21_90::ComponentItemComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_90::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
