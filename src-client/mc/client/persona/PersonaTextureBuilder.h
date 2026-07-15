#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IPersonaImageProvider;
class IPersonaPieceProvider;
class ResourceLoadManager;
class ResourcePackManager;
class TaskGroup;
struct PersonaCharacter;
struct TextureHotReloader;
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

    MCNAPI ::Bedrock::Threading::Async<bool>
    parseTextures(::std::string const& characterName, ::TaskGroup& taskGroup, ::IPersonaPieceProvider& pieceProvider);

    MCNAPI void registerTexturesForHotReload(
        ::PersonaCharacter&                        character,
        ::std::function<void(::PersonaCharacter&)> onTextureReloaded
    );

    MCNAPI ~PersonaTextureBuilder();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& BASE_FACE_TEXTURE_ID();
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
