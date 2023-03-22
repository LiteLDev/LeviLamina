/**
 * @file  PillagerOutpostPieces.hpp
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
 * @brief MC class PillagerOutpostPieces.
 *
 */
class PillagerOutpostPieces {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGEROUTPOSTPIECES
public:
    class PillagerOutpostPieces& operator=(class PillagerOutpostPieces const &) = delete;
    PillagerOutpostPieces(class PillagerOutpostPieces const &) = delete;
    PillagerOutpostPieces() = delete;
#endif

public:
    /**
     * @symbol ?addPieces\@PillagerOutpostPieces\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void addPieces(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum class Rotation const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class Dimension &);

//private:
    /**
     * @symbol ?_addPiece\@PillagerOutpostPieces\@\@CAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void _addPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum class Rotation const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class Dimension &);
    /**
     * @symbol ?_addScatteredPieces\@PillagerOutpostPieces\@\@CAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVRandom\@\@AEBW4Rotation\@\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void _addScatteredPieces(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class Random &, enum class Rotation const &, class BlockPos const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Dimension &);

private:
    /**
     * @symbol ?MSC_FEATURES\@PillagerOutpostPieces\@\@0V?$array\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@$06\@std\@\@A
     */
    MCAPI static class std::array<class std::basic_string_view<char, struct std::char_traits<char>>, 7> MSC_FEATURES;
    /**
     * @symbol ?PILLAGER_LOOT\@PillagerOutpostPieces\@\@0V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@A
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> PILLAGER_LOOT;
    /**
     * @symbol ?STRUCTURE_WATCHTOWER\@PillagerOutpostPieces\@\@0V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@A
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> STRUCTURE_WATCHTOWER;
    /**
     * @symbol ?STRUCTURE_WATCHTOWER_OVERGROWN\@PillagerOutpostPieces\@\@0V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@A
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> STRUCTURE_WATCHTOWER_OVERGROWN;

};
