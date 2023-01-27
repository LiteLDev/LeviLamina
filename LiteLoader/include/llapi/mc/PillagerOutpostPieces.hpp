/**
 * @file  PillagerOutpostPieces.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

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
     * @hash   136235498
     * @symbol  ?addPieces\@PillagerOutpostPieces\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void addPieces(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum class Rotation const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class Dimension &);

//private:
    /**
     * @hash   282305415
     * @symbol  ?_addPiece\@PillagerOutpostPieces\@\@CAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void _addPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum class Rotation const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class Dimension &);
    /**
     * @hash   -173630335
     * @symbol  ?_addScatteredPieces\@PillagerOutpostPieces\@\@CAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVRandom\@\@AEBW4Rotation\@\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void _addScatteredPieces(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class Random &, enum class Rotation const &, class BlockPos const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Dimension &);

private:
    /**
     * @hash   1377788778
     * @symbol  ?MSC_FEATURES\@PillagerOutpostPieces\@\@0V?$array\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@$06\@std\@\@A
     */
    MCAPI static class std::array<class gsl::basic_string_span<char const, -1>, 7> MSC_FEATURES;
    /**
     * @hash   -859363153
     * @symbol  ?PILLAGER_LOOT\@PillagerOutpostPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> PILLAGER_LOOT;
    /**
     * @hash   -722476166
     * @symbol  ?STRUCTURE_WATCHTOWER\@PillagerOutpostPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_WATCHTOWER;
    /**
     * @hash   -982372942
     * @symbol  ?STRUCTURE_WATCHTOWER_OVERGROWN\@PillagerOutpostPieces\@\@0V?$basic_string_span\@$$CBD$0?0\@gsl\@\@A
     */
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_WATCHTOWER_OVERGROWN;

};