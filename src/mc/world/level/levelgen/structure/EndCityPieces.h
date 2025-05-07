#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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
    class FatTowerGenerator;
    class HouseTowerGenerator;
    class SectionGenerator;
    class TowerBridgeGenerator;
    class TowerGenerator;
    // clang-format on

    // EndCityPieces inner types define
    class EndCityPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkafe5f8;
        ::ll::UntypedStorage<8, 32> mUnkbe039b;
        ::ll::UntypedStorage<1, 1>  mUnkdf7620;
        ::ll::UntypedStorage<1, 1>  mUnk83b5a9;
        ::ll::UntypedStorage<8, 24> mUnk64d121;
        // NOLINTEND

    public:
        // prevent constructor by default
        EndCityPiece& operator=(EndCityPiece const&);
        EndCityPiece(EndCityPiece const&);
        EndCityPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual ::StructurePieceType getType() const /*override*/;

        // vIndex: 5
        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        // vIndex: 13
        virtual void _handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        ) /*override*/;

        // vIndex: 0
        virtual ~EndCityPiece() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI EndCityPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            bool                                              overwrite
        );

        MCNAPI void _loadAndSetup(::BlockPos const& position);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            bool                                              overwrite
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::StructurePieceType $getType() const;

        MCNAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

        MCNAPI void $_handleDataMarker(
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
        // vIndex: 0
        virtual bool
        generate(::Bedrock::NotNullNonOwnerPtr<::StructureManager>, ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const&, int, ::EndCityPieces::EndCityPiece*, ::BlockPos const&, ::std::vector<::std::unique_ptr<::StructurePiece>>&, ::Random&) = 0;

        // vIndex: 1
        virtual ~SectionGenerator() = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    enum class SectionType : ushort {
        SectionTower    = 0,
        SectionFatTower = 1,
        SectionBridge   = 2,
        SectionHouse    = 3,
    };

    class TowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;

        // vIndex: 1
        virtual ~TowerGenerator() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $generate(
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

    class FatTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;

        // vIndex: 1
        virtual ~FatTowerGenerator() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $generate(
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
        ::ll::UntypedStorage<1, 1> mUnkd2a24c;
        // NOLINTEND

    public:
        // prevent constructor by default
        TowerBridgeGenerator& operator=(TowerBridgeGenerator const&);
        TowerBridgeGenerator(TowerBridgeGenerator const&);
        TowerBridgeGenerator();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;

        // vIndex: 1
        virtual ~TowerBridgeGenerator() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $generate(
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

    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
            ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            ::EndCityPieces::EndCityPiece*                                             parent,
            ::BlockPos const&                                                          offset,
            ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
            ::Random&                                                                  random
        ) /*override*/;

        // vIndex: 1
        virtual ~HouseTowerGenerator() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $generate(
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

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::EndCityPieces::EndCityPiece* _addHelper(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::std::unique_ptr<::EndCityPieces::EndCityPiece>    piece
    );

    MCNAPI static ::std::unique_ptr<::EndCityPieces::EndCityPiece> _createPiece(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
        ::EndCityPieces::EndCityPiece*                    parent,
        ::BlockPos const&                                 offset,
        ::std::string const&                              templateName,
        ::Rotation                                        rotation,
        bool                                              overwrite
    );

    MCNAPI static bool _recursiveChildren(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                          structureManager,
        ::std::vector<::std::unique_ptr<::EndCityPieces::SectionGenerator>> const& generators,
        ::EndCityPieces::SectionType                                               type,
        int                                                                        newGenDepth,
        ::EndCityPieces::EndCityPiece*                                             parent,
        ::BlockPos const&                                                          offset,
        ::std::vector<::std::unique_ptr<::StructurePiece>>&                        pieces,
        ::Random&                                                                  random
    );

    MCNAPI static void startHouseTower(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::BlockPos const&                                   origin,
        ::Rotation                                          rotation,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );
    // NOLINTEND
};
