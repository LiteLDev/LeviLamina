#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SeedItemComponentLegacy {

public:
    // prevent constructor by default
    SeedItemComponentLegacy& operator=(SeedItemComponentLegacy const&) = delete;
    SeedItemComponentLegacy(SeedItemComponentLegacy const&)            = delete;
    SeedItemComponentLegacy()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SeedItemComponentLegacy\@\@QEAA\@AEAVItem\@\@\@Z
     */
    MCAPI SeedItemComponentLegacy(class Item&);
    /**
     * @symbol ?init\@SeedItemComponentLegacy\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool init(class Json::Value&, class SemVersion const&);
    /**
     * @symbol ?isPlanting\@SeedItemComponentLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isPlanting() const;
    /**
     * @symbol ?setPlanting\@SeedItemComponentLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setPlanting(bool);
    /**
     * @symbol ?useOn\@SeedItemComponentLegacy\@\@QEAA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    MCAPI bool useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_canPlant\@SeedItemComponentLegacy\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _canPlant(class Block const&) const;
    // NOLINTEND
};
