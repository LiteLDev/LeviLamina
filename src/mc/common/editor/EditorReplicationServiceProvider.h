#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ReplicationPolicy.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class IReplicatedObjectBase; }
namespace Editor::Services { struct ReplicationTypeInfo; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

class EditorReplicationServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorReplicationServiceProvider() = default;

    virtual bool isServer() const = 0;

    virtual void _registerType(uint, ::Editor::Services::ReplicationTypeInfo) = 0;

    virtual ::WeakRef<::Editor::IReplicatedObjectBase> _create(::HashedString const&, uint) = 0;

    virtual ::WeakRef<::Editor::IReplicatedObjectBase> _getObjectById(::HashedString const&, uint) const = 0;

    virtual void _remove(::HashedString const&, uint) = 0;

    virtual ::cereal::ReflectionCtx& _getReflectionContext() const = 0;

    virtual ::Editor::ReplicationPolicy _getReplicationPolicyForTypeHash(uint) const = 0;

    virtual bool _canSyncOrModifyType(uint) const = 0;

    virtual bool _canApplyPayload(uint) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
