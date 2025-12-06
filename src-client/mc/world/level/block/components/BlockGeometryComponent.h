#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/components/BlockGeometryDescription.h"

// auto generated forward declare list
// clang-format off
struct BlockGeometryDescription;
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockGeometryComponent {
public:
    // BlockGeometryComponent inner types declare
    // clang-format off
    struct DefaultPlusEmbeddedRenderer;
    struct DefaultRenderer;
    // clang-format on

    // BlockGeometryComponent inner types define
    struct DefaultRenderer {};

    struct DefaultPlusEmbeddedRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 64, ::Matrix> mTransformationMatrix;
        // NOLINTEND
    };

    using Renderer = ::std::
        variant<::BlockGeometryComponent::DefaultRenderer, ::BlockGeometryComponent::DefaultPlusEmbeddedRenderer>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mGeometryName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>> mBlockSchematic;
    ::ll::TypedStorage<1, 1, bool>                                                      mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>                                                      mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsFullBlock;
    ::ll::TypedStorage<1, 1, bool>                                                      mIgnoreGeometryForIsSolid;
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mCullingLayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockGeometryDescription::SharedInitializationData>>
                                                                                mSharedInitializationData;
    ::ll::TypedStorage<8, 24, ::std::variant<bool, ::std::set<::HashedString>>> mUVsLocked;
    ::ll::TypedStorage<
        4,
        68,
        ::std::
            variant<::BlockGeometryComponent::DefaultRenderer, ::BlockGeometryComponent::DefaultPlusEmbeddedRenderer>>
        mRenderer;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockGeometryComponent(BlockGeometryComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockGeometryComponent();

    MCAPI explicit BlockGeometryComponent(::BlockGeometryDescription const& blockGeometryDescription);

    MCAPI ::BlockGeometryComponent& operator=(::BlockGeometryComponent const&);

    MCAPI ::BlockGeometryComponent& operator=(::BlockGeometryComponent&&);

    MCAPI ~BlockGeometryComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockGeometryDescription const& blockGeometryDescription);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
