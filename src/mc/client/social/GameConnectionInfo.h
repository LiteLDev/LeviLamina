#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GatheringServerInfo;
class ThirdPartyInfo;
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace Social {

class GameConnectionInfo {

public:
    // prevent constructor by default
    GameConnectionInfo(GameConnectionInfo const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0GameConnectionInfo\@Social\@\@QEAA\@XZ
     */
    MCAPI GameConnectionInfo();
    /**
     * @symbol
     * ??0GameConnectionInfo\@Social\@\@QEAA\@USystemAddress\@RakNet\@\@AEBVThirdPartyInfo\@\@AEBVGatheringServerInfo\@\@\@Z
     */
    MCAPI
    GameConnectionInfo(struct RakNet::SystemAddress, class ThirdPartyInfo const&, class GatheringServerInfo const&);
    /**
     * @symbol ??4GameConnectionInfo\@Social\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class Social::GameConnectionInfo& operator=(class Social::GameConnectionInfo const&);
    /**
     * @symbol ?typeAsString\@GameConnectionInfo\@Social\@\@QEBAPEBDXZ
     */
    MCAPI char const* typeAsString() const;
    /**
     * @symbol ??1GameConnectionInfo\@Social\@\@QEAA\@XZ
     */
    MCAPI ~GameConnectionInfo();
    // NOLINTEND
};

}; // namespace Social
