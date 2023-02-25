/**
 * @file  OceanRuinPieces.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanRuinPieces.
 *
 */
class OceanRuinPieces {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANRUINPIECES
public:
    class OceanRuinPieces& operator=(class OceanRuinPieces const &) = delete;
    OceanRuinPieces(class OceanRuinPieces const &) = delete;
    OceanRuinPieces() = delete;
#endif

public:
    /**
     * @symbol  ?addPieces\@OceanRuinPieces\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEBUOceanRuinConfiguration\@\@\@Z
     */
    MCAPI static void addPieces(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum class Rotation const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, struct OceanRuinConfiguration const &);

//private:
    /**
     * @symbol  ?_addClusterRuins\@OceanRuinPieces\@\@CAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVRandom\@\@AEBW4Rotation\@\@AEBVBlockPos\@\@AEBUOceanRuinConfiguration\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void _addClusterRuins(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class Random &, enum class Rotation const &, class BlockPos const &, struct OceanRuinConfiguration const &, std::vector<std::unique_ptr<class StructurePiece>> &);
    /**
     * @symbol  ?_addPiece\@OceanRuinPieces\@\@CAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEBUOceanRuinConfiguration\@\@_NM\@Z
     */
    MCAPI static void _addPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum class Rotation const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, struct OceanRuinConfiguration const &, bool, float);
    /**
     * @symbol  ?_allPositions\@OceanRuinPieces\@\@CA?AV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAVRandom\@\@HHH\@Z
     */
    MCAPI static std::vector<class BlockPos> _allPositions(class Random &, int, int, int);

private:
    /**
     * @symbol  ?BIG_RUIN_LOOT\@OceanRuinPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> BIG_RUIN_LOOT;
    /**
     * @symbol  ?RUIN_LOOT\@OceanRuinPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> RUIN_LOOT;
    /**
     * @symbol  ?STRUCTURE_BIG_RUIN1_BRICK\@OceanRuinPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_BIG_RUIN1_BRICK;
    /**
     * @symbol  ?STRUCTURE_BIG_RUIN8_BRICK\@OceanRuinPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_BIG_RUIN8_BRICK;
    /**
     * @symbol  ?STRUCTURE_RUIN_2_BRICK\@OceanRuinPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_RUIN_2_BRICK;
    /**
     * @symbol  ?STRUCTURE_RUIN_3_BRICK\@OceanRuinPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_RUIN_3_BRICK;
    /**
     * @symbol  ?bigRuinsBrick\@OceanRuinPieces\@\@0PAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> bigRuinsBrick[];
    /**
     * @symbol  ?bigRuinsCracked\@OceanRuinPieces\@\@0PAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> bigRuinsCracked[];
    /**
     * @symbol  ?bigRuinsMossy\@OceanRuinPieces\@\@0PAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> bigRuinsMossy[];
    /**
     * @symbol  ?bigWarmRuins\@OceanRuinPieces\@\@0PAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> bigWarmRuins[];
    /**
     * @symbol  ?mSettings\@OceanRuinPieces\@\@0VLegacyStructureSettings\@\@A
     */
    MCAPI static class LegacyStructureSettings mSettings;
    /**
     * @symbol  ?ruinsBrick\@OceanRuinPieces\@\@0PAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> ruinsBrick[];
    /**
     * @symbol  ?ruinsCracked\@OceanRuinPieces\@\@0PAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> ruinsCracked[];
    /**
     * @symbol  ?ruinsMossy\@OceanRuinPieces\@\@0PAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> ruinsMossy[];
    /**
     * @symbol  ?warmRuins\@OceanRuinPieces\@\@0PAV?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> warmRuins[];

};