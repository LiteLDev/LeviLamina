#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class BoundingBox;
// clang-format on

class LegacyStructureSettings {
public:
    // LegacyStructureSettings inner types declare
    // clang-format off
    struct IndexedName;
    // clang-format on

    // LegacyStructureSettings inner types define
    struct IndexedName {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkeeba32;
        ::ll::UntypedStorage<8, 8> mUnk45196e;
        // NOLINTEND

    public:
        // prevent constructor by default
        IndexedName& operator=(IndexedName const&);
        IndexedName(IndexedName const&);
        IndexedName();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk265eb0;
    ::ll::UntypedStorage<4, 4>  mUnk1f3cf6;
    ::ll::UntypedStorage<1, 1>  mUnke5f089;
    ::ll::UntypedStorage<1, 1>  mUnk79eeb4;
    ::ll::UntypedStorage<1, 1>  mUnkdee70d;
    ::ll::UntypedStorage<1, 1>  mUnka48445;
    ::ll::UntypedStorage<1, 1>  mUnkc31033;
    ::ll::UntypedStorage<1, 1>  mUnkf14e6f;
    ::ll::UntypedStorage<8, 8>  mUnkb935be;
    ::ll::UntypedStorage<8, 8>  mUnk9fad61;
    ::ll::UntypedStorage<4, 12> mUnk18f5a6;
    ::ll::UntypedStorage<4, 24> mUnkccb6f1;
    ::ll::UntypedStorage<8, 64> mUnkf3b1b1;
    ::ll::UntypedStorage<8, 8>  mUnk3e9513;
    ::ll::UntypedStorage<8, 8>  mUnk844e3f;
    ::ll::UntypedStorage<8, 24> mUnk756244;
    ::ll::UntypedStorage<8, 16> mUnk816479;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyStructureSettings(::LegacyStructureSettings const&);

    MCAPI LegacyStructureSettings(
        ::Mirror             mirror,
        ::Rotation           rotation,
        ::Block const*       ignoreBlock,
        ::BoundingBox const& boundingBox
    );

    MCAPI ::Block const& getSwappedBlock(::BlockPalette const& oldBlock, ::Block const& palette) const;

    MCAPI ::LegacyStructureSettings& operator=(::LegacyStructureSettings const&);

    MCAPI void updateBoundingBoxFromChunkPos();

    MCAPI ~LegacyStructureSettings();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& INTEGRITY_MAX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyStructureSettings const&);

    MCAPI void*
    $ctor(::Mirror mirror, ::Rotation rotation, ::Block const* ignoreBlock, ::BoundingBox const& boundingBox);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
