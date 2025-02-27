#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandArea;
class CompoundTag;
class StructureSettings;
// clang-format on

class StructureAnimationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkf8f03e;
    ::ll::UntypedStorage<8, 32>  mUnk69416d;
    ::ll::UntypedStorage<8, 104> mUnked6527;
    ::ll::UntypedStorage<4, 4>   mUnk74d064;
    ::ll::UntypedStorage<4, 4>   mUnk9e7870;
    ::ll::UntypedStorage<1, 1>   mUnkb1aa1a;
    ::ll::UntypedStorage<8, 8>   mUnkf3f764;
    ::ll::UntypedStorage<4, 12>  mUnkb908e5;
    ::ll::UntypedStorage<4, 4>   mUnk4ff306;
    ::ll::UntypedStorage<4, 4>   mUnk50f161;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&);
    StructureAnimationData(StructureAnimationData const&);
    StructureAnimationData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureAnimationData(::StructureAnimationData&&);

    MCAPI StructureAnimationData(
        ::std::unique_ptr<::CommandArea> cmdArea,
        uint64                           tickQueued,
        ::std::string const&             structureName,
        ::StructureSettings const&       structureSettings,
        uchar                            structureVersion,
        ::BlockPos const&                placementPos
    );

    MCAPI ::CompoundTag& serialize(::CompoundTag& tag);

    MCAPI void setCmdArea(::std::unique_ptr<::CommandArea> cmdArea);

    MCAPI ~StructureAnimationData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::StructureAnimationData load(::std::string const& key, ::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureAnimationData&&);

    MCAPI void* $ctor(
        ::std::unique_ptr<::CommandArea> cmdArea,
        uint64                           tickQueued,
        ::std::string const&             structureName,
        ::StructureSettings const&       structureSettings,
        uchar                            structureVersion,
        ::BlockPos const&                placementPos
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
