#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/datastore/container/Container.h"

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
    virtual ~ActionContainer() /*override*/;

    virtual void clear() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActionContainer(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);

    MCNAPI void _onControlActionCreated(::std::string const& id);

    MCNAPI void _onControlActionDestroyed(::Json::Value const& payload);

    MCNAPI ::Json::Value getControlActionPayload(::Editor::DataStore::PayloadDescription const& desc) const;

    MCNAPI ::Scripting::Result_deprecated<void> handleControlActionEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

    MCNAPI ::Scripting::Result_deprecated<void> handleInvokeEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_CONTROL_DATA();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_INVOKE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::DataStore
