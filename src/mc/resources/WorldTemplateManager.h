#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/interface/IWorldTemplateManager.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IFileAccess;
class Pack;
class PackManifestFactory;
class PackSourceFactory;
struct PackIdVersion;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManager : public ::IWorldTemplateManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk660c52;
    ::ll::UntypedStorage<8, 24>  mUnk1dd9db;
    ::ll::UntypedStorage<8, 8>   mUnk2c9270;
    ::ll::UntypedStorage<8, 24>  mUnk599bd5;
    ::ll::UntypedStorage<8, 8>   mUnk2685b9;
    ::ll::UntypedStorage<8, 24>  mUnk34968b;
    ::ll::UntypedStorage<8, 24>  mUnkcb8451;
    ::ll::UntypedStorage<8, 80>  mUnk4899ec;
    ::ll::UntypedStorage<1, 1>   mUnkc27adc;
    ::ll::UntypedStorage<1, 1>   mUnke65739;
    ::ll::UntypedStorage<8, 616> mUnk8c2b95;
    ::ll::UntypedStorage<8, 792> mUnk674939;
    ::ll::UntypedStorage<8, 360> mUnkce7a2f;
    ::ll::UntypedStorage<8, 8>   mUnk88fcdd;
    ::ll::UntypedStorage<8, 8>   mUnk4fa3c5;
    ::ll::UntypedStorage<8, 64>  mUnk5edc72;
    ::ll::UntypedStorage<8, 64>  mUnkd6b698;
    ::ll::UntypedStorage<8, 128> mUnk54cec9;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManager& operator=(WorldTemplateManager const&);
    WorldTemplateManager(WorldTemplateManager const&);
    WorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldTemplateManager() /*override*/;

    // vIndex: 4
    virtual void populateWorldTemplates() /*override*/;

    // vIndex: 5
    virtual uint64 getWorldTemplateSize() const /*override*/;

    // vIndex: 6
    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int index) const /*override*/;

    // vIndex: 3
    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo>> const& getLocalTemplates() const /*override*/;

    // vIndex: 1
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs
    ) const /*override*/;

    // vIndex: 7
    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity) /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Subscription
    registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateManager(
        ::PackManifestFactory&                                            packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::PackSourceFactory&                                              packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager,
        ::brstd::move_only_function<::Bedrock::NotNullNonOwnerPtr<::IFileAccess>(::ResourceFileSystem)>
             fileAccessProvider,
        bool initAsync
    );

    MCNAPI void _deleteWorldTemplate(
        ::PackIdVersion const&                     packIdentity,
        ::std::function<bool(::Core::Path const&)> deleteWorldCallback
    );

    MCNAPI void _initialize();

    MCNAPI void _initializePackSources();

    MCNAPI void _onDiscoverWorldTemplate(::Pack const& pack);

    MCNAPI ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const;

    MCNAPI ::Core::PathBuffer<::std::string> getWorldTemplatesPath() const;

    MCNAPI void sortWorldTemplates();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::PackManifestFactory&                                            packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::PackSourceFactory&                                              packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager,
        ::brstd::move_only_function<::Bedrock::NotNullNonOwnerPtr<::IFileAccess>(::ResourceFileSystem)>
             fileAccessProvider,
        bool initAsync
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $populateWorldTemplates();

    MCNAPI uint64 $getWorldTemplateSize() const;

    MCNAPI ::WorldTemplateInfo const& $getWorldTemplateAtIndex(int index) const;

    MCNAPI ::std::vector<::std::unique_ptr<::WorldTemplateInfo>> const& $getLocalTemplates() const;

    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs
    ) const;

    MCNAPI void $deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity);

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
