#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/components/BlockGeometryDescription.h"

// auto generated forward declare list
// clang-format off
struct BlockGeometryDescription;
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockGeometryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mGeometryName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>> mBlockSchematic;
    ::ll::TypedStorage<1, 1, bool>                                                      mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>                                                      mUseLegacyBlockLightAbsorption;
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mCullingLayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockGeometryDescription::SharedInitializationData>>
                                   mSharedInitializationData;
    ::ll::TypedStorage<1, 1, bool> mIsFullBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockGeometryComponent& operator=(BlockGeometryComponent const&);
    BlockGeometryComponent(BlockGeometryComponent const&);
    BlockGeometryComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockGeometryComponent(::BlockGeometryDescription const& blockGeometryDescription);

    MCNAPI ::BlockGeometryComponent& operator=(::BlockGeometryComponent&&);

    MCNAPI ~BlockGeometryComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockGeometryDescription const& blockGeometryDescription);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
