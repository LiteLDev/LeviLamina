#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SeedItemComponentLegacy {
public:
    // prevent constructor by default
    SeedItemComponentLegacy& operator=(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy();

public:
    // NOLINTBEGIN
    // symbol: ??0SeedItemComponentLegacy@@QEAA@AEAVItem@@@Z
    MCAPI explicit SeedItemComponentLegacy(class Item& owner);

    // symbol: ?init@SeedItemComponentLegacy@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
    MCAPI bool init(class Json::Value& data, class SemVersion const& engineVersion);

    // symbol: ?isPlanting@SeedItemComponentLegacy@@QEBA_NXZ
    MCAPI bool isPlanting() const;

    // symbol: ?setPlanting@SeedItemComponentLegacy@@QEAAX_N@Z
    MCAPI void setPlanting(bool);

    // symbol: ?useOn@SeedItemComponentLegacy@@QEAA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    MCAPI bool useOn(
        class ItemStack&      instance,
        class Actor&          actor,
        class BlockPos const& blockPos,
        uchar                 face,
        class Vec3 const&     clickPos
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canPlant@SeedItemComponentLegacy@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _canPlant(class Block const& target) const;

    // NOLINTEND
};
