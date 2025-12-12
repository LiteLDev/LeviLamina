#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/persistence/PersistentDataType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Persistence { struct PersistentData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

class EditorPersistenceServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPersistenceServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void>
    addOrUpdatePersistData(::Editor::Persistence::PersistentData const&) = 0;

    virtual ::Scripting::Result_deprecated<void> addPersistData(::Editor::Persistence::PersistentData const&) = 0;

    virtual ::Scripting::Result_deprecated<void> updatePersistData(::Editor::Persistence::PersistentData const&) = 0;

    virtual ::Scripting::Result_deprecated<void>
    removePersistData(::HashedString const&, ::Editor::Services::PersistentDataType const) = 0;

    virtual ::Scripting::Result_deprecated<::std::string>
    getPersistData(::HashedString const&, ::Editor::Services::PersistentDataType const) const = 0;

    virtual ::Scripting::Result_deprecated<::std::vector<::HashedString>>
    getKeysStartWith(::std::string const, ::Editor::Services::PersistentDataType const) const = 0;

    virtual ::Scripting::Result_deprecated<bool>
    hasData(::HashedString const&, ::Editor::Services::PersistentDataType const) const = 0;

    virtual ::std::string const& getPlayerSaveId() const = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForPersistDataChanged(::std::function<void(::Editor::Persistence::PersistentData const&)>) = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> listenForPersistDataRemoved(
        ::std::function<void(::HashedString const&, ::Editor::Services::PersistentDataType)>
    ) = 0;

    virtual ::std::unique_ptr<::cereal::ReflectionCtx>& getCerealContext() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
