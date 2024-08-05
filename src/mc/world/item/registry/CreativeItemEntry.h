#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class CreativeItemEntry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    CreativeItemEntry& operator=(CreativeItemEntry const&);
    CreativeItemEntry(CreativeItemEntry const&);
    CreativeItemEntry();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeItemEntry() = default;

    MCAPI CreativeItemEntry(class CreativeItemEntry&& rhs);

    MCAPI CreativeItemNetId const& getCreativeNetId() const;

    MCAPI class CreativeGroupInfo* getGroup() const;

    MCAPI uint getIndex() const;

    MCAPI class ItemInstance const& getItemInstance() const;

    // NOLINTEND
};
