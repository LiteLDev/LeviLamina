#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/datastore/container/Container.h"

// auto generated forward declare list
// clang-format off
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
    virtual ~ModalToolContainer() /*override*/ = default;

    virtual void clear() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _createTool(::std::string const& id, ::Json::Value const& payload);

    MCNAPI void _onSelectedToolUpdated(::Json::Value const& current, ::Json::Value const& prev);

    MCNAPI void _onToolCreated(::std::string const& id);

    MCNAPI void _onToolDestroyed(::std::string const& id);

    MCNAPI void _onToolUpdated(::std::string const& id, ::std::string const& propName);

    MCNAPI bool _removeTool(::std::string const& id);

    MCNAPI ::Json::Value getDataPayload(::Editor::DataStore::PayloadDescription const& desc) const;

    MCNAPI ::Scripting::Result_deprecated<void> handleDataEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

    MCNAPI ::Scripting::Result_deprecated<void> handleSelectedToolEvent(
        ::Editor::DataStore::EventType eventType,
        ::Json::Value const&           payload,
        bool                           isNetworkEvent
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_DATA();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_SELECTED_TOOL();
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
