#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class HashedString;
class IClientInstance;
class ItemRegistryRef;
class ItemStack;
class ScreenContext;
class TaskGroup;
namespace OreUI { struct AtlasIndex; }
namespace cg { class ImageBuffer; }
namespace dragon { class ResolvedImageResource; }
namespace mce::framebuilder { struct RenderUIMeshDescription; }
// clang-format on

class UIThumbnailAtlasRenderer {
public:
    // UIThumbnailAtlasRenderer inner types declare
    // clang-format off
    struct AtlasInfo;
    // clang-format on

    // UIThumbnailAtlasRenderer inner types define
    struct AtlasInfo {};

    using SubstitutionMap = ::std::unordered_map<::HashedString, ::HashedString>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::UIThumbnailAtlasRenderer::AtlasInfo>                          mAtlasInfo;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>                mClient;
    ::ll::TypedStorage<8, 24, ::mce::ServerTexture>                                            mServerTexture;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenContext>>                               mScreenContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseActorRenderContext>>                      mRenderContext;
    ::ll::TypedStorage<4, 24, ::AABB>                                                          mArea;
    ::ll::TypedStorage<4, 64, ::Matrix>                                                        mWorldMatrix;
    ::ll::TypedStorage<8, 528, ::mce::Mesh>                                                    mMesh;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::framebuilder::RenderUIMeshDescription>> mMeshDescription;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                                    mTint;
    ::ll::TypedStorage<4, 20, ::std::optional<::glm::vec4>>                                    mClipRegion;
    ::ll::TypedStorage<8, 8, uint64>                                                           mMaxColumns;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::std::unordered_map<::HashedString, ::HashedString>>>
                                                                                             mSubstitutions;
    ::ll::TypedStorage<8, 24, ::mce::ClientResourcePointer<::dragon::ResolvedImageResource>> mTargetImage;
    // NOLINTEND

public:
    // prevent constructor by default
    UIThumbnailAtlasRenderer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIThumbnailAtlasRenderer(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>      client,
        ::UIThumbnailAtlasRenderer::AtlasInfo                 atlasInfo,
        ::std::unordered_map<::HashedString, ::HashedString>& substitutions
    );

    MCAPI void _addItemsToMesh(::OreUI::AtlasIndex& items, float scale);

    MCAPI void _capture(::mce::framebuilder::RenderUIMeshDescription&& description);

    MCAPI ::ItemStack _getItemStack(::std::string_view name, ::ItemRegistryRef const& registry) const;

    MCAPI void _initialize(bool isResume, ::UIThumbnailAtlasRenderer::AtlasInfo const& atlasInfo);

    MCAPI void _render(::ItemStack& item, float scale, float x, float y, ::ItemRenderChunkType renderType);

    MCAPI bool renderOffscreen(
        ::OreUI::AtlasIndex&                         items,
        ::TaskGroup&                                 taskGroup,
        ::std::function<void(::cg::ImageBuffer&&)>&& callback,
        bool                                         isResume,
        ::UIThumbnailAtlasRenderer::AtlasInfo const& atlasInfo
    );

    MCAPI ~UIThumbnailAtlasRenderer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& mRenderCounter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>      client,
        ::UIThumbnailAtlasRenderer::AtlasInfo                 atlasInfo,
        ::std::unordered_map<::HashedString, ::HashedString>& substitutions
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
