#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/serviceproviders/ServerThumbnailCacheServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class ThumbnailCacheFetchRequestPayload; }
namespace Editor::Network { class ThumbnailCacheStorePayload; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ServerThumbnailCacheService : public ::Editor::Services::IEditorService,
                                    public ::Editor::Services::ServerThumbnailCacheServiceProvider,
                                    public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>   mUnk1110e6;
    ::ll::UntypedStorage<8, 1032> mUnkd7b0f7;
    ::ll::UntypedStorage<8, 24>   mUnk511273;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerThumbnailCacheService& operator=(ServerThumbnailCacheService const&);
    ServerThumbnailCacheService(ServerThumbnailCacheService const&);
    ServerThumbnailCacheService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerThumbnailCacheService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual bool remove(::mce::UUID id, ::std::optional<uint> hash) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerThumbnailCacheService(::Editor::ServiceProviderCollection& serviceProviders);

    MCNAPI void _handleFetchRequest(::Editor::Network::ThumbnailCacheFetchRequestPayload const& evt) const;

    MCNAPI void _handleStoreRequest(::Editor::Network::ThumbnailCacheStorePayload const& evt);

    MCNAPI void _scanFileCache();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& SERVICE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI bool $remove(::mce::UUID id, ::std::optional<uint> hash);


    // NOLINTEND
};

} // namespace Editor::Services
