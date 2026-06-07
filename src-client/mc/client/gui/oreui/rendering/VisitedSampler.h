#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct SamplerStateDescription; }
// clang-format on

namespace Gameface {

struct VisitedSampler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::SamplerStateDescription const&> mSampler;
    ::ll::TypedStorage<4, 4, int>                                   mTextureIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    VisitedSampler& operator=(VisitedSampler const&);
    VisitedSampler(VisitedSampler const&);
    VisitedSampler();
};

} // namespace Gameface
