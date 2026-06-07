#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ItemStackRequestData;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackRequestData>>> mRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestBatch();

    MCNAPI void addRequest(::std::unique_ptr<::ItemStackRequestData> request);
#endif

    MCNAPI ::std::vector<::std::unique_ptr<::ItemStackRequestData>> const& getRequests() const;

    MCNAPI ::std::vector<::std::unique_ptr<::ItemStackRequestData>> takeRequests() const;

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~ItemStackRequestBatch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::std::unique_ptr<::ItemStackRequestBatch>> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
