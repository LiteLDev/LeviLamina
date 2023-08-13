#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {

public:
    struct {
        char filler[0x80];
    } address;                  // this+0x0
    unsigned short debugPort;   // this+0x80
    unsigned short systemIndex; // this+0x82

public:
    // NOLINTBEGIN
    /**
     * @symbol ?FixForIPVersion\@SystemAddress\@RakNet\@\@QEAAXAEBU12\@\@Z
     */
    MCAPI void FixForIPVersion(struct RakNet::SystemAddress const&);
    /**
     * @symbol ?FromString\@SystemAddress\@RakNet\@\@QEAA_NPEBDDH\@Z
     */
    MCAPI bool FromString(char const*, char, int);
    /**
     * @symbol ?FromStringExplicitPort\@SystemAddress\@RakNet\@\@QEAA_NPEBDGH\@Z
     */
    MCAPI bool FromStringExplicitPort(char const*, unsigned short, int);
    /**
     * @symbol ?GetIPVersion\@SystemAddress\@RakNet\@\@QEBAEXZ
     */
    MCAPI unsigned char GetIPVersion() const;
    /**
     * @symbol ?GetPort\@SystemAddress\@RakNet\@\@QEBAGXZ
     */
    MCAPI unsigned short GetPort() const;
    /**
     * @symbol ?GetPortNetworkOrder\@SystemAddress\@RakNet\@\@QEBAGXZ
     */
    MCAPI unsigned short GetPortNetworkOrder() const;
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
    MCAPI void SetPortHostOrder(unsigned short);
    /**
     * @symbol ??0SystemAddress\@RakNet\@\@QEAA\@XZ
     */
    MCAPI SystemAddress();
    /**
     * @symbol ??0SystemAddress\@RakNet\@\@QEAA\@PEBDG\@Z
     */
    MCAPI SystemAddress(char const*, unsigned short);
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
