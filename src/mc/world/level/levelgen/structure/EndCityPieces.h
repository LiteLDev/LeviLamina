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
        // prevent constructor by default
        EndCityPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::StructurePieceType getType() const /*override*/;

        virtual void postProcessMobsAt(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const&) /*override*/;

        virtual void _handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        ) /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI EndCityPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            bool                                              overwrite
        );

        MCAPI void _loadAndSetup(::BlockPos const& position);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            bool                                              overwrite
        );
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::StructurePieceType $getType() const;

        MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const&);

        MCAPI void $_handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        );


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
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
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          pieces,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        random,
            ::Random&
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          pieces,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        random,
            ::Random&
        );


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        );


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          pieces,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        random,
            ::Random&
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          pieces,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        random,
            ::Random&
        );


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class TowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          pieces,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        random,
            ::Random&
        ) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          pieces,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        random,
            ::Random&
        );


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    using Generators = ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>>;

    using SectionGenerator = ::EndCityPieces::SectionGenerator;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::EndCityPieces::EndCityPiece> _createPiece(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
        ::EndCityPieces::EndCityPiece*                    parent,
        ::BlockPos const&                                 offset,
        ::std::string const&                              templateName,
        ::Rotation                                        rotation,
        bool                                              overwrite
    );

    MCAPI static bool _recursiveChildren(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
        ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
        ::EndCityPieces::SectionType                                               type,
        int                                                                        newGenDepth,
        ::EndCityPieces::EndCityPiece*                                             parent,
        ::BlockPos const&                                                          offset,
        ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
        ::Random&                                                                  random
    );

    MCAPI static void startHouseTower(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::BlockPos const&                                   origin,
        ::Rotation                                          rotation,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );
    // NOLINTEND
};
