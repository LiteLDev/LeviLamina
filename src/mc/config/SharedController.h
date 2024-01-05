#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/config/SharedData.h"

// auto generated inclusion list
#include "mc/config/ISharedController.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

namespace PlayerCapabilities {

class SharedController : public ::PlayerCapabilities::ISharedController {
public:
    std::unique_ptr<struct PlayerCapabilities::ISharedData> mShared;

    // prevent constructor by default
    SharedController& operator=(SharedController const&);
    SharedController(SharedController const&);
    SharedController();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SharedController@PlayerCapabilities@@UEAA@XZ
    virtual ~SharedController() = default;

    // vIndex: 1, symbol: ?canChat@SharedController@PlayerCapabilities@@UEBA_NAEBUIPlayerData@2@@Z
    virtual bool canChat(struct PlayerCapabilities::IPlayerData const& player) const;

    // vIndex: 2, symbol: ?canTell@SharedController@PlayerCapabilities@@UEBA_NAEBUIPlayerData@2@@Z
    virtual bool canTell(struct PlayerCapabilities::IPlayerData const& player) const;

    // vIndex: 3, symbol: ?canOpenChat@SharedController@PlayerCapabilities@@UEBA_NAEBUIPlayerData@2@@Z
    virtual bool canOpenChat(struct PlayerCapabilities::IPlayerData const& player) const;

    // NOLINTEND
};

}; // namespace PlayerCapabilities
