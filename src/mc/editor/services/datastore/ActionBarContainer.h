#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/datastore/container/Container.h"

// auto generated forward declare list
// clang-format off
namespace Editor::DataStore { struct PayloadDescription; }
namespace Json { class Value; }
// clang-format on

namespace Editor::DataStore {

class ActionBarContainer : public ::Editor::DataStore::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd26498;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionBarContainer& operator=(ActionBarContainer const&);
    ActionBarContainer(ActionBarContainer const&);
    ActionBarContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActionBarContainer() /*override*/ = default;

    // vIndex: 1
    virtual void clear() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> _createItem(::std::string const& id, ::Json::Value const& payload);

    MCNAPI void _onItemCreated(::std::string const& id);

    MCNAPI void _onItemDestroyed(::std::string const& id);

    MCNAPI void _onItemUpdated(::std::string const& id, ::std::string const& propName);

    MCNAPI bool _removeItem(::std::string const& id);

    MCNAPI ::Json::Value getDataPayload(::Editor::DataStore::PayloadDescription const& desc) const;

    MCNAPI ::Scripting::Result<void> handleDataEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> CATEGORY_CORE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> CATEGORY_EXPERIMENTAL();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> CATEGORY_EXTENSION();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> PROPERTY_CATEGORY();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> TAG_DATA();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
