#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
class InputMappingFactoryMap;
struct BindingFactoryMap;
struct ButtonEventData;
struct ClearPointerLocationWithIdEventData;
struct ControlOptionEventData;
struct ControllerIDtoClientMap;
struct InputMapping;
struct NumberOfEnabledControlOptionsEventData;
struct OverlappingControlsEventData;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
struct TextCharEventData;
struct TouchPadTouchEventData;
// clang-format on

class InputHandler {
public:
    // InputHandler inner types declare
    // clang-format off
    struct InputHandlerState;
    // clang-format on

    // InputHandler inner types define
    struct InputHandlerState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkc48413;
        ::ll::UntypedStorage<4, 4>  mUnke33679;
        ::ll::UntypedStorage<8, 24> mUnkf47eb0;
        ::ll::UntypedStorage<8, 64> mUnkedcf43;
        ::ll::UntypedStorage<8, 64> mUnk324d8e;
        ::ll::UntypedStorage<1, 1>  mUnkb75b7f;
        ::ll::UntypedStorage<1, 1>  mUnka4b294;
        ::ll::UntypedStorage<1, 1>  mUnk5c4b3e;
        // NOLINTEND

    public:
        // prevent constructor by default
        InputHandlerState& operator=(InputHandlerState const&);
        InputHandlerState(InputHandlerState const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI InputHandlerState();

        MCNAPI ::InputHandler::InputHandlerState& operator=(::InputHandler::InputHandlerState&&);

        MCNAPI ~InputHandlerState();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8c8ced;
    ::ll::UntypedStorage<8, 16> mUnk93a1f1;
    ::ll::UntypedStorage<8, 16> mUnk565a06;
    ::ll::UntypedStorage<8, 24> mUnk1be56c;
    ::ll::UntypedStorage<8, 24> mUnkfb791e;
    ::ll::UntypedStorage<8, 24> mUnkb294f0;
    ::ll::UntypedStorage<8, 24> mUnk79370e;
    ::ll::UntypedStorage<8, 24> mUnkc4f48f;
    ::ll::UntypedStorage<8, 24> mUnk19fafd;
    ::ll::UntypedStorage<8, 16> mUnk762906;
    ::ll::UntypedStorage<8, 64> mUnk6ff7a0;
    ::ll::UntypedStorage<8, 64> mUnk7c31d8;
    ::ll::UntypedStorage<8, 64> mUnk2937d8;
    ::ll::UntypedStorage<8, 64> mUnkf6d609;
    ::ll::UntypedStorage<8, 64> mUnk14257c;
    ::ll::UntypedStorage<8, 24> mUnk5c31c0;
    ::ll::UntypedStorage<8, 16> mUnk2c15c5;
    ::ll::UntypedStorage<8, 24> mUnk31f324;
    ::ll::UntypedStorage<8, 24> mUnkb45335;
    ::ll::UntypedStorage<8, 24> mUnk385264;
    ::ll::UntypedStorage<8, 24> mUnk5f208d;
    ::ll::UntypedStorage<8, 8>  mUnk218f88;
    ::ll::UntypedStorage<8, 8>  mUnk13d358;
    ::ll::UntypedStorage<8, 8>  mUnk234502;
    ::ll::UntypedStorage<8, 24> mUnk32f955;
    ::ll::UntypedStorage<8, 8>  mUnk91d5b6;
    ::ll::UntypedStorage<8, 8>  mUnkb74d8e;
    ::ll::UntypedStorage<8, 64> mUnk1224a8;
    ::ll::UntypedStorage<4, 4>  mUnk7efb25;
    // NOLINTEND

public:
    // prevent constructor by default
    InputHandler& operator=(InputHandler const&);
    InputHandler(InputHandler const&);
    InputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InputHandler(
        ::BindingFactoryMap&      bindingFactoryMap,
        ::InputMappingFactoryMap& mappingFactoryMap,
        ::InputMode               startingInputMode
    );

    MCNAPI void _handleButtonEvent(
        ::ButtonEventData const& button,
        ::FocusImpact            focusImpact,
        ::IClientInstance&       client,
        int                      controllerId
    );

    MCNAPI void
    _handleMappingChange(::InputMapping const* newMapping, ::InputMapping const* oldMapping, int controllerId);

    MCNAPI void
    _handleTextCharEvent(::TextCharEventData const& textChar, ::FocusImpact focusImpact, ::IClientInstance& client);

    MCNAPI void changeControllerId(int oldId, int newId);

    MCNAPI void clearInputMapping(int controllerId);

    MCNAPI ::std::string const& getCurrentInputMapping(int controllerId) const;

    MCNAPI ::InputMode getCurrentInputMode(int controllerId) const;

    MCNAPI void popInputMapping(int controllerId);

    MCNAPI void pushInputMapping(::std::string const& mappingName, int controllerId);

    MCNAPI void registerButtonDownHandler(
        ::std::string                                            buttonName,
        ::std::function<void(::FocusImpact, ::IClientInstance&)> handler,
        bool                                                     suspendable
    );

    MCNAPI void registerButtonUpHandler(
        ::std::string                                            buttonName,
        ::std::function<void(::FocusImpact, ::IClientInstance&)> handler,
        bool                                                     suspendable
    );

    MCNAPI void registerClearPointerLocationsHandler(::std::function<void(::IClientInstance&)> handler);

    MCNAPI void registerDirectionHandler(
        ::DirectionId                                                          directionId,
        ::std::function<void(float, float, ::FocusImpact, ::IClientInstance&)> handler
    );

    MCNAPI void registerInputModeHandler(::std::function<void(::InputMode, ::IClientInstance&)> handler);

    MCNAPI void registerOverlappingControlsHandler(
        ::std::function<void(::OverlappingControlsEventData const&, ::IClientInstance&)> handler
    );

    MCNAPI void registerPotentialOverlappingControlsHandler(::std::function<void(::IClientInstance&)> handler);

    MCNAPI void registerTouchPadTouchHandler(
        ::std::function<void(::TouchPadTouchEventData const&, ::FocusImpact, ::IClientInstance&)> handler
    );

    MCNAPI void releaseButtonsAndSticks(::std::string const& currentMappingName, int controllerId);

    MCNAPI void tick(
        ::IMinecraftGame*                                               mcGame,
        ::IClientInstance&                                              primaryClientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& controllerClientMap,
        bool                                                            allowMultipleClients
    );

    MCNAPI void updateInputMapping(::std::string const& mappingName, int controllerId);

    MCNAPI ~InputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BindingFactoryMap&      bindingFactoryMap,
        ::InputMappingFactoryMap& mappingFactoryMap,
        ::InputMode               startingInputMode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
