#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CreativeGroupInfo();

    // symbol: ??0CreativeGroupInfo@@QEAA@AEBV0@@Z
    MCAPI CreativeGroupInfo(class CreativeGroupInfo const&);

    // symbol: ?addCreativeItem@CreativeGroupInfo@@QEAAXPEAVCreativeItemEntry@@@Z
    MCAPI void addCreativeItem(class CreativeItemEntry*);

    // NOLINTEND
};
