#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/Mode.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/datastore/container/Container.h"

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
    ::ll::UntypedStorage<1, 1>  mUnkf594a1;
    ::ll::UntypedStorage<8, 16> mUnk9e375a;
    ::ll::UntypedStorage<8, 24> mUnkdb5cbf;
    ::ll::UntypedStorage<8, 64> mUnkf874f4;
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
    MCNAPI ModalToolContainer(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);

    MCNAPI ::Json::Value getDataPayload(::Editor::DataStore::PayloadDescription const& desc) const;

    MCNAPI ::Json::Value getSortOrderPayload(::Editor::DataStore::PayloadDescription const& desc) const;

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

    MCNAPI ::Scripting::Result_deprecated<void> handleSortOrderEvent(
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

    MCNAPI void notifyModeChange(::Editor::Mode newMode);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_DATA();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_SELECTED_TOOL();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> TAG_SORT_ORDER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::DataStore::PayloadEventDispatcher& dispatcher, bool isServer);
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
