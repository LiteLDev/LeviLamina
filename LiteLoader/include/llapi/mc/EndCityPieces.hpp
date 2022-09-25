/**
 * @file  EndCityPieces.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndCityPieces.
 *
 */
class EndCityPieces {

#define AFTER_EXTRA
// Add Member There
public:
class EndCityPiece {
public:
    EndCityPiece() = delete;
    EndCityPiece(EndCityPiece const&) = delete;
    EndCityPiece(EndCityPiece const&&) = delete;
};
class SectionGenerator {
public:
    SectionGenerator() = delete;
    SectionGenerator(SectionGenerator const&) = delete;
    SectionGenerator(SectionGenerator const&&) = delete;
};
enum class SectionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDCITYPIECES
public:
    class EndCityPieces& operator=(class EndCityPieces const &) = delete;
    EndCityPieces(class EndCityPieces const &) = delete;
    EndCityPieces() = delete;
#endif

public:
    /**
     * @hash   1705715521
     * @symbol ?init@EndCityPieces@@SAXXZ
     */
    MCAPI static void init();
    /**
     * @hash   -1021338145
     * @symbol ?startHouseTower@EndCityPieces@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBVBlockPos@@W4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    MCAPI static void startHouseTower(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum Rotation, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);

//private:
    /**
     * @hash   2084365599
     * @symbol ?_addHelper@EndCityPieces@@CAPEAVEndCityPiece@1@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@V?$unique_ptr@VEndCityPiece@EndCityPieces@@U?$default_delete@VEndCityPiece@EndCityPieces@@@std@@@4@@Z
     */
    MCAPI static class EndCityPieces::EndCityPiece * _addHelper(std::vector<std::unique_ptr<class StructurePiece>> &, std::unique_ptr<class EndCityPieces::EndCityPiece>);
    /**
     * @hash   1563384217
     * @symbol ?_createPiece@EndCityPieces@@CA?AV?$unique_ptr@VEndCityPiece@EndCityPieces@@U?$default_delete@VEndCityPiece@EndCityPieces@@@std@@@std@@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@PEAVEndCityPiece@1@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Rotation@@_N@Z
     */
    MCAPI static std::unique_ptr<class EndCityPieces::EndCityPiece> _createPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class EndCityPieces::EndCityPiece *, class BlockPos const &, std::string const &, enum Rotation, bool);
    /**
     * @hash   1464266348
     * @symbol ?_recursiveChildren@EndCityPieces@@CA_NV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$vector@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@V?$allocator@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@@2@@std@@W4SectionType@1@HPEAVEndCityPiece@1@AEBVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@5@AEAVRandom@@@Z
     */
    MCAPI static bool _recursiveChildren(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const &, enum EndCityPieces::SectionType, int, class EndCityPieces::EndCityPiece *, class BlockPos const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);

private:
    /**
     * @hash   -1294188300
     * @symbol ?mInsertSettings@EndCityPieces@@0VLegacyStructureSettings@@A
     */
    MCAPI static class LegacyStructureSettings mInsertSettings;
    /**
     * @hash   1645808748
     * @symbol ?mOverwriteSettings@EndCityPieces@@0VLegacyStructureSettings@@A
     */
    MCAPI static class LegacyStructureSettings mOverwriteSettings;

};