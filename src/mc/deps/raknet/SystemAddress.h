#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {

public:
    // prevent constructor by default
    SystemAddress(SystemAddress const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?FixForIPVersion\@SystemAddress\@RakNet\@\@QEAAXAEBU12\@\@Z
     */
    MCAPI void FixForIPVersion(struct RakNet::SystemAddress const&);
    /**
     * @symbol ?FromString\@SystemAddress\@RakNet\@\@QEAA_NPEBDDH\@Z
     */
    MCAPI bool FromString(char const*, char, int32_t);
    /**
     * @symbol ?FromStringExplicitPort\@SystemAddress\@RakNet\@\@QEAA_NPEBDGH\@Z
     */
    MCAPI bool FromStringExplicitPort(char const*, uint16_t, int32_t);
    /**
     * @symbol ?GetIPVersion\@SystemAddress\@RakNet\@\@QEBAEXZ
     */
    MCAPI uint8_t GetIPVersion() const;
    /**
     * @symbol ?GetPort\@SystemAddress\@RakNet\@\@QEBAGXZ
     */
    MCAPI uint16_t GetPort() const;
    /**
     * @symbol ?GetPortNetworkOrder\@SystemAddress\@RakNet\@\@QEBAGXZ
     */
    MCAPI uint16_t GetPortNetworkOrder() const;
    /**
     * @symbol ?IsLinkLocalAddress\@SystemAddress\@RakNet\@\@QEAA_NXZ
     */
    MCAPI bool IsLinkLocalAddress();
    /**
     * @symbol ?IsLoopback\@SystemAddress\@RakNet\@\@QEBA_NXZ
     */
    MCAPI bool IsLoopback() const;
    /**
     * @symbol ?SetPortHostOrder\@SystemAddress\@RakNet\@\@QEAAXG\@Z
     */
    MCAPI void SetPortHostOrder(uint16_t);
    /**
     * @symbol ??0SystemAddress\@RakNet\@\@QEAA\@XZ
     */
    MCAPI SystemAddress();
    /**
     * @symbol ??0SystemAddress\@RakNet\@\@QEAA\@PEBDG\@Z
     */
    MCAPI SystemAddress(char const*, uint16_t);
    /**
     * @symbol ?ToString\@SystemAddress\@RakNet\@\@QEBAX_NPEADD\@Z
     */
    MCAPI void ToString(bool, char*, char) const;
    /**
     * @symbol ?ToString\@SystemAddress\@RakNet\@\@QEBAPEBD_ND\@Z
     */
    MCAPI char const* ToString(bool, char) const;
    /**
     * @symbol ?ToString_Old\@SystemAddress\@RakNet\@\@QEBAX_NPEADD\@Z
     */
    MCAPI void ToString_Old(bool, char*, char) const;
    /**
     * @symbol ??9SystemAddress\@RakNet\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct RakNet::SystemAddress const&) const;
    /**
     * @symbol ??4SystemAddress\@RakNet\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct RakNet::SystemAddress& operator=(struct RakNet::SystemAddress const&);
    /**
     * @symbol ??8SystemAddress\@RakNet\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct RakNet::SystemAddress const&) const;
    // NOLINTEND
};

}; // namespace RakNet
