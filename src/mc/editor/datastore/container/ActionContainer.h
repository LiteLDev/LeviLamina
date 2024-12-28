#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/datastore/container/Container.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::DataStore { class PayloadEventDispatcher; }
namespace Editor::DataStore { struct PayloadDescription; }
namespace Json { class Value; }
// clang-format on

namespace Editor::DataStore {

class ActionContainer : public ::Editor::DataStore::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk4395f6;
    ::ll::UntypedStorage<8, 64> mUnka24dc7;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionContainer& operator=(ActionContainer const&);
    ActionContainer(ActionContainer const&);
    ActionContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActionContainer() /*override*/;

    // vIndex: 1
    virtual void clear() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActionContainer(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);

    MCAPI void _onControlActionCreated(::std::string const& id);

    MCAPI void _onControlActionDestroyed(::Json::Value const& payload);

    MCAPI ::Json::Value getControlActionPayload(::Editor::DataStore::PayloadDescription const& desc) const;

    MCAPI ::Scripting::Result<void> handleControlActionEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

    MCAPI ::Scripting::Result<void> handleInvokeEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> TAG_CONTROL_DATA();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> TAG_INVOKE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clear();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::DataStore
