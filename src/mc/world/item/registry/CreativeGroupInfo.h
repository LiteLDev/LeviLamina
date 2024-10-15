#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class CreativeGroupInfo : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    CreativeGroupInfo& operator=(CreativeGroupInfo const&);
    CreativeGroupInfo();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeGroupInfo() = default;

    MCAPI CreativeGroupInfo(class CreativeGroupInfo const&);

    MCAPI void addCreativeItem(class CreativeItemEntry* itemEntry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class CreativeGroupInfo const&);

    // NOLINTEND
};
