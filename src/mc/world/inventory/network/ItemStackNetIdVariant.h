#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackLegacyRequestIdTag.h"
#include "mc/world/inventory/network/ItemStackNetIdTag.h"
#include "mc/world/inventory/network/ItemStackRequestIdTag.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

struct ItemStackNetIdVariant {
public:
    std::variant<ItemStackNetId, ItemStackRequestId, ItemStackLegacyRequestId> id;

    // NOLINTBEGIN
    MCAPI ItemStackNetIdVariant();

    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant&&);

    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant const&);

    MCAPI class Bedrock::Result<void> deserialize(class ReadOnlyBinaryStream& stream);

    MCAPI bool hasServerNetId() const;

    MCAPI bool isValid() const;

    MCAPI struct ItemStackNetIdVariant& operator=(ItemStackLegacyRequestId const& legacyClientRequestId);

    MCAPI struct ItemStackNetIdVariant& operator=(ItemStackNetId const& serverNetId);

    MCAPI struct ItemStackNetIdVariant& operator=(struct ItemStackNetIdVariant&&);

    MCAPI struct ItemStackNetIdVariant& operator=(struct ItemStackNetIdVariant const&);

    MCAPI bool operator==(struct ItemStackNetIdVariant const& other) const;

    MCAPI void serialize(class BinaryStream& stream) const;

    MCAPI std::string toString() const;

    MCAPI ItemStackNetId const* tryGetServerNetId() const;

    MCAPI ~ItemStackNetIdVariant();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ItemStackNetIdVariant&&);

    MCAPI void* ctor$(struct ItemStackNetIdVariant const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
