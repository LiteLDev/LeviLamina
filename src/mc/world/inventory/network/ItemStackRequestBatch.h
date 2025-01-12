#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1692f5;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestBatch& operator=(ItemStackRequestBatch const&);
    ItemStackRequestBatch(ItemStackRequestBatch const&);
    ItemStackRequestBatch();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~ItemStackRequestBatch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::std::unique_ptr<::ItemStackRequestBatch>> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
