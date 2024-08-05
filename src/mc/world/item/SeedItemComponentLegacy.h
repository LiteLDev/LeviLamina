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
    MCAPI explicit SeedItemComponentLegacy(class Item& owner);

    MCAPI bool init(class Json::Value const& data, class SemVersion const& engineVersion);

    MCAPI bool isPlanting() const;

    MCAPI void setPlanting(bool);

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
    MCAPI bool _canPlant(class Block const& target) const;

    // NOLINTEND
};
