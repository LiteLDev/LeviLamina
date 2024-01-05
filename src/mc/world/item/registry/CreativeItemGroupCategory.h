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
    // vIndex: 0, symbol: ??1CreativeItemGroupCategory@@UEAA@XZ
    virtual ~CreativeItemGroupCategory();

    // symbol: ?addAnonymousGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@XZ
    MCAPI class CreativeGroupInfo* addAnonymousGroup();

    // symbol:
    // ?addChildGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@AEBVHashedString@@AEBVItemInstance@@@Z
    MCAPI class CreativeGroupInfo* addChildGroup(class HashedString const& name, class ItemInstance const& icon);

    // symbol: ?getChildGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@AEBVHashedString@@@Z
    MCAPI class CreativeGroupInfo* getChildGroup(class HashedString const& name);

    // symbol: ?getCreativeCategory@CreativeItemGroupCategory@@QEAA?AW4CreativeItemCategory@@XZ
    MCAPI ::CreativeItemCategory getCreativeCategory();

    // symbol: ?getOrAddTailAnonymousGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@XZ
    MCAPI class CreativeGroupInfo* getOrAddTailAnonymousGroup();

    // NOLINTEND
};
