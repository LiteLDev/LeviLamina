#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/externals/astc_codec/decoder/ColorEndpointMode.h"
#include "mc/external/render_dragon/externals/astc_codec/decoder/Optional.h"

// auto generated forward declare list
// clang-format off
namespace astc_codec::base { class UInt128; }
// clang-format on

namespace astc_codec {

class PhysicalASTCBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc9ec2d;
    // NOLINTEND

public:
    // prevent constructor by default
    PhysicalASTCBlock& operator=(PhysicalASTCBlock const&);
    PhysicalASTCBlock(PhysicalASTCBlock const&);
    PhysicalASTCBlock();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::astc_codec::base::Optional<int> ColorStartBit() const;

    MCNAPI ::astc_codec::base::Optional<int> ColorValuesRange() const;

    MCNAPI ::astc_codec::base::Optional<int> DualPlaneChannel() const;

    MCNAPI void GetColorValuesInfo(int* color_bits, int* color_range) const;

    MCNAPI ::astc_codec::base::Optional<::astc_codec::ColorEndpointMode> GetEndpointMode(int partition) const;

    MCNAPI bool IsDualPlane() const;

    MCNAPI ::astc_codec::base::Optional<::std::string> IsIllegalEncoding() const;

    MCNAPI bool IsVoidExtent() const;

    MCNAPI ::astc_codec::base::Optional<int> NumColorBits() const;

    MCNAPI ::astc_codec::base::Optional<int> NumColorValues() const;

    MCNAPI ::astc_codec::base::Optional<int> NumPartitions() const;

    MCNAPI ::astc_codec::base::Optional<int> NumWeightBits() const;

    MCNAPI ::astc_codec::base::Optional<int> PartitionID() const;

    MCNAPI explicit PhysicalASTCBlock(::astc_codec::base::UInt128 astc_block);

    MCNAPI ::astc_codec::base::Optional<::std::array<int, 4>> VoidExtentCoords() const;

    MCNAPI ::astc_codec::base::Optional<::std::array<int, 2>> WeightGridDims() const;

    MCNAPI ::astc_codec::base::Optional<int> WeightRange() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::astc_codec::base::UInt128 astc_block);
#endif
    // NOLINTEND
};

} // namespace astc_codec
