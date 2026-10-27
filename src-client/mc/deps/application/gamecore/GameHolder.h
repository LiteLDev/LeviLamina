#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IAppHolder.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

namespace Bedrock {

class GameHolder : public ::Bedrock::IAppHolder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::std::unique_ptr<::IMinecraftGame>()>> mCreateGame;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IMinecraftGame>>                                 mGame;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool createApp() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $createApp();
    // NOLINTEND
};

} // namespace Bedrock
