#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130::Brain {

struct MemoryType {
public:
    // MemoryType inner types declare
    // clang-format off
    struct Names;
    // clang-format on

    // MemoryType inner types define
    enum class Value : uchar {
        Invalid     = 0,
        Bool        = 1,
        Int         = 2,
        Float       = 3,
        String      = 4,
        EntityRef   = 5,
        BlockRef    = 6,
        BlockPos    = 7,
        BlockPosVec = 8,
        PoiRef      = 9,
        DamageCause = 10,
        Countdown   = 11,
        WorldPos    = 12,
        Vec3        = 13,
        Count       = 14,
    };

    struct Names {
    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::string_view const& BLOCK_POS();

        MCAPI static ::std::string_view const& BLOCK_POS_VEC();

        MCAPI static ::std::string_view const& BLOCK_REF();

        MCAPI static ::std::string_view const& BOOL();

        MCAPI static ::std::string_view const& COUNTDOWN();

        MCAPI static ::std::string_view const& DAMAGE_CAUSE();

        MCAPI static ::std::string_view const& ENTITY_REF();

        MCAPI static ::std::string_view const& FLOAT();

        MCAPI static ::std::string_view const& INT();

        MCAPI static ::std::string_view const& POI_MEMORY();

        MCAPI static ::std::string_view const& STRING();

        MCAPI static ::std::string_view const& VEC3();

        MCAPI static ::std::string_view const& WORLD_POS();
        // NOLINTEND
    };
};

} // namespace SharedTypes::v1_21_130::Brain
