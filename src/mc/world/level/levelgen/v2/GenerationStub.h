#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace br::worldgen { struct GenerationContext; }
// clang-format on

namespace br::worldgen {

class GenerationStub {
public:
    // GenerationStub inner types declare
    // clang-format off
    struct BuildResult;
    // clang-format on

    // GenerationStub inner types define
    struct BuildResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 24> mUnk6f19eb;
        ::ll::UntypedStorage<8, 24> mUnkb8f58f;
        // NOLINTEND

    public:
        // prevent constructor by default
        BuildResult& operator=(BuildResult const&);
        BuildResult(BuildResult const&);
        BuildResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BuildResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk13d408;
    ::ll::UntypedStorage<8, 64> mUnk615198;
    // NOLINTEND

public:
    // prevent constructor by default
    GenerationStub& operator=(GenerationStub const&);
    GenerationStub(GenerationStub const&);
    GenerationStub();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::br::worldgen::GenerationStub::BuildResult build(::br::worldgen::GenerationContext& context);
    // NOLINTEND
};

} // namespace br::worldgen
