#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/persistence/PersistentDataType.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Persistence { struct PersistentData; }
namespace Scripting { struct Error; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

class EditorPersistenceServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPersistenceServiceProvider() = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> addOrUpdatePersistData(::Editor::Persistence::PersistentData const&) = 0;

    // vIndex: 2
    virtual ::Scripting::Result<void> addPersistData(::Editor::Persistence::PersistentData const&) = 0;

    // vIndex: 3
    virtual ::Scripting::Result<void> updatePersistData(::Editor::Persistence::PersistentData const&) = 0;

    // vIndex: 4
    virtual ::Scripting::Result<void>
    removePersistData(::HashedString const&, ::Editor::Services::PersistentDataType const) = 0;

    // vIndex: 5
    virtual ::Scripting::Result<::std::string, ::Scripting::Error>
    getPersistData(::HashedString const&, ::Editor::Services::PersistentDataType const) const = 0;

    // vIndex: 6
    virtual ::Scripting::Result<::std::vector<::HashedString>, ::Scripting::Error>
    getKeysStartWith(::std::string const, ::Editor::Services::PersistentDataType const) const = 0;

    // vIndex: 7
    virtual ::Scripting::Result<bool, ::Scripting::Error>
    hasData(::HashedString const&, ::Editor::Services::PersistentDataType const) const = 0;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForPersistDataChanged(::std::function<void(::Editor::Persistence::PersistentData const&)>) = 0;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForPersistDataRemoved(::std::function<
                                    void(::HashedString const&, ::Editor::Services::PersistentDataType)>) = 0;

    // vIndex: 10
    virtual ::std::unique_ptr<::cereal::ReflectionCtx>& getCerealContext() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
