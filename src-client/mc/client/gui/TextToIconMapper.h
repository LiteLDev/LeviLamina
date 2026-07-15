#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"

// auto generated forward declare list
// clang-format off
class RemappingLayout;
// clang-format on

class TextToIconMapper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::string>>           mGamepadIconMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::string>>           mGamepadTipsIconMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTouchIconMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTouchCrossairIconMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTouchClassicIconMap;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mGamepadPrefix;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mGamepadTipsPrefix;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextToIconMapper();

    MCAPI void _init();

    MCAPI void preprocessText(
        ::std::string&        text,
        ::RemappingLayout*    layout,
        ::InputMode           mode,
        bool                  swapGamepadButtonsAB,
        bool                  swapGamepadButtonsXY,
        ::NewInteractionModel interactionModel,
        bool                  isGameTip
    );

    MCAPI ::std::string remapGamepadIcon(int key, bool isGameTip) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
