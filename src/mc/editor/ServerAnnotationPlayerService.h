#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/ServerAnnotationPlayerServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
struct DimensionType;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Annotations { class AnnotationInstance; }
namespace Editor::Annotations { class AnnotationMetadata; }
namespace Editor::Network { class AnnotationClientInitializedPayload; }
namespace Editor::Network { class AnnotationClientPlayerPositionUpdatePayload; }
// clang-format on

namespace Editor::Services {

class ServerAnnotationPlayerService : public ::Editor::Services::IEditorService,
                                      public ::Editor::Services::ServerAnnotationPlayerServiceProvider,
                                      public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3f1aab;
    ::ll::UntypedStorage<4, 4>  mUnkc8d69c;
    ::ll::UntypedStorage<4, 12> mUnk6b8ee0;
    ::ll::UntypedStorage<4, 4>  mUnk2a7f38;
    ::ll::UntypedStorage<8, 64> mUnk3cc869;
    ::ll::UntypedStorage<8, 64> mUnk810f71;
    ::ll::UntypedStorage<1, 1>  mUnkdb1104;
    ::ll::UntypedStorage<8, 16> mUnkc63d00;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerAnnotationPlayerService& operator=(ServerAnnotationPlayerService const&);
    ServerAnnotationPlayerService(ServerAnnotationPlayerService const&);
    ServerAnnotationPlayerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerAnnotationPlayerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void setShowAnnotations(bool showAnnotations) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerAnnotationPlayerService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _handleClientInitializedPayload(::Editor::Network::AnnotationClientInitializedPayload const& payload);

    MCNAPI void _handleClientPlayerPositionUpdatePayload(
        ::Editor::Network::AnnotationClientPlayerPositionUpdatePayload const& payload
    );

    MCNAPI bool _isInVisibleRange(::WeakRef<::Editor::Annotations::AnnotationMetadata> const& metadataRef) const;

    MCNAPI void _sendData(::WeakRef<::Editor::Annotations::AnnotationInstance> const& instanceRef);

    MCNAPI void _sendMetadata(::WeakRef<::Editor::Annotations::AnnotationMetadata> const& metadataRef);

    MCNAPI void _sendVisibilityUpdate(::DimensionType const& oldDimension, ::DimensionType const& newDimension);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& serviceName();
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

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $setShowAnnotations(bool showAnnotations);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForServerAnnotationPlayerServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
