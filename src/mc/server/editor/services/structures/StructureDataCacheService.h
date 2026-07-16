#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/server/editor/serviceproviders/StructureDataCacheServiceProvider.h"

// auto generated forward declare list
// clang-format off
class StructureTemplate;
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class ServiceProviderCollection; }
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
    ::ll::UntypedStorage<8, 24> mUnk6d6f76;
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
    virtual ~StructureDataCacheService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void registerStructureDataProvider(
        ::std::weak_ptr<::Editor::StructureDataCache::IStructureDataProvider> providerRef
    ) /*override*/;

    virtual void informStructureDataRemoved(::mce::UUID const& id) /*override*/;

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
    MCNAPI explicit StructureDataCacheService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
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
