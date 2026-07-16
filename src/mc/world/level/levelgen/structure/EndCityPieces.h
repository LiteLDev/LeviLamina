#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructureManager;
class StructurePiece;
// clang-format on

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
    enum class SectionType : ushort {
        SectionTower    = 0,
        SectionFatTower = 1,
        SectionBridge   = 2,
        SectionHouse    = 3,
    };

    class EndCityPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplateName;
        ::ll::TypedStorage<1, 1, ::Rotation>                                         mRotation;
        ::ll::TypedStorage<1, 1, bool>                                               mOverwrite;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mMobPositions;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::StructurePieceType getType() const /*override*/;

        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        virtual void _handleDataMarker(
            ::std::string const&,
            ::BlockPos const&,
            ::BlockSource&,
            ::Random&,
            ::BoundingBox const&
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&,
            ::Random&
        ) = 0;

        virtual ~SectionGenerator() = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class FatTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&,
            ::Random&
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&,
            ::Random&
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class TowerBridgeGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShipCreated;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&,
            ::Random&
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class TowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const&,
            int,
            ::EndCityPieces::EndCityPiece*,
            ::BlockPos const&,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&,
            ::Random&
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    using Generators = ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>>;

    using SectionGenerator = ::EndCityPieces::SectionGenerator;
};
