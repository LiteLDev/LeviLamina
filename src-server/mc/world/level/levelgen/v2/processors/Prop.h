#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::processors::JigsawReplacementHelpers {

struct Prop {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::string_view> id;
    ::ll::TypedStorage<8, 16, ::std::string_view> value;
    // NOLINTEND

};

}
