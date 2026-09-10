#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
// clang-format on

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

#ifdef LL_PLAT_S
    MCNAPI static bool write(::BinaryStream& stream, ::Bedrock::Resources::BinaryHeader const& header);
#endif
    // NOLINTEND
};

} // namespace Bedrock::Resources
