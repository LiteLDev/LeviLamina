#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class IStructureConstraint;
class StructureTemplate;
// clang-format on

class StructureTemplateFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StructureTemplate*>                                      mStructure;
    ::ll::TypedStorage<4, 4, int>                                                       mAdjustmentRadius;
    ::ll::TypedStorage<1, 1, ::Direction::Type>                                         mFaceDirection;
    ::ll::TypedStorage<1, 1, bool>                                                      mRotateAroundCenter;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IStructureConstraint>>> mConstraints;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureTemplateFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _findStructurePos(
        ::IBlockWorldGenAPI const& target,
        ::BlockPos const&          pos,
        ::Rotation const&          structureRot,
        ::BlockPos&                structurePos
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
