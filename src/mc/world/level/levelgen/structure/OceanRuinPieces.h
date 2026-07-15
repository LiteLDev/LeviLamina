#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/biome/OceanTempCategory.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructureManager;
class StructurePoolBlockRule;
// clang-format on

class OceanRuinPieces {
public:
    // OceanRuinPieces inner types declare
    // clang-format off
    class OceanRuinPiece;
    // clang-format on

    // OceanRuinPieces inner types define
    class OceanRuinPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplateName;
        ::ll::TypedStorage<4, 4, ::OceanTempCategory>                                mBiomeType;
        ::ll::TypedStorage<4, 4, float>                                              mIntegrity;
        ::ll::TypedStorage<1, 1, bool>                                               mIsLarge;
        ::ll::TypedStorage<1, 1, ::Rotation>                                         mRotation;
        ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPosition;
        ::ll::TypedStorage<
            8,
            8,
            ::std::unique_ptr<::std::vector<
                ::std::unique_ptr<::StructurePoolBlockRule, ::std::default_delete<::StructurePoolBlockRule>>>>>
            mPlaceArchySuspiciousBlocks;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::StructurePieceType getType() const /*override*/;

        virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

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
};
