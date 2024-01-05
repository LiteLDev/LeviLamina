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
    // vIndex: 0, symbol: __gen_??1CreativeItemEntry@@UEAA@XZ
    virtual ~CreativeItemEntry() = default;

    // symbol: ??0CreativeItemEntry@@QEAA@$$QEAV0@@Z
    MCAPI CreativeItemEntry(class CreativeItemEntry&& rhs);

    // symbol: ?getCreativeNetId@CreativeItemEntry@@QEBAAEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@XZ
    MCAPI CreativeItemNetId const& getCreativeNetId() const;

    // symbol: ?getGroup@CreativeItemEntry@@QEBAPEAVCreativeGroupInfo@@XZ
    MCAPI class CreativeGroupInfo* getGroup() const;

    // symbol: ?getIndex@CreativeItemEntry@@QEBAIXZ
    MCAPI uint getIndex() const;

    // symbol: ?getItemInstance@CreativeItemEntry@@QEBAAEBVItemInstance@@XZ
    MCAPI class ItemInstance const& getItemInstance() const;

    // NOLINTEND
};
