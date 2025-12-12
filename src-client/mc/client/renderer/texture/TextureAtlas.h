#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/MipMapSupport.h"

// auto generated forward declare list
// clang-format off
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
namespace mce { class TextureGroup; }
namespace mce::framebuilder { struct PBRTextureDataManager; }
// clang-format on

class TextureAtlas : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkbbafca;
    ::ll::UntypedStorage<8, 240> mUnk8f9129;
    ::ll::UntypedStorage<4, 4>   mUnk3b8093;
    ::ll::UntypedStorage<8, 16>  mUnka9f112;
    ::ll::UntypedStorage<8, 64>  mUnkc7d641;
    ::ll::UntypedStorage<8, 24>  mUnk2c5284;
    ::ll::UntypedStorage<8, 24>  mUnk280263;
    ::ll::UntypedStorage<8, 88>  mUnk66caf1;
    ::ll::UntypedStorage<8, 24>  mUnk369842;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlas& operator=(TextureAtlas const&);
    TextureAtlas(TextureAtlas const&);
    TextureAtlas();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureAtlas() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureAtlas(
        ::ResourceLocation const&                                              metaFile,
        ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> pbrTextureDataManager
    );

    MCNAPI void _addElementCollection(
        ::ResourcePackManager&                 resourcePackManager,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Json::Value const&                   texture,
        ::ParsedAtlasNode&                     newNode,
        int                                    atIndex,
        float                                  mipFadeAmount,
        ::mce::Color const&                    mipFadeColor,
        bool                                   isAdditive
    );

    MCNAPI ::TextureAtlasTile* _addTile(
        ::std::vector<::TextureAtlasTile>& textureAtlasTiles,
        bool                               quad,
        float                              fadePerMipAmount,
        ::ParsedAtlasNodeElement&          element
    );

    MCNAPI ::TextureAtlasResourceCallbacks _createAtlas(
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

    MCNAPI ::std::vector<::TextureAtlasTile> _generateAtlasTileList();

    MCNAPI void _loadAtlasNodes(
        ::ResourcePackManager&                 resourcePackManager,
        ::Json::Value const&                   root,
        ::std::vector<::ParsedAtlasNode>&      atlasNodes,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );

    MCNAPI void _loadRuntimeImageAtlasNodes(::std::vector<::ParsedAtlasNode>& atlasNodes);

    MCNAPI bool _readNode(
        ::ResourcePackManager&                 resourcePackManager,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Json::Value const&                   jsonNode,
        ::ParsedAtlasNode&                     node,
        bool                                   isRefreshing
    );

    MCNAPI ::TextureAtlasResourceCallbacks createAtlasFromJson(
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

    MCNAPI ::TextureAtlasResourceCallbacks createAtlasFromList(
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

    MCNAPI ::ResourceLocation const& getPathFromName(::std::string const& name) const;

    MCNAPI ::TextureAtlasResourceCallbacks loadMetaFile(
        ::ResourcePackManager&                             resourcePackManager,
        ::std::function<void(::TextureAtlasStatus const&)> statusCallback,
        ::std::function<void()>                            imageAtlasFinishedCallback,
        ::std::shared_ptr<::mce::TextureGroup>             textureGroup,
        ::cg::MipMapSupport                                mipMapSupport,
        ::std::shared_ptr<::cg::ImageBuffer>               outCopyOfFinalImage,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
            outCopyOfSourceImages
    );

    MCNAPI ::TextureAtlasResourceCallbacks recreateAtlas(
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
    MCNAPI void* $ctor(
        ::ResourceLocation const&                                              metaFile,
        ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> pbrTextureDataManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
