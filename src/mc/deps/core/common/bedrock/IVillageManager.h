#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace mce { class UUID; }
// clang-format on

class IVillageManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IVillageManager& operator=(IVillageManager const&);
    IVillageManager(IVillageManager const&);
    IVillageManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IVillageManager@@UEAA@XZ
    virtual ~IVillageManager();

    // vIndex: 1, symbol: ?fetchClosestVillage@VillageManager@@UEBA?AV?$weak_ptr@VVillage@@@std@@AEBVBlockPos@@HI@Z
    virtual std::weak_ptr<class Village>
    fetchClosestVillage(class BlockPos const& position, int, uint searchRadius) const = 0;

    // vIndex: 2, symbol: ?getVillageByID@VillageManager@@UEBA?AV?$weak_ptr@VVillage@@@std@@AEBVUUID@mce@@@Z
    virtual std::weak_ptr<class Village> getVillageByID(class mce::UUID const& villageID) const = 0;

    // NOLINTEND
};
