#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

class EndCityPieces {
public:
    // EndCityPieces inner types declare
    // clang-format off
    class EndCityPiece;
    class SectionGenerator;
    class FatTowerGenerator;
    class HouseTowerGenerator;
    class TowerBridgeGenerator;
    class TowerGenerator;
    // clang-format on

    // EndCityPieces inner types define
    enum class SectionType {};

    class EndCityPiece : public ::TemplateStructurePiece {
    public:
        // prevent constructor by default
        EndCityPiece& operator=(EndCityPiece const&);
        EndCityPiece(EndCityPiece const&);
        EndCityPiece();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1EndCityPiece@@@UEAA@XZ
        virtual ~EndCityPiece();

        // vIndex: 2, symbol: ?getType@EndCityPiece@EndCityPieces@@UEBA?AW4StructurePieceType@@XZ
        virtual ::StructurePieceType getType() const;

        // vIndex: 5, symbol:
        // ?postProcessMobsAt@EndCityPiece@EndCityPieces@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
        virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

        // vIndex: 13, symbol:
        // ?_handleDataMarker@EndCityPiece@EndCityPieces@@MEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
        virtual void
        _handleDataMarker(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&);

        // symbol:
        // ??0EndCityPiece@EndCityPieces@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@W4Rotation@@_N@Z
        MCAPI EndCityPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>,
            std::string,
            class BlockPos const&,
            ::Rotation,
            bool
        );

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?_loadAndSetup@EndCityPiece@EndCityPieces@@AEAAXAEBVBlockPos@@@Z
        MCAPI void _loadAndSetup(class BlockPos const&);

        // NOLINTEND
    };

    class SectionGenerator {
    public:
        // prevent constructor by default
        SectionGenerator& operator=(SectionGenerator const&);
        SectionGenerator(SectionGenerator const&);
        SectionGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol:
        // ?generate@TowerBridgeGenerator@EndCityPieces@@UEAA_NV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$vector@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@V?$allocator@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@@2@@std@@HPEAVEndCityPiece@2@AEBVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@6@AEAVRandom@@@Z
        virtual bool
        generate(Bedrock::NotNullNonOwnerPtr<class StructureManager>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&) = 0;

        // vIndex: 1, symbol: ??1SectionGenerator@@@UEAA@XZ
        virtual ~SectionGenerator();

        // NOLINTEND
    };

    class FatTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // prevent constructor by default
        FatTowerGenerator& operator=(FatTowerGenerator const&);
        FatTowerGenerator(FatTowerGenerator const&);
        FatTowerGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol:
        // ?generate@FatTowerGenerator@EndCityPieces@@UEAA_NV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$vector@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@V?$allocator@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@@2@@std@@HPEAVEndCityPiece@2@AEBVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@6@AEAVRandom@@@Z
        virtual bool
        generate(Bedrock::NotNullNonOwnerPtr<class StructureManager>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

        // vIndex: 1, symbol: ??1FatTowerGenerator@@@UEAA@XZ
        virtual ~FatTowerGenerator();

        // NOLINTEND
    };

    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // prevent constructor by default
        HouseTowerGenerator& operator=(HouseTowerGenerator const&);
        HouseTowerGenerator(HouseTowerGenerator const&);
        HouseTowerGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol:
        // ?generate@HouseTowerGenerator@EndCityPieces@@UEAA_NV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$vector@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@V?$allocator@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@@2@@std@@HPEAVEndCityPiece@2@AEBVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@6@AEAVRandom@@@Z
        virtual bool
        generate(Bedrock::NotNullNonOwnerPtr<class StructureManager>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

        // vIndex: 1, symbol: ??1HouseTowerGenerator@@@UEAA@XZ
        virtual ~HouseTowerGenerator();

        // NOLINTEND
    };

    class TowerBridgeGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // prevent constructor by default
        TowerBridgeGenerator& operator=(TowerBridgeGenerator const&);
        TowerBridgeGenerator(TowerBridgeGenerator const&);
        TowerBridgeGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol:
        // ?generate@TowerBridgeGenerator@EndCityPieces@@UEAA_NV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$vector@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@V?$allocator@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@@2@@std@@HPEAVEndCityPiece@2@AEBVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@6@AEAVRandom@@@Z
        virtual bool
        generate(Bedrock::NotNullNonOwnerPtr<class StructureManager>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

        // vIndex: 1, symbol: ??1TowerBridgeGenerator@@@UEAA@XZ
        virtual ~TowerBridgeGenerator();

        // NOLINTEND
    };

    class TowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // prevent constructor by default
        TowerGenerator& operator=(TowerGenerator const&);
        TowerGenerator(TowerGenerator const&);
        TowerGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol:
        // ?generate@TowerGenerator@EndCityPieces@@UEAA_NV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$vector@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@V?$allocator@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@@2@@std@@HPEAVEndCityPiece@2@AEBVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@6@AEAVRandom@@@Z
        virtual bool
        generate(Bedrock::NotNullNonOwnerPtr<class StructureManager>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

        // vIndex: 1, symbol: ??1TowerGenerator@@@UEAA@XZ
        virtual ~TowerGenerator();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EndCityPieces& operator=(EndCityPieces const&);
    EndCityPieces(EndCityPieces const&);
    EndCityPieces();

public:
    // NOLINTBEGIN
    // symbol:
    // ?startHouseTower@EndCityPieces@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBVBlockPos@@W4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    MCAPI static void
    startHouseTower(Bedrock::NotNullNonOwnerPtr<class StructureManager>, class BlockPos const&, ::Rotation, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addHelper@EndCityPieces@@CAPEAVEndCityPiece@1@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@V?$unique_ptr@VEndCityPiece@EndCityPieces@@U?$default_delete@VEndCityPiece@EndCityPieces@@@std@@@4@@Z
    MCAPI static class EndCityPieces::EndCityPiece*
    _addHelper(std::vector<std::unique_ptr<class StructurePiece>>&, std::unique_ptr<class EndCityPieces::EndCityPiece>);

    // symbol:
    // ?_createPiece@EndCityPieces@@CA?AV?$unique_ptr@VEndCityPiece@EndCityPieces@@U?$default_delete@VEndCityPiece@EndCityPieces@@@std@@@std@@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@PEAVEndCityPiece@1@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Rotation@@_N@Z
    MCAPI static std::unique_ptr<class EndCityPieces::EndCityPiece> _createPiece(
        Bedrock::NotNullNonOwnerPtr<class StructureManager>,
        class EndCityPieces::EndCityPiece*,
        class BlockPos const&,
        std::string const&,
        ::Rotation,
        bool
    );

    // symbol:
    // ?_recursiveChildren@EndCityPieces@@CA_NV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$vector@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@V?$allocator@V?$unique_ptr@VSectionGenerator@EndCityPieces@@U?$default_delete@VSectionGenerator@EndCityPieces@@@std@@@std@@@2@@std@@W4SectionType@1@HPEAVEndCityPiece@1@AEBVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@5@AEAVRandom@@@Z
    MCAPI static bool _recursiveChildren(Bedrock::NotNullNonOwnerPtr<class StructureManager>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, ::EndCityPieces::SectionType, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mInsertSettings@EndCityPieces@@0VLegacyStructureSettings@@A
    MCAPI static class LegacyStructureSettings mInsertSettings;

    // symbol: ?mOverwriteSettings@EndCityPieces@@0VLegacyStructureSettings@@A
    MCAPI static class LegacyStructureSettings mOverwriteSettings;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mInsertSettings() { return mInsertSettings; }

    static auto& $mOverwriteSettings() { return mOverwriteSettings; }

    // NOLINTEND
};
