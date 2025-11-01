#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
// clang-format on

namespace Bedrock::Resources {

struct BinaryHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf414b0;
    ::ll::UntypedStorage<2, 2> mUnkf9cdc5;
    ::ll::UntypedStorage<8, 8> mUnk6d8f24;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryHeader& operator=(BinaryHeader const&);
    BinaryHeader(BinaryHeader const&);
    BinaryHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BinaryHeader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool hasMagicNumber(::gsl::span<uchar const> data);

    MCNAPI static ::Bedrock::Result<::Bedrock::Resources::BinaryHeader, ::Puv::Logger> parse(::std::string_view binaryResource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
