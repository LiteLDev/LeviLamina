#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureSection; }
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
        ::ll::TypedStorage<4, 24, ::BoundingBox>                                                      mBox;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::br::worldgen::StructureSection>>> mSections;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BuildResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using PiecePlacer = ::std::function<
        ::br::worldgen::GenerationStub::BuildResult(::br::worldgen::GenerationContext&, ::BlockPos const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            ::br::worldgen::GenerationStub::BuildResult(::br::worldgen::GenerationContext&, ::BlockPos const&)>>
        mPlacer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::br::worldgen::GenerationStub::BuildResult build(::br::worldgen::GenerationContext& context);
    // NOLINTEND
};

} // namespace br::worldgen
