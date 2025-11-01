#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct MobDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 328> mUnk5d1c1c;
    ::ll::UntypedStorage<4, 4> mUnk3f04ac;
    ::ll::UntypedStorage<4, 4> mUnka8872d;
    ::ll::UntypedStorage<4, 4> mUnk898ff4;
    ::ll::UntypedStorage<4, 4> mUnkad3e37;
    ::ll::UntypedStorage<4, 4> mUnk76d8cd;
    ::ll::UntypedStorage<1, 1> mUnkcbdf3e;
    ::ll::UntypedStorage<1, 1> mUnkaf6d67;
    ::ll::UntypedStorage<4, 4> mUnk6ddb4b;
    ::ll::UntypedStorage<4, 4> mUnk9beac5;
    ::ll::UntypedStorage<1, 2> mUnkdc827c;
    ::ll::UntypedStorage<4, 4> mUnkeb6de0;
    // NOLINTEND

public:
    // prevent constructor by default
    MobDescriptor(MobDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobDescriptor();

    MCNAPI ::SharedTypes::v1_21_120::MobDescriptor& operator=(::SharedTypes::v1_21_120::MobDescriptor const&);

    MCNAPI ::SharedTypes::v1_21_120::MobDescriptor& operator=(::SharedTypes::v1_21_120::MobDescriptor&&);

    MCNAPI ~MobDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
