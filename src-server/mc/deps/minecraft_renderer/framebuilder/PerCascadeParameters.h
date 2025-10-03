#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeRenderingParameters.h"

namespace mce::framebuilder {

struct PerCascadeParameters : public ::mce::framebuilder::PerCascadeRenderingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk15baf4;
    ::ll::UntypedStorage<4, 4> mUnk686ce0;
    // NOLINTEND

public:
    // prevent constructor by default
    PerCascadeParameters& operator=(PerCascadeParameters const&);
    PerCascadeParameters(PerCascadeParameters const&);
    PerCascadeParameters();
};

} // namespace mce::framebuilder
