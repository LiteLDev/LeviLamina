#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/externals/astc_codec/FootprintType.h"
#include "mc/external/render_dragon/externals/astc_codec/decoder/Optional.h"

namespace astc_codec {

class Footprint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1b13c4;
    ::ll::UntypedStorage<4, 4> mUnk1a652b;
    ::ll::UntypedStorage<4, 4> mUnkadd6f4;
    // NOLINTEND

public:
    // prevent constructor by default
    Footprint& operator=(Footprint const&);
    Footprint(Footprint const&);
    Footprint();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit Footprint(::astc_codec::FootprintType footprint);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::astc_codec::base::Optional<::astc_codec::Footprint>
    FromFootprintType(::astc_codec::FootprintType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::astc_codec::FootprintType footprint);
    // NOLINTEND
};

} // namespace astc_codec
