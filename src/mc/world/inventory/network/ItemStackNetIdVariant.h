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
    ::ll::TypedStorage<8, 24, ::std::variant<::ItemStackNetId, ::ItemStackRequestId, ::ItemStackLegacyRequestId>>
        mVariant;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackNetIdVariant();

    MCAPI ItemStackNetIdVariant(::ItemStackNetIdVariant&&);

    MCAPI ItemStackNetIdVariant(::ItemStackNetIdVariant const&);

    MCAPI ::Bedrock::Result<void> deserialize(::ReadOnlyBinaryStream& stream);

    MCAPI bool hasServerNetId() const;

#ifdef LL_PLAT_C
    MCAPI bool isClientRequestId() const;

    MCAPI bool isLegacyClientRequestId() const;
#endif

    MCAPI bool isValid() const;

    MCFOLD ::ItemStackNetIdVariant& operator=(::ItemStackNetIdVariant&&);

    MCFOLD ::ItemStackNetIdVariant& operator=(::ItemStackNetIdVariant const&);

#ifdef LL_PLAT_C
    MCAPI ::ItemStackNetIdVariant& operator=(::ItemStackRequestId const& clientRequestId);
#endif

    MCAPI ::ItemStackNetIdVariant& operator=(::ItemStackLegacyRequestId const& legacyClientRequestId);

    MCAPI ::ItemStackNetIdVariant& operator=(::ItemStackNetId const& serverNetId);

    MCAPI bool operator==(::ItemStackNetIdVariant const& other) const;

    MCAPI void serialize(::BinaryStream& stream) const;

    MCAPI ::std::string toString() const;

#ifdef LL_PLAT_C
    MCAPI ::ItemStackRequestId const* tryGetRequestId() const;
#endif

    MCAPI ::ItemStackNetId const* tryGetServerNetId() const;

    MCAPI ~ItemStackNetIdVariant();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::ItemStackNetIdVariant&&);

    MCFOLD void* $ctor(::ItemStackNetIdVariant const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
