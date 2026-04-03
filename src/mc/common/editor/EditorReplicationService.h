#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorReplicationServiceProvider.h"
#include "mc/common/editor/ReplicationPolicy.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class IReplicatedContainerBase; }
namespace Editor { class IReplicatedObjectBase; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class EditorReplicationContainerAddObjectPayload; }
namespace Editor::Network { class EditorReplicationContainerDeleteObjectPayload; }
namespace Editor::Network { class EditorReplicationDeletePayload; }
namespace Editor::Network { class EditorReplicationTriggerEventPayload; }
namespace Editor::Network { class EditorReplicationUpdatePayload; }
namespace Editor::Services { struct ReplicationTypeInfo; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

class EditorReplicationService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::EditorReplicationServiceProvider,
                                 public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd578df;
    ::ll::UntypedStorage<8, 8>  mUnkd941f5;
    ::ll::UntypedStorage<8, 64> mUnka08223;
    ::ll::UntypedStorage<8, 64> mUnk4f1555;
    ::ll::UntypedStorage<1, 1>  mUnkdade12;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorReplicationService& operator=(EditorReplicationService const&);
    EditorReplicationService(EditorReplicationService const&);
    EditorReplicationService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorReplicationService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::WeakRef<::Editor::IReplicatedObjectBase> _create(::HashedString const& id, uint typeHash) /*override*/;

    virtual void _remove(::HashedString const& id, uint typeHash) /*override*/;

    virtual ::WeakRef<::Editor::IReplicatedObjectBase> _getObjectById(::HashedString const& id, uint typeHash) const
        /*override*/;

    virtual void _registerType(uint typeHash, ::Editor::Services::ReplicationTypeInfo typeInfo) /*override*/;

    virtual ::cereal::ReflectionCtx& _getReflectionContext() const /*override*/;

    virtual ::Editor::ReplicationPolicy _getReplicationPolicyForTypeHash(uint typeHash) const /*override*/;

    virtual bool _canSyncOrModifyType(uint typeHash) const /*override*/;

    virtual bool _canApplyPayload(uint typeHash) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorReplicationService(
        ::Editor::ServiceProviderCollection& serviceProviders,
        ::cereal::ReflectionCtx&             reflectionContext
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    _addOrReplaceObject(::HashedString const& id, uint typeHash, ::std::string_view newData);

    MCNAPI ::Editor::IReplicatedContainerBase* _getContainerPointerById(::HashedString const& id) const;

    MCNAPI void _handleEditorReplicationContainerAddObjectPayload(
        ::Editor::Network::EditorReplicationContainerAddObjectPayload const& payload
    );

    MCNAPI void _handleEditorReplicationContainerDeleteObjectPayload(
        ::Editor::Network::EditorReplicationContainerDeleteObjectPayload const& payload
    );

    MCNAPI void _handleEditorReplicationDeletePayload(::Editor::Network::EditorReplicationDeletePayload const& payload);

    MCNAPI void _handleEditorReplicationEventDataUpdatePayload(
        ::Editor::Network::EditorReplicationTriggerEventPayload const& payload
    );

    MCNAPI void _handleEditorReplicationUpdatePayload(::Editor::Network::EditorReplicationUpdatePayload const& payload);

    MCNAPI ::Scripting::Result_deprecated<void> _removeAndSyncObject(::HashedString const& id, uint typeHash);

    MCNAPI ::Scripting::Result_deprecated<void> _removeObject(::HashedString const& id, uint typeHash);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Editor::ServiceProviderCollection& serviceProviders, ::cereal::ReflectionCtx& reflectionContext);
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

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::WeakRef<::Editor::IReplicatedObjectBase> $_create(::HashedString const& id, uint typeHash);

    MCNAPI void $_remove(::HashedString const& id, uint typeHash);

    MCNAPI ::WeakRef<::Editor::IReplicatedObjectBase> $_getObjectById(::HashedString const& id, uint typeHash) const;

    MCNAPI void $_registerType(uint typeHash, ::Editor::Services::ReplicationTypeInfo typeInfo);

    MCNAPI ::cereal::ReflectionCtx& $_getReflectionContext() const;

    MCNAPI ::Editor::ReplicationPolicy $_getReplicationPolicyForTypeHash(uint typeHash) const;

    MCNAPI bool $_canSyncOrModifyType(uint typeHash) const;

    MCNAPI bool $_canApplyPayload(uint typeHash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorReplicationServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
