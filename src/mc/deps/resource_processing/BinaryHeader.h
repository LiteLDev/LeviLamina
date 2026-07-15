#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct BinaryHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5a47a2;
    ::ll::UntypedStorage<2, 2>  mUnkf9cdc5;
    ::ll::UntypedStorage<8, 8>  mUnk6d8f24;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryHeader& operator=(BinaryHeader const&);
    BinaryHeader(BinaryHeader const&);
    BinaryHeader();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool hasMagicNumber(::gsl::span<uchar const> data);
    // NOLINTEND
};

} // namespace Bedrock::Resources
