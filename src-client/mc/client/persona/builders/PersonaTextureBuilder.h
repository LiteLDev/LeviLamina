#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/builders/TextureTint.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IPersonaImageProvider;
class IPersonaPieceProvider;
class Pack;
class ResourceLoadManager;
class ResourcePackManager;
class TaskGroup;
struct PersonaCharacter;
struct PersonaTextureResources;
struct TextureHotReloader;
namespace Json { class Value; }
namespace mce { class TextureGroup; }
namespace persona { struct TextureTint; }
// clang-format on

class PersonaTextureBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IPersonaImageProvider&>                                   mImageProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>>      mResourceLoadManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>>      mResourcePackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::TextureHotReloader>>          mTextureHotReloader;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaTextureBuilder& operator=(PersonaTextureBuilder const&);
    PersonaTextureBuilder(PersonaTextureBuilder const&);
    PersonaTextureBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Threading::Async<bool> parseTextures(
        ::std::string const&                      characterName,
        ::TaskGroup&                              taskGroup,
        ::IPersonaPieceProvider&                  pieceProvider,
        ::std::unordered_map<::std::string, uint> sampledTexelWidths
    );

    MCAPI void registerTexturesForHotReload(
        ::PersonaCharacter&                        character,
        ::std::function<void(::PersonaCharacter&)> onTextureReloaded
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addClothingMap(
        ::PersonaTextureResources&      textureResources,
        ::std::shared_ptr<::Pack const> clothingSourcePack,
        ::std::string const&            mapId,
        ::std::string                   clothingMapPath
    );

    MCAPI static void _addPieceTextureToMap(
        ::PersonaTextureResources& textureResources,
        ::std::string const&       pieceId,
        ::persona::TextureTint     texture,
        bool                       isAnimated,
        ::std::optional<uint>      sampledTexelWidth
    );

    MCAPI static void _addTextureToConfiguration(
        ::mce::TextureGroup&          textureGroup,
        ::persona::TextureTint const& texture,
        ::Json::Value&                pieceTextureData,
        bool                          validateFileExists
    );

    MCAPI static void _ensureCPUImageDataIsLoaded(
        ::mce::TextureGroup&             textureGroup,
        ::persona::TextureTint const&    texture,
        ::persona::TextureTint::PathType pathType,
        bool                             validateFileExists
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BASE_FACE_TEXTURE_ID();

    MCAPI static ::std::string const& BASE_TEXTURE_ID();

    MCAPI static ::std::string const& PERSONA_ANIMATED_ATLAS_TEST_PATH();

    MCAPI static ::std::string const& PERSONA_ATLAS_TEST_PATH();
    // NOLINTEND
};
