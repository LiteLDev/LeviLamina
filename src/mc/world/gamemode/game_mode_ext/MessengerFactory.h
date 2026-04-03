#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
struct IGameModeMessenger;
// clang-format on

namespace GameModeExt {

struct MessengerFactory {
public:
    // MessengerFactory inner types define
    using FactoryFunction = ::gsl::not_null<::std::unique_ptr<::IGameModeMessenger> (*)(::Player&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IGameModeMessenger> (*)(::Player&)>> mCreateClientAuth;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IGameModeMessenger> (*)(::Player&)>> mCreateServerAuth;
    // NOLINTEND
};

} // namespace GameModeExt
