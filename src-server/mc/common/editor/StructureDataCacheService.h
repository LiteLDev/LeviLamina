#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/StructureDataCacheServiceProvider.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class StructureTemplate;
namespace Editor { class EditorStructureTemplate; }
namespace Editor::Network { class StructureDataCacheReleaseStructurePayload; }
namespace Editor::Network { class StructureDataCacheRequestStructurePayload; }
namespace Editor::StructureDataCache { class IStructureDataProvider; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class StructureDataCacheService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Services::StructureDataCacheServiceProvider,
                                  public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5fa966;
    ::ll::UntypedStorage<8, 64> mUnk96b4f4;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataCacheService& operator=(StructureDataCacheService const&);
    StructureDataCacheService(StructureDataCacheService const&);
    StructureDataCacheService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureDataCacheService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual void registerStructureDataProvider(
        ::std::weak_ptr<::Editor::StructureDataCache::IStructureDataProvider> providerRef
    ) /*override*/;

    // vIndex: 2
    virtual void informStructureDataRemoved(::mce::UUID const& id) /*override*/;

    // vIndex: 3
    virtual void informStructureDataUpdated(
        ::mce::UUID const& id,
        ::std::variant<
            ::StructureTemplate const*,
            ::Editor::EditorStructureTemplate const*,
            ::std::shared_ptr<::StructureTemplate const>,
            ::std::shared_ptr<::Editor::EditorStructureTemplate const>> const& data
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleStructureDataCacheReleaseStructurePayload(
        ::Editor::Network::StructureDataCacheReleaseStructurePayload const& payload
    );

    MCNAPI void _handleStructureDataCacheRequestStructurePayload(
        ::Editor::Network::StructureDataCacheRequestStructurePayload const& payload
    );

    MCNAPI void _recordClientOwnership(::mce::UUID const& structureId, ::mce::UUID const& clientId);

    MCNAPI void _recordClientOwnershipRelease(::mce::UUID const& structureId, ::mce::UUID const& clientId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void
    $registerStructureDataProvider(::std::weak_ptr<::Editor::StructureDataCache::IStructureDataProvider> providerRef);

    MCNAPI void $informStructureDataRemoved(::mce::UUID const& id);

    MCNAPI void $informStructureDataUpdated(
        ::mce::UUID const& id,
        ::std::variant<
            ::StructureTemplate const*,
            ::Editor::EditorStructureTemplate const*,
            ::std::shared_ptr<::StructureTemplate const>,
            ::std::shared_ptr<::Editor::EditorStructureTemplate const>> const& data
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForStructureDataCacheServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
