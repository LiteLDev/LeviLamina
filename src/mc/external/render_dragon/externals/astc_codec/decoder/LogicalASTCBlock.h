#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace astc_codec { class Footprint; }
namespace astc_codec { struct IntermediateBlockData; }
namespace astc_codec { struct VoidExtentData; }
// clang-format on

namespace astc_codec {

class LogicalASTCBlock {
public:
    // LogicalASTCBlock inner types declare
    // clang-format off
    struct DualPlaneData;
    // clang-format on

    // LogicalASTCBlock inner types define
    struct DualPlaneData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk5cb817;
        ::ll::UntypedStorage<8, 24> mUnk413548;
        // NOLINTEND

    public:
        // prevent constructor by default
        DualPlaneData& operator=(DualPlaneData const&);
        DualPlaneData(DualPlaneData const&);
        DualPlaneData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk389206;
    ::ll::UntypedStorage<8, 24> mUnk893cac;
    ::ll::UntypedStorage<8, 48> mUnk36c6cf;
    ::ll::UntypedStorage<8, 40> mUnk60f23e;
    // NOLINTEND

public:
    // prevent constructor by default
    LogicalASTCBlock& operator=(LogicalASTCBlock const&);
    LogicalASTCBlock(LogicalASTCBlock const&);
    LogicalASTCBlock();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void
    CalculateWeights(::astc_codec::Footprint const& footprint, ::astc_codec::IntermediateBlockData const& block);

    MCNAPI ::std::array<int, 4> ColorAt(int x, int y) const;

    MCNAPI LogicalASTCBlock(::astc_codec::Footprint const& footprint, ::astc_codec::VoidExtentData const& block);

    MCNAPI void SetDualPlaneChannel(int channel);

    MCNAPI ~LogicalASTCBlock();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::astc_codec::Footprint const& footprint, ::astc_codec::VoidExtentData const& block);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace astc_codec
