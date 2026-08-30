#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/datastore/container/Container.h"

// auto generated forward declare list
// clang-format off
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
    virtual ~MenuContainer() /*override*/;

    virtual void clear() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _removeMenuItem(::std::string const& id);

    MCNAPI ::Json::Value getDataPayload(::Editor::DataStore::PayloadDescription const& desc) const;

    MCNAPI ::Scripting::Result_deprecated<void> handleDataEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_DATA();
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
