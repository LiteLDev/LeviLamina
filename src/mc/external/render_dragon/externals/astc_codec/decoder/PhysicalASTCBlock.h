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
    MCNAPI_C ::astc_codec::base::Optional<int> ColorStartBit() const;

    MCNAPI_C ::astc_codec::base::Optional<int> ColorValuesRange() const;

    MCNAPI_C ::astc_codec::base::Optional<int> DualPlaneChannel() const;

    MCNAPI_C void GetColorValuesInfo(int* color_bits, int* color_range) const;

    MCNAPI_C ::astc_codec::base::Optional<::astc_codec::ColorEndpointMode> GetEndpointMode(int partition) const;

    MCNAPI_C bool IsDualPlane() const;

    MCNAPI_C ::astc_codec::base::Optional<::std::string> IsIllegalEncoding() const;

    MCNAPI_C bool IsVoidExtent() const;

    MCNAPI_C ::astc_codec::base::Optional<int> NumColorBits() const;

    MCNAPI_C ::astc_codec::base::Optional<int> NumColorValues() const;

    MCNAPI_C ::astc_codec::base::Optional<int> NumPartitions() const;

    MCNAPI_C ::astc_codec::base::Optional<int> NumWeightBits() const;

    MCNAPI_C ::astc_codec::base::Optional<int> PartitionID() const;

    MCNAPI_C ::astc_codec::base::Optional<::std::array<int, 4>> VoidExtentCoords() const;

    MCNAPI_C ::astc_codec::base::Optional<::std::array<int, 2>> WeightGridDims() const;

    MCNAPI_C ::astc_codec::base::Optional<int> WeightRange() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::astc_codec::base::UInt128 astc_block);
    // NOLINTEND
};

} // namespace astc_codec
