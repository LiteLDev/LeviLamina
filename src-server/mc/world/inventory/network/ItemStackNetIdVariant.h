#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
struct ItemStackLegacyRequestIdTag;
struct ItemStackNetIdTag;
struct ItemStackRequestIdTag;
// clang-format on

struct ItemStackNetIdVariant {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::std::variant<::ItemStackNetId, ::ItemStackRequestId, ::ItemStackLegacyRequestId>>
        mVariant;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void> deserialize(::ReadOnlyBinaryStream& stream);

    MCNAPI ::std::string toString() const;

    MCNAPI ~ItemStackNetIdVariant();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
