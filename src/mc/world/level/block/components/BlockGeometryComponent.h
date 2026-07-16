#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/components/BlockGeometryDescription.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockGeometryComponent {
public:
    // BlockGeometryComponent inner types declare
    // clang-format off
    struct DefaultPlusEmbeddedRenderer;
    struct DefaultPlusExtraBlockRenderer;
    struct DefaultRenderer;
    // clang-format on

    // BlockGeometryComponent inner types define
    struct DefaultPlusEmbeddedRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 64, ::Matrix> mTransformationMatrix;
        // NOLINTEND
    };

    struct DefaultPlusExtraBlockRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 64, ::Matrix> mTransformationMatrix;
        // NOLINTEND
    };

    struct DefaultRenderer {};

    using Renderer = ::std::variant<
        ::BlockGeometryComponent::DefaultRenderer,
        ::BlockGeometryComponent::DefaultPlusEmbeddedRenderer,
        ::BlockGeometryComponent::DefaultPlusExtraBlockRenderer>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mGeometryName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>> mBlockSchematic;
    ::ll::TypedStorage<1, 1, bool>                                                      mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>                                                      mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsFullBlock;
    ::ll::TypedStorage<1, 1, bool>                                                      mIgnoreGeometryForIsSolid;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsFullBlockV1;
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mCullingLayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockGeometryDescription::SharedInitializationData>>
                                                                                mSharedInitializationData;
    ::ll::TypedStorage<8, 24, ::std::variant<bool, ::std::set<::HashedString>>> mUVsLocked;
    ::ll::TypedStorage<
        4,
        68,
        ::std::variant<
            ::BlockGeometryComponent::DefaultRenderer,
            ::BlockGeometryComponent::DefaultPlusEmbeddedRenderer,
            ::BlockGeometryComponent::DefaultPlusExtraBlockRenderer>>
                                                  mRenderer;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateX;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateY;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateZ;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BlockGeometryComponent(BlockGeometryComponent const&);
    BlockGeometryComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::BlockGeometryComponent& operator=(::BlockGeometryComponent&&);

    MCAPI ::BlockGeometryComponent& operator=(::BlockGeometryComponent const&);
#endif

    MCAPI ~BlockGeometryComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
