#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Editor::DataStore {

class DeprecatedEventFactory {
public:
    // DeprecatedEventFactory inner types declare
    // clang-format off
    struct SerializedEvent;
    // clang-format on

    // DeprecatedEventFactory inner types define
    enum class ClientActionEventType : int {
        ActionExecute = 1,
    };

    enum class ServerUXEventType : int {
        UpdateMenu                     = 3,
        DestroyMenu                    = 4,
        UpdateModalToolOption          = 7,
        DestroyModalToolOption         = 8,
        BindActionToControl            = 11,
        RemoveActionBindingFromControl = 12,
    };

    struct SerializedEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkb37d9e;
        ::ll::UntypedStorage<8, 32> mUnkdf6af7;
        // NOLINTEND

    public:
        // prevent constructor by default
        SerializedEvent& operator=(SerializedEvent const&);
        SerializedEvent(SerializedEvent const&);
        SerializedEvent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SerializedEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Editor::DataStore::DeprecatedEventFactory::SerializedEvent
    getSerializedEvent(::Json::Value const& payload);
    // NOLINTEND
};

} // namespace Editor::DataStore
