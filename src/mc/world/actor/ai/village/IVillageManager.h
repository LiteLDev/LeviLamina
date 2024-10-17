#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

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
    // vIndex: 0
    virtual ~IVillageManager();

    // vIndex: 1
    virtual std::weak_ptr<class Village>
    fetchClosestVillage(class BlockPos const& position, int maxDistFromVillageBounds, uint searchRadius) const = 0;

    // vIndex: 2
    virtual std::weak_ptr<class Village> getVillageByID(class mce::UUID const& villageID) const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
