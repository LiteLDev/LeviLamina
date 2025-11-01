#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Material; }
// clang-format on

namespace ClientBlockPipeline {

struct BakedMaterialMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk880f0b;
    ::ll::UntypedStorage<1, 1>  mUnk57b2c1;
    ::ll::UntypedStorage<1, 1>  mUnkd8b6db;
    ::ll::UntypedStorage<1, 1>  mUnk1e12aa;
    ::ll::UntypedStorage<1, 1>  mUnk3ec1ca;
    ::ll::UntypedStorage<1, 1>  mUnkfd6b3e;
    // NOLINTEND

public:
    // prevent constructor by default
    BakedMaterialMap& operator=(BakedMaterialMap const&);
    BakedMaterialMap(BakedMaterialMap const&);
    BakedMaterialMap();
};

} // namespace ClientBlockPipeline
