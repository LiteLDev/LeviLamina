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

class ModalToolContainer : public ::Editor::DataStore::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9e7146;
    ::ll::UntypedStorage<8, 16> mUnk9e375a;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalToolContainer& operator=(ModalToolContainer const&);
    ModalToolContainer(ModalToolContainer const&);
    ModalToolContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ModalToolContainer() /*override*/ = default;

    // vIndex: 1
    virtual void clear() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModalToolContainer(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);

    MCAPI void _onSelectedToolUpdated(::Json::Value const& current, ::Json::Value const& prev);

    MCAPI void _onToolCreated(::std::string const& id);

    MCAPI void _onToolDestroyed(::std::string const& id);

    MCAPI void _onToolUpdated(::std::string const& id, ::std::string const& propName);

    MCAPI bool _removeTool(::std::string const& id);

    MCAPI ::Json::Value getDataPayload(::Editor::DataStore::PayloadDescription const& desc) const;

    MCAPI ::Json::Value getSelectedToolPayload(::Editor::DataStore::PayloadDescription const&) const;

    MCAPI ::Scripting::Result<void> handleDataEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

    MCAPI ::Scripting::Result<void> handleSelectedToolEvent(
        ::Editor::DataStore::EventType eventType,
        ::Json::Value const&           payload,
        bool                           isNetworkEvent
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> TAG_DATA();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> TAG_SELECTED_TOOL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
