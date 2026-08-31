#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ExternalContentManagerProxy;
class IContentKeyProvider;
class IResourcePackRepository;
class ImportContext;
class LevelLoader;
class PackManifest;
class PackManifestFactory;
class PackReport;
class PackSourceFactory;
class PersonaRepository;
class ResourceLoadManager;
class ResourcePackManager;
class SkinRepository;
class TaskGroup;
class WorldTemplateManager;
namespace Core { class Path; }
// clang-format on

class ExternalContentManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ExternalContentManager inner types declare
    // clang-format off
    struct ImportRequestData;
    struct LoadingContentData;
    struct LoadingContentDataHasher;
    // clang-format on

    // ExternalContentManager inner types define
    struct ImportRequestData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImportContext>>      mContext;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mMcContentPath;
        ::ll::TypedStorage<1, 1, bool>                                     mFromTemp;
        ::ll::TypedStorage<4, 4, ::LoadImportedLevelData>                  mLoadLevelData;
        ::ll::TypedStorage<1, 1, bool>                                     mTitleLocked;
        ::ll::TypedStorage<8, 32, ::std::string>                           mLevelId;
        // NOLINTEND
    };

    struct LoadingContentData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PackType>          packType;
        ::ll::TypedStorage<8, 56, ::ResourceLocation> packLocation;
        // NOLINTEND
    };

    struct LoadingContentDataHasher {};

    using Importer = ::std::function<void(
        ::std::shared_ptr<::ImportContext>,
        ::Core::PathBuffer<::std::string> const&,
        bool,
        ::LoadImportedLevelData,
        bool,
        bool
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelLoader>>               mLevelLoader;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                  mPackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                      mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>>      mTemplateManager;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                      mManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinRepository>>                        mSkinRepository;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&>                                        mPersonaRepository;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>                                        mPackSourceFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>>       mResourceLoadManager;
    ::ll::TypedStorage<1, 1, bool>                                                        mContentInTransit;
    ::ll::TypedStorage<
        8,
        40,
        ::std::queue<
            ::ExternalContentManager::ImportRequestData,
            ::std::deque<::ExternalContentManager::ImportRequestData>>>
                                                                 mQueuedContent;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mTempImportFolder;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_set<
            ::ExternalContentManager::LoadingContentData,
            ::ExternalContentManager::LoadingContentDataHasher,
            ::std::equal_to<::ExternalContentManager::LoadingContentData>>>
                                                                               mLoadingContent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                   mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ExternalContentManagerProxy>> mProxy;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<void>>                         mExistence;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManager& operator=(ExternalContentManager const&);
    ExternalContentManager(ExternalContentManager const&);
    ExternalContentManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalContentManager() /*override*/;

    virtual void importContent(
        ::std::shared_ptr<::ImportContext>       context,
        ::Core::PathBuffer<::std::string> const& mcContentPath,
        bool                                     fromTemp,
        ::LoadImportedLevelData                  loadLevelData,
        bool                                     isSubcomponent,
        bool                                     isTitleLocked,
        ::std::string const&                     levelId
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExternalContentManager(
        ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> const&               levelLoader,
        ::IResourcePackRepository&                                        packRepository,
        ::ResourcePackManager&                                            packManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      templateManager,
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::shared_ptr<::SkinRepository>                               skinRepo,
        ::PersonaRepository&                                              personaRepo,
        ::PackSourceFactory&                                              packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>              resourceLoadManager,
        bool                                                              isEditorModeEnabled
    );

    MCAPI void _importMCPack(
        ::std::shared_ptr<::ImportContext> context,
        ::ResourceLocation const&          location,
        ::PackManifest const&              manifest,
        ::PackReport const&                report,
        bool                               fromTemp,
        bool                               isTitleLocked
    );

    MCAPI void _importMCWorld(
        ::std::shared_ptr<::ImportContext> context,
        ::Core::Path const&                mcWorldPath,
        bool                               fromTemp,
        ::LoadImportedLevelData            loadLevelData,
        ::std::string const&               levelId
    );

    MCAPI void _packImportCompleted();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> const&               levelLoader,
        ::IResourcePackRepository&                                        packRepository,
        ::ResourcePackManager&                                            packManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      templateManager,
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::shared_ptr<::SkinRepository>                               skinRepo,
        ::PersonaRepository&                                              personaRepo,
        ::PackSourceFactory&                                              packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>              resourceLoadManager,
        bool                                                              isEditorModeEnabled
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $importContent(
        ::std::shared_ptr<::ImportContext>       context,
        ::Core::PathBuffer<::std::string> const& mcContentPath,
        bool                                     fromTemp,
        ::LoadImportedLevelData                  loadLevelData,
        bool                                     isSubcomponent,
        bool                                     isTitleLocked,
        ::std::string const&                     levelId
    );
    // NOLINTEND
};
