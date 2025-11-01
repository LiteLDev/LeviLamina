#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ItemStackRequestAction;
class ReadOnlyBinaryStream;
struct ItemStackRequestIdTag;
// clang-format on

class ItemStackRequestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ItemStackRequestId>                                       mClientRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                               mStringsToFilter;
    ::ll::TypedStorage<4, 4, ::TextProcessingEventOrigin>                                 mStringsToFilterOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackRequestAction>>> mActions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::std::unique_ptr<::ItemStackRequestData>> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
