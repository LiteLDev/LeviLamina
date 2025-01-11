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

class MenuContainer : public ::Editor::DataStore::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkafe2d0;
    // NOLINTEND

public:
    // prevent constructor by default
    MenuContainer& operator=(MenuContainer const&);
    MenuContainer(MenuContainer const&);
    MenuContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MenuContainer() /*override*/ = default;

    // vIndex: 1
    virtual void clear() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MenuContainer(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);

    MCAPI void _onMenuItemCreated(::std::string const& id);

    MCAPI void _onMenuItemDestroyed(::std::string const& id);

    MCAPI void _onMenuItemUpdated(::std::string const& id);

    MCAPI bool _removeMenuItem(::std::string const& id);

    MCFOLD ::Json::Value getDataPayload(::Editor::DataStore::PayloadDescription const& desc) const;

    MCAPI ::Scripting::Result<void> handleDataEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> TAG_DATA();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $clear();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::DataStore
