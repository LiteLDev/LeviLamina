#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/OceanTempCategory.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

class OceanRuinPieces {
public:
    // OceanRuinPieces inner types declare
    // clang-format off
    class OceanRuinPiece;
    // clang-format on

    // OceanRuinPieces inner types define
    class OceanRuinPiece : public ::TemplateStructurePiece {
    public:
        // prevent constructor by default
        OceanRuinPiece& operator=(OceanRuinPiece const&);
        OceanRuinPiece(OceanRuinPiece const&);
        OceanRuinPiece();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1OceanRuinPiece@OceanRuinPieces@@UEAA@XZ
        virtual ~OceanRuinPiece() = default;

        // vIndex: 2, symbol: ?getType@OceanRuinPiece@OceanRuinPieces@@UEBA?AW4StructurePieceType@@XZ
        virtual ::StructurePieceType getType() const;

        // vIndex: 4, symbol:
        // ?postProcess@OceanRuinPiece@OceanRuinPieces@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
        virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

        // vIndex: 13, symbol:
        // ?_handleDataMarker@OceanRuinPiece@OceanRuinPieces@@MEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
        virtual void
        _handleDataMarker(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&);

        // symbol:
        // ??0OceanRuinPiece@OceanRuinPieces@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@W4Rotation@@M_NW4OceanTempCategory@@@Z
        MCAPI OceanRuinPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>,
            std::string,
            class BlockPos const&,
            ::Rotation,
            float,
            bool,
            ::OceanTempCategory
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OceanRuinPieces& operator=(OceanRuinPieces const&);
    OceanRuinPieces(OceanRuinPieces const&);
    OceanRuinPieces();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addPieces@OceanRuinPieces@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBVBlockPos@@AEBW4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@AEBUOceanRuinConfiguration@@@Z
    MCAPI static void
    addPieces(Bedrock::NotNullNonOwnerPtr<class StructureManager>, class BlockPos const&, ::Rotation const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, struct OceanRuinConfiguration const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addClusterRuins@OceanRuinPieces@@CAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVRandom@@AEBW4Rotation@@AEBVBlockPos@@AEBUOceanRuinConfiguration@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@@Z
    MCAPI static void
    _addClusterRuins(Bedrock::NotNullNonOwnerPtr<class StructureManager>, class Random&, ::Rotation const&, class BlockPos const&, struct OceanRuinConfiguration const&, std::vector<std::unique_ptr<class StructurePiece>>&);

    // symbol:
    // ?_addPiece@OceanRuinPieces@@CAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBVBlockPos@@AEBW4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@AEBUOceanRuinConfiguration@@_NM@Z
    MCAPI static void _addPiece(
        Bedrock::NotNullNonOwnerPtr<class StructureManager>,
        class BlockPos const&,
        ::Rotation const&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        struct OceanRuinConfiguration const&,
        bool,
        float
    );

    // symbol:
    // ?_allPositions@OceanRuinPieces@@CA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAVRandom@@HHH@Z
    MCAPI static std::vector<class BlockPos> _allPositions(class Random&, int, int, int);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?BIG_RUIN_LOOT@OceanRuinPieces@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view BIG_RUIN_LOOT;

    // symbol: ?RUIN_LOOT@OceanRuinPieces@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view RUIN_LOOT;

    // symbol: ?STRUCTURE_BIG_RUIN1_BRICK@OceanRuinPieces@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view STRUCTURE_BIG_RUIN1_BRICK;

    // symbol: ?STRUCTURE_BIG_RUIN8_BRICK@OceanRuinPieces@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view STRUCTURE_BIG_RUIN8_BRICK;

    // symbol: ?STRUCTURE_RUIN_2_BRICK@OceanRuinPieces@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view STRUCTURE_RUIN_2_BRICK;

    // symbol: ?STRUCTURE_RUIN_3_BRICK@OceanRuinPieces@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view STRUCTURE_RUIN_3_BRICK;

    // symbol: ?bigRuinsBrick@OceanRuinPieces@@0PAV?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view bigRuinsBrick[];

    // symbol: ?bigRuinsCracked@OceanRuinPieces@@0PAV?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view bigRuinsCracked[];

    // symbol: ?bigRuinsMossy@OceanRuinPieces@@0PAV?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view bigRuinsMossy[];

    // symbol: ?bigWarmRuins@OceanRuinPieces@@0PAV?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view bigWarmRuins[];

    // symbol: ?mSettings@OceanRuinPieces@@0VLegacyStructureSettings@@A
    MCAPI static class LegacyStructureSettings mSettings;

    // symbol: ?ruinsBrick@OceanRuinPieces@@0PAV?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view ruinsBrick[];

    // symbol: ?ruinsCracked@OceanRuinPieces@@0PAV?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view ruinsCracked[];

    // symbol: ?ruinsMossy@OceanRuinPieces@@0PAV?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view ruinsMossy[];

    // symbol: ?warmRuins@OceanRuinPieces@@0PAV?$basic_string_view@DU?$char_traits@D@std@@@std@@A
    MCAPI static std::string_view warmRuins[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $BIG_RUIN_LOOT() { return BIG_RUIN_LOOT; }

    static auto& $RUIN_LOOT() { return RUIN_LOOT; }

    static auto& $STRUCTURE_BIG_RUIN1_BRICK() { return STRUCTURE_BIG_RUIN1_BRICK; }

    static auto& $STRUCTURE_BIG_RUIN8_BRICK() { return STRUCTURE_BIG_RUIN8_BRICK; }

    static auto& $STRUCTURE_RUIN_2_BRICK() { return STRUCTURE_RUIN_2_BRICK; }

    static auto& $STRUCTURE_RUIN_3_BRICK() { return STRUCTURE_RUIN_3_BRICK; }

    static auto& $bigRuinsBrick() { return bigRuinsBrick; }

    static auto& $bigRuinsCracked() { return bigRuinsCracked; }

    static auto& $bigRuinsMossy() { return bigRuinsMossy; }

    static auto& $bigWarmRuins() { return bigWarmRuins; }

    static auto& $mSettings() { return mSettings; }

    static auto& $ruinsBrick() { return ruinsBrick; }

    static auto& $ruinsCracked() { return ruinsCracked; }

    static auto& $ruinsMossy() { return ruinsMossy; }

    static auto& $warmRuins() { return warmRuins; }

    // NOLINTEND
};
