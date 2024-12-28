#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

struct HeightProvider {
public:
    // prevent constructor by default
    HeightProvider& operator=(HeightProvider const&);
    HeightProvider(HeightProvider const&);
    HeightProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HeightProvider();

    // vIndex: 1
    virtual int sample(::IRandom&, ::br::worldgen::WorldGenContext const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace br::worldgen
