#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/builders/TextureTint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IPersonaImageProvider;
class Pack;
class ResourceLoadManager;
class ResourcePackManager;
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
    ::ll::UntypedStorage<8, 8>  mUnk87ade3;
    ::ll::UntypedStorage<8, 24> mUnk9528f1;
    ::ll::UntypedStorage<8, 24> mUnk964673;
    ::ll::UntypedStorage<8, 24> mUnk4dffe1;
    ::ll::UntypedStorage<8, 24> mUnk8ef150;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaTextureBuilder& operator=(PersonaTextureBuilder const&);
    PersonaTextureBuilder(PersonaTextureBuilder const&);
    PersonaTextureBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaTextureBuilder(
        ::IPersonaImageProvider&                                  imageProvider,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>      resourcePackManager,
        ::Bedrock::NonOwnerPointer<::TextureHotReloader>          textureHotReloader
    );

    MCNAPI ~PersonaTextureBuilder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addClothingMap(
        ::PersonaTextureResources&      textureResources,
        ::std::shared_ptr<::Pack const> clothingSourcePack,
        ::std::string const&            mapId,
        ::std::string                   clothingMapPath
    );

    MCNAPI static void _addPieceTextureToMap(
        ::PersonaTextureResources& textureResources,
        ::std::string const&       pieceId,
        ::persona::TextureTint     texture,
        bool                       isAnimated
    );

    MCNAPI static void _addTextureToConfiguration(
        ::mce::TextureGroup&          textureGroup,
        ::persona::TextureTint const& texture,
        ::Json::Value&                pieceTextureData,
        bool                          validateFileExists
    );

    MCNAPI static void _ensureCPUImageDataIsLoaded(
        ::mce::TextureGroup&             textureGroup,
        ::persona::TextureTint const&    texture,
        ::persona::TextureTint::PathType pathType,
        bool                             validateFileExists
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& BASE_FACE_TEXTURE_ID();

    MCNAPI static ::std::string const& BASE_TEXTURE_ID();

    MCNAPI static ::std::string const& PERSONA_ANIMATED_ATLAS_TEST_PATH();

    MCNAPI static ::std::string const& PERSONA_ATLAS_TEST_PATH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IPersonaImageProvider&                                  imageProvider,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>      resourcePackManager,
        ::Bedrock::NonOwnerPointer<::TextureHotReloader>          textureHotReloader
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
