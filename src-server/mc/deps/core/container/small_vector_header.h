#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::detail {

class small_vector_header {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke5820e;
    ::ll::UntypedStorage<4, 4> mUnk63f043;
    ::ll::UntypedStorage<4, 4> mUnk5b1f65;
    // NOLINTEND

public:
    // prevent constructor by default
    small_vector_header& operator=(small_vector_header const&);
    small_vector_header(small_vector_header const&);
    small_vector_header();

};

}
