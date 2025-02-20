#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"
#include "mc/platform/Result.h"

namespace Bedrock::Resources {

struct BinaryHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf414b0;
    ::ll::UntypedStorage<2, 2>  mUnkf9cdc5;
    ::ll::UntypedStorage<8, 8>  mUnk6d8f24;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryHeader& operator=(BinaryHeader const&);
    BinaryHeader(BinaryHeader const&);
    BinaryHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BinaryHeader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool hasMagicNumber(::gsl::span<uchar const> data);

    MCAPI static ::Bedrock::
        Result<::Bedrock::Resources::BinaryHeader, ::std::vector<::cereal::SerializerContext::LogEntry>>
        parse(::std::string_view binaryResource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Resources
