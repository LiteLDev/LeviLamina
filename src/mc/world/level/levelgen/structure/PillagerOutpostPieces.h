#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

class PillagerOutpostPieces {
public:
    // PillagerOutpostPieces inner types declare
    // clang-format off
    class PillagerOutpostPiece;
    // clang-format on

    // PillagerOutpostPieces inner types define
    class PillagerOutpostPiece : public ::TemplateStructurePiece {

    public:
        // prevent constructor by default
        PillagerOutpostPiece& operator=(PillagerOutpostPiece const&) = delete;
        PillagerOutpostPiece(PillagerOutpostPiece const&)            = delete;
        PillagerOutpostPiece()                                       = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 4
         * @symbol
         * ?postProcess\@PillagerOutpostPiece\@PillagerOutpostPieces\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
         */
        virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
        /**
         * @vftbl 5
         * @symbol
         * ?postProcessMobsAt\@PillagerOutpostPiece\@PillagerOutpostPieces\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
         */
        virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
        /**
         * @vftbl 12
         * @symbol ?addHardcodedSpawnAreas\@PillagerOutpostPiece\@PillagerOutpostPieces\@\@UEBAXAEAVLevelChunk\@\@\@Z
         */
        virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
        /**
         * @vftbl 13
         * @symbol
         * ?_handleDataMarker\@PillagerOutpostPiece\@PillagerOutpostPieces\@\@MEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
         */
        virtual void
        _handleDataMarker(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&);
        /**
         * @symbol
         * ??0PillagerOutpostPiece\@PillagerOutpostPieces\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@M_NAEAVDimension\@\@\@Z
         */
        MCAPI
        PillagerOutpostPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::string, class BlockPos const&, enum class Rotation, float, bool, class Dimension&);
        // NOLINTEND

        // private:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?_addMobsFromPositions\@PillagerOutpostPiece\@PillagerOutpostPieces\@\@AEAAXAEBVBoundingBox\@\@AEBUActorDefinitionIdentifier\@\@AEAVBlockSource\@\@AEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@\@Z
         */
        MCAPI void
        _addMobsFromPositions(class BoundingBox const&, struct ActorDefinitionIdentifier const&, class BlockSource&, std::vector<class BlockPos> const&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    PillagerOutpostPieces& operator=(PillagerOutpostPieces const&) = delete;
    PillagerOutpostPieces(PillagerOutpostPieces const&)            = delete;
    PillagerOutpostPieces()                                        = delete;

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addPiece\@PillagerOutpostPieces\@\@CAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void
    _addPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const&, enum class Rotation const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, class Dimension&);
    /**
     * @symbol
     * ?_addScatteredPieces\@PillagerOutpostPieces\@\@CAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVRandom\@\@AEBW4Rotation\@\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void
    _addScatteredPieces(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class Random&, enum class Rotation const&, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Dimension&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?MSC_FEATURES\@PillagerOutpostPieces\@\@0V?$array\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@$06\@std\@\@A
     */
    MCAPI static std::array<std::string_view, 7> MSC_FEATURES;
    /**
     * @symbol ?PILLAGER_LOOT\@PillagerOutpostPieces\@\@0V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@A
     */
    MCAPI static std::string_view PILLAGER_LOOT;
    /**
     * @symbol
     * ?STRUCTURE_WATCHTOWER\@PillagerOutpostPieces\@\@0V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@A
     */
    MCAPI static std::string_view STRUCTURE_WATCHTOWER;
    /**
     * @symbol
     * ?STRUCTURE_WATCHTOWER_OVERGROWN\@PillagerOutpostPieces\@\@0V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@A
     */
    MCAPI static std::string_view STRUCTURE_WATCHTOWER_OVERGROWN;
    // NOLINTEND
};
