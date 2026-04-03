#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ImageResourceManager.h"
#include "mc/client/renderer/texture/AtlasParameters.h"
#include "mc/client/renderer/texture/ParsedAtlasData.h"
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/TextureAtlas.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class ResourcePackManager;
class TextureAtlasTile;
struct ParsedAtlasNode;
struct ParsedAtlasNodeElement;
struct RuntimeImageGeneratorInfo;
struct TextureAtlasResourceCallbacks;
namespace Json { class Value; }
namespace cg { class ImageBuffer; }
namespace cg { class TextureSetImageContainer; }
namespace mce { class Color; }
namespace mce { class FileWatcherHandle; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

class TextureAtlas : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TextureAtlas inner types define
    using SourceImageBuffers = ::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>;

    using TextureAtlasTiles = ::std::vector<::TextureAtlasTile>;

    using StatusCallback = ::std::function<void(::TextureAtlasStatus const&)>;

    using ImageAtlasFinishedCallback = ::std::function<void()> const;

    using RuntimeImageGenerators = ::std::vector<::std::weak_ptr<::RuntimeImageGeneratorInfo>>;

    using SourceImagesSignature = void(::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer> const&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AtlasItemManager>>                       mAtlasItemManager;
    ::ll::TypedStorage<8, 240, ::ParsedAtlasData>                                          mParsedAtlasData;
    ::ll::TypedStorage<4, 4, ::AtlasParameters>                                            mAtlasParameters;
    ::ll::TypedStorage<8, 16, ::std::set<::ResourceLocation>>                              mResources;
    ::ll::TypedStorage<8, 64, ::ImageResourceManager>                                      mResourceManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::FileWatcherHandle>>                     mFileWatcherHandle;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::RuntimeImageGeneratorInfo>>> mRuntimeImageGenerators;
    ::ll::TypedStorage<8, 88, ::cg::TextureAtlas>                                          mTextureAtlas;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager>>
        mPBRTextureDataManager;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlas();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureAtlas() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureAtlas(
        ::ResourceLocation const&                                              metaFile,
        ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> pbrTextureDataManager
    );

    MCAPI void _addElementCollection(
        ::ResourcePackManager&                 resourcePackManager,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Json::Value const&                   texture,
        ::ParsedAtlasNode&                     newNode,
        int                                    atIndex,
        float                                  mipFadeAmount,
        ::mce::Color const&                    mipFadeColor,
        bool                                   isAdditive
    );

    MCAPI ::TextureAtlasTile* _addTile(
        ::std::vector<::TextureAtlasTile>& textureAtlasTiles,
        bool                               quad,
        float                              fadePerMipAmount,
        ::ParsedAtlasNodeElement&          element
    );

    MCAPI ::TextureAtlasResourceCallbacks _createAtlas(
        ::Json::Value const&                               root,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport                                mipMapSupport,
        ::ResourcePackManager&                             resourcePackManager,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCAPI ::std::vector<::TextureAtlasTile> _generateAtlasTileList();

    MCAPI void _loadAtlasNodes(
        ::ResourcePackManager&                 resourcePackManager,
        ::Json::Value const&                   root,
        ::std::vector<::ParsedAtlasNode>&      atlasNodes,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );

    MCAPI void _loadRuntimeImageAtlasNodes(::std::vector<::ParsedAtlasNode>& atlasNodes);

    MCAPI bool _readNode(
        ::ResourcePackManager&                 resourcePackManager,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Json::Value const&                   jsonNode,
        ::ParsedAtlasNode&                     node,
        bool                                   isRefreshing
    );

    MCAPI ::TextureAtlasResourceCallbacks createAtlasFromJson(
        ::Json::Value const&                               json,
        ::ResourcePackManager&                             resourcePackManager,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCAPI ::TextureAtlasResourceCallbacks createAtlasFromList(
        ::std::string const&                               atlasName,
        ::std::vector<::std::string> const&                textures,
        ::ResourcePackManager&                             resourcePackManager,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCAPI ::ResourceLocation const& getPathFromName(::std::string const& name) const;

    MCAPI ::TextureAtlasResourceCallbacks loadMetaFile(
        ::ResourcePackManager&                             resourcePackManager,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCAPI ::TextureAtlasResourceCallbacks recreateAtlas(
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ResourceLocation const&                                              metaFile,
        ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> pbrTextureDataManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
