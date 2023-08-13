#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

class EndCityPieces {
public:
    // EndCityPieces inner types declare
    // clang-format off
    class EndCityPiece;
    class FatTowerGenerator;
    class HouseTowerGenerator;
    class SectionGenerator;
    class TowerBridgeGenerator;
    class TowerGenerator;
    // clang-format on

    // EndCityPieces inner types define
    enum class SectionType {};

    class SectionGenerator {

    public:
        // prevent constructor by default
        SectionGenerator& operator=(SectionGenerator const&) = delete;
        SectionGenerator(SectionGenerator const&)            = delete;
        SectionGenerator()                                   = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol
         * ?generate\@FatTowerGenerator\@EndCityPieces\@\@UEAA_NV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$vector\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@HPEAVEndCityPiece\@2\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@6\@AEAVRandom\@\@\@Z
         */
        virtual bool generate(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&) = 0;
        // NOLINTEND
    };

    class EndCityPiece : public ::TemplateStructurePiece {

    public:
        // prevent constructor by default
        EndCityPiece& operator=(EndCityPiece const&) = delete;
        EndCityPiece(EndCityPiece const&)            = delete;
        EndCityPiece()                               = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 2
         * @symbol ?getType\@EndCityPiece\@EndCityPieces\@\@UEBA?AW4StructurePieceType\@\@XZ
         */
        virtual enum class StructurePieceType getType() const;
        /**
         * @vftbl 5
         * @symbol
         * ?postProcessMobsAt\@EndCityPiece\@EndCityPieces\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
         */
        virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
        /**
         * @vftbl 13
         * @symbol
         * ?_handleDataMarker\@EndCityPiece\@EndCityPieces\@\@MEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
         */
        virtual void
        _handleDataMarker(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&);
        /**
         * @symbol
         * ??0EndCityPiece\@EndCityPieces\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@_N\@Z
         */
        MCAPI EndCityPiece(
            class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>,
            std::string,
            class BlockPos const&,
            enum class Rotation,
            bool
        );
        // NOLINTEND

        // private:
        // NOLINTBEGIN
        /**
         * @symbol ?_loadAndSetup\@EndCityPiece\@EndCityPieces\@\@AEAAXAEBVBlockPos\@\@\@Z
         */
        MCAPI void _loadAndSetup(class BlockPos const&);
        // NOLINTEND
    };

    class FatTowerGenerator : public ::EndCityPieces::SectionGenerator {

    public:
        // prevent constructor by default
        FatTowerGenerator& operator=(FatTowerGenerator const&) = delete;
        FatTowerGenerator(FatTowerGenerator const&)            = delete;
        FatTowerGenerator()                                    = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol
         * ?generate\@FatTowerGenerator\@EndCityPieces\@\@UEAA_NV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$vector\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@HPEAVEndCityPiece\@2\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@6\@AEAVRandom\@\@\@Z
         */
        virtual bool generate(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
        // NOLINTEND
    };

    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {

    public:
        // prevent constructor by default
        HouseTowerGenerator& operator=(HouseTowerGenerator const&) = delete;
        HouseTowerGenerator(HouseTowerGenerator const&)            = delete;
        HouseTowerGenerator()                                      = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol
         * ?generate\@HouseTowerGenerator\@EndCityPieces\@\@UEAA_NV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$vector\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@HPEAVEndCityPiece\@2\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@6\@AEAVRandom\@\@\@Z
         */
        virtual bool generate(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
        // NOLINTEND
    };

    class TowerBridgeGenerator : public ::EndCityPieces::SectionGenerator {

    public:
        // prevent constructor by default
        TowerBridgeGenerator& operator=(TowerBridgeGenerator const&) = delete;
        TowerBridgeGenerator(TowerBridgeGenerator const&)            = delete;
        TowerBridgeGenerator()                                       = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol
         * ?generate\@TowerBridgeGenerator\@EndCityPieces\@\@UEAA_NV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$vector\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@HPEAVEndCityPiece\@2\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@6\@AEAVRandom\@\@\@Z
         */
        virtual bool generate(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
        // NOLINTEND
    };

    class TowerGenerator : public ::EndCityPieces::SectionGenerator {

    public:
        // prevent constructor by default
        TowerGenerator& operator=(TowerGenerator const&) = delete;
        TowerGenerator(TowerGenerator const&)            = delete;
        TowerGenerator()                                 = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol
         * ?generate\@TowerGenerator\@EndCityPieces\@\@UEAA_NV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$vector\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@HPEAVEndCityPiece\@2\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@6\@AEAVRandom\@\@\@Z
         */
        virtual bool generate(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    EndCityPieces& operator=(EndCityPieces const&) = delete;
    EndCityPieces(EndCityPieces const&)            = delete;
    EndCityPieces()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?startHouseTower\@EndCityPieces\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@W4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static void
    startHouseTower(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const&, enum class Rotation, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addHelper\@EndCityPieces\@\@CAPEAVEndCityPiece\@1\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$unique_ptr\@VEndCityPiece\@EndCityPieces\@\@U?$default_delete\@VEndCityPiece\@EndCityPieces\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI static class EndCityPieces::EndCityPiece*
    _addHelper(std::vector<std::unique_ptr<class StructurePiece>>&, std::unique_ptr<class EndCityPieces::EndCityPiece>);
    /**
     * @symbol
     * ?_createPiece\@EndCityPieces\@\@CA?AV?$unique_ptr\@VEndCityPiece\@EndCityPieces\@\@U?$default_delete\@VEndCityPiece\@EndCityPieces\@\@\@std\@\@\@std\@\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@PEAVEndCityPiece\@1\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4Rotation\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class EndCityPieces::EndCityPiece> _createPiece(
        class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>,
        class EndCityPieces::EndCityPiece*,
        class BlockPos const&,
        std::string const&,
        enum class Rotation,
        bool
    );
    /**
     * @symbol
     * ?_recursiveChildren\@EndCityPieces\@\@CA_NV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$vector\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VSectionGenerator\@EndCityPieces\@\@U?$default_delete\@VSectionGenerator\@EndCityPieces\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@W4SectionType\@1\@HPEAVEndCityPiece\@1\@AEBVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@5\@AEAVRandom\@\@\@Z
     */
    MCAPI static bool
    _recursiveChildren(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const&, enum class EndCityPieces::SectionType, int, class EndCityPieces::EndCityPiece*, class BlockPos const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mInsertSettings\@EndCityPieces\@\@0VLegacyStructureSettings\@\@A
     */
    MCAPI static class LegacyStructureSettings mInsertSettings;
    /**
     * @symbol ?mOverwriteSettings\@EndCityPieces\@\@0VLegacyStructureSettings\@\@A
     */
    MCAPI static class LegacyStructureSettings mOverwriteSettings;
    // NOLINTEND
};
