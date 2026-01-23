#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/datastore/EventType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::DataStore { struct PayloadDescription; }
namespace Json { class Value; }
// clang-format on

namespace Editor::DataStore {

class PayloadEventDispatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk44123f;
    ::ll::UntypedStorage<8, 64> mUnka49834;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadEventDispatcher& operator=(PayloadEventDispatcher const&);
    PayloadEventDispatcher(PayloadEventDispatcher const&);
    PayloadEventDispatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PayloadEventDispatcher(
        ::std::function<void(
            ::HashedString const&,
            ::Editor::DataStore::EventType,
            ::Json::Value const&,
            ::Editor::DataStore::PayloadDescription const&
        )> syncNetworkCallback,
        ::std::function<void(
            ::HashedString const&,
            ::Editor::DataStore::EventType,
            ::Json::Value const&,
            ::Editor::DataStore::PayloadDescription const&
        )> publishCallback
    );

    MCNAPI ~PayloadEventDispatcher();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::function<void(
            ::HashedString const&,
            ::Editor::DataStore::EventType,
            ::Json::Value const&,
            ::Editor::DataStore::PayloadDescription const&
        )> syncNetworkCallback,
        ::std::function<void(
            ::HashedString const&,
            ::Editor::DataStore::EventType,
            ::Json::Value const&,
            ::Editor::DataStore::PayloadDescription const&
        )> publishCallback
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::DataStore
