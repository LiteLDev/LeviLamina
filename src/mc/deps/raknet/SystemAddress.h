#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {

public:
    // prevent constructor by default
    SystemAddress(SystemAddress const&) = delete;

public:
    /**
     * @symbol ?FixForIPVersion\@SystemAddress\@RakNet\@\@QEAAXAEBU12\@\@Z
     */
    MCAPI void FixForIPVersion(struct RakNet::SystemAddress const&); // NOLINT
    /**
     * @symbol ?FromString\@SystemAddress\@RakNet\@\@QEAA_NPEBDDH\@Z
     */
    MCAPI bool FromString(char const*, char, int); // NOLINT
    /**
     * @symbol ?FromStringExplicitPort\@SystemAddress\@RakNet\@\@QEAA_NPEBDGH\@Z
     */
    MCAPI bool FromStringExplicitPort(char const*, unsigned short, int); // NOLINT
    /**
     * @symbol ?GetIPVersion\@SystemAddress\@RakNet\@\@QEBAEXZ
     */
    MCAPI unsigned char GetIPVersion() const; // NOLINT
    /**
     * @symbol ?GetPort\@SystemAddress\@RakNet\@\@QEBAGXZ
     */
    MCAPI unsigned short GetPort() const; // NOLINT
    /**
     * @symbol ?GetPortNetworkOrder\@SystemAddress\@RakNet\@\@QEBAGXZ
     */
    MCAPI unsigned short GetPortNetworkOrder() const; // NOLINT
    /**
     * @symbol ?IsLinkLocalAddress\@SystemAddress\@RakNet\@\@QEAA_NXZ
     */
    MCAPI bool IsLinkLocalAddress(); // NOLINT
    /**
     * @symbol ?IsLoopback\@SystemAddress\@RakNet\@\@QEBA_NXZ
     */
    MCAPI bool IsLoopback() const; // NOLINT
    /**
     * @symbol ?SetPortHostOrder\@SystemAddress\@RakNet\@\@QEAAXG\@Z
     */
    MCAPI void SetPortHostOrder(unsigned short); // NOLINT
    /**
     * @symbol ??0SystemAddress\@RakNet\@\@QEAA\@XZ
     */
    MCAPI SystemAddress(); // NOLINT
    /**
     * @symbol ??0SystemAddress\@RakNet\@\@QEAA\@PEBDG\@Z
     */
    MCAPI SystemAddress(char const*, unsigned short); // NOLINT
    /**
     * @symbol ?ToString\@SystemAddress\@RakNet\@\@QEBAPEBD_ND\@Z
     */
    MCAPI char const* ToString(bool, char) const; // NOLINT
    /**
     * @symbol ?ToString\@SystemAddress\@RakNet\@\@QEBAX_NPEADD\@Z
     */
    MCAPI void ToString(bool, char*, char) const; // NOLINT
    /**
     * @symbol ?ToString_Old\@SystemAddress\@RakNet\@\@QEBAX_NPEADD\@Z
     */
    MCAPI void ToString_Old(bool, char*, char) const; // NOLINT
    /**
     * @symbol ??9SystemAddress\@RakNet\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct RakNet::SystemAddress const&) const; // NOLINT
    /**
     * @symbol ??4SystemAddress\@RakNet\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct RakNet::SystemAddress& operator=(struct RakNet::SystemAddress const&); // NOLINT
    /**
     * @symbol ??8SystemAddress\@RakNet\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct RakNet::SystemAddress const&) const; // NOLINT
};

}; // namespace RakNet
