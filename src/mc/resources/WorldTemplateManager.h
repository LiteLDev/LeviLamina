#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/interface/IWorldTemplateManager.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class Pack;
class PackManifestFactory;
class PackSourceFactory;
struct PackIdVersion;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FilePathManager; }
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

    // vIndex: 3
    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo>> const& getLocalTemplates() const /*override*/;

    // vIndex: 1
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs
    ) const /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Subscription
    registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldTemplateManager(
        ::PackManifestFactory&                                            packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::PackSourceFactory&                                              packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager,
        bool                                                              initAsync
    );

    MCAPI void _initialize();

    MCAPI void _initializePackSources();

    MCAPI void _onDiscoverWorldTemplate(::Pack const& pack);

    MCAPI ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const;

    MCAPI ::Core::PathBuffer<::std::string> getWorldTemplatesPath() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::PackManifestFactory&                                            packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::PackSourceFactory&                                              packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&     filePathManager,
        bool                                                              initAsync
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
    MCFOLD ::std::vector<::std::unique_ptr<::WorldTemplateInfo>> const& $getLocalTemplates() const;

    MCAPI ::WorldTemplateInfo const* $findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs
    ) const;

    MCAPI ::Bedrock::PubSub::Subscription
    $registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
