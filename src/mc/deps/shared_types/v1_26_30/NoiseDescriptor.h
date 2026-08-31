#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct NoiseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mName;
    ::ll::TypedStorage<4, 4, int>                   mFirstOctave;
    ::ll::TypedStorage<8, 24, ::std::vector<float>> mAmplitudes;
    // NOLINTEND

public:
    // prevent constructor by default
    NoiseDescriptor& operator=(NoiseDescriptor const&);
    NoiseDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NoiseDescriptor(::SharedTypes::v1_26_30::NoiseDescriptor const&);

    MCAPI ::SharedTypes::v1_26_30::NoiseDescriptor& operator=(::SharedTypes::v1_26_30::NoiseDescriptor&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_26_30::NoiseDescriptor const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
