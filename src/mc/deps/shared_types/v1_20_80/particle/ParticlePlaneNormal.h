#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticlePlaneNormal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk434214;
    ::ll::UntypedStorage<8, 144> mUnke2e859;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticlePlaneNormal& operator=(ParticlePlaneNormal const&);
    ParticlePlaneNormal(ParticlePlaneNormal const&);
    ParticlePlaneNormal();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
