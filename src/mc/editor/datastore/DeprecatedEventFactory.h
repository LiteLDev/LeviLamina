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
        ::ll::UntypedStorage<8, 32> mUnk2a0b3d;
        ::ll::UntypedStorage<8, 32> mUnk4ae186;
        // NOLINTEND

    public:
        // prevent constructor by default
        SerializedEvent& operator=(SerializedEvent const&);
        SerializedEvent(SerializedEvent const&);
        SerializedEvent();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~SerializedEvent();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value buildClientPayloadExecuteAction(::std::string const& id, ::Json::Value const& payload);

    MCNAPI static ::Json::Value buildNotificationPayload(::std::string const& dataTag, ::std::string const& payload);

    MCNAPI static ::Json::Value buildServerPayloadDestroyMenu(::std::string const& id);

    MCNAPI static ::Json::Value buildServerPayloadDestroyModalTool(::std::string const& id);

    MCNAPI static ::Editor::DataStore::DeprecatedEventFactory::SerializedEvent
    getSerializedEvent(::Json::Value const& payload);

    MCNAPI static ::std::optional<::Editor::DataStore::DeprecatedEventFactory::SerializedEvent>
    tryGetSerializedEvent(::Json::Value const& payload);
    // NOLINTEND
};

} // namespace Editor::DataStore
