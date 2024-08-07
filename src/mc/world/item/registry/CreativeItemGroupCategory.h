#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class CreativeItemGroupCategory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    CreativeItemGroupCategory& operator=(CreativeItemGroupCategory const&);
    CreativeItemGroupCategory(CreativeItemGroupCategory const&);
    CreativeItemGroupCategory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeItemGroupCategory();

    MCAPI class CreativeGroupInfo* addAnonymousGroup();

    MCAPI class CreativeGroupInfo* addChildGroup(class HashedString const& name, class ItemInstance const& icon);

    MCAPI class CreativeGroupInfo* getChildGroup(class HashedString const& name);

    MCAPI ::CreativeItemCategory getCreativeCategory();

    MCAPI class CreativeGroupInfo* getOrAddTailAnonymousGroup();

    // NOLINTEND
};
