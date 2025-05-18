#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/IRequestAction.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ServerLevel;
class StructureAnimationData;
// clang-format on

class StructureAnimationAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StructureAnimationData>> mStructureAnimationData;
    ::ll::TypedStorage<8, 104, ::StructureSettings>                       mStructureSettings;
    ::ll::TypedStorage<4, 4, ::DimensionType>                             mDimensionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mLoadPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                              mFullName;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureAnimationAction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;

    // vIndex: 3
    virtual bool operator==(::IRequestAction const& action) const /*override*/;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag) /*override*/;

    // vIndex: 0
    virtual ~StructureAnimationAction() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureAnimationAction(
        ::std::unique_ptr<::StructureAnimationData> structureAnimationData,
        ::DimensionType                             dimensionType
    );

    MCNAPI StructureAnimationAction(
        ::StructureSettings const& structureSettings,
        ::DimensionType            dimensionType,
        ::BlockPos const&          loadPosition,
        ::std::string const&       fullName
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::StructureAnimationAction>
    load(::CompoundTag const& tag, ::std::string const& dimensionPrefix);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::unique_ptr<::StructureAnimationData> structureAnimationData, ::DimensionType dimensionType);

    MCNAPI void* $ctor(
        ::StructureSettings const& structureSettings,
        ::DimensionType            dimensionType,
        ::BlockPos const&          loadPosition,
        ::std::string const&       fullName
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::ServerLevel& level, ::Dimension& dimension);

    MCNAPI void $serialize(::CompoundTag& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
