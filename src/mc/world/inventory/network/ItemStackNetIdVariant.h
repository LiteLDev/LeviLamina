#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
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
    MCAPI ItemStackNetIdVariant();

    MCAPI ItemStackNetIdVariant(::ItemStackNetIdVariant const&);

    MCAPI ItemStackNetIdVariant(::ItemStackNetIdVariant&&);

    MCAPI ::Bedrock::Result<void> deserialize(::ReadOnlyBinaryStream& stream);

    MCAPI bool hasServerNetId() const;

    MCAPI bool isValid() const;

    MCAPI ::ItemStackNetIdVariant& operator=(::ItemStackNetIdVariant const&);

    MCAPI ::ItemStackNetIdVariant& operator=(::ItemStackNetId const& serverNetId);

    MCAPI ::ItemStackNetIdVariant& operator=(::ItemStackNetIdVariant&&);

    MCAPI ::ItemStackNetIdVariant& operator=(::ItemStackLegacyRequestId const& legacyClientRequestId);

    MCAPI bool operator==(::ItemStackNetIdVariant const& other) const;

    MCAPI void serialize(::BinaryStream& stream) const;

    MCAPI ::std::string toString() const;

    MCAPI ::ItemStackNetId const* tryGetServerNetId() const;

    MCAPI ~ItemStackNetIdVariant();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ItemStackNetIdVariant const&);

    MCAPI void* $ctor(::ItemStackNetIdVariant&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
