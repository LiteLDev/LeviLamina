#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
namespace RakNet { enum class StartupResult; }
namespace RakNet { struct SocketDescriptor; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class RakPeerHelper {
public:
    // RakPeerHelper inner types declare
    // clang-format off
    class IPSupportInterface;
    // clang-format on

    // RakPeerHelper inner types define
    enum class PeerPurpose {};

    class IPSupportInterface {

    public:
        // prevent constructor by default
        IPSupportInterface& operator=(IPSupportInterface const&) = delete;
        IPSupportInterface(IPSupportInterface const&)            = delete;
        IPSupportInterface()                                     = delete;

    public:
        // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKPEERHELPER_IPSUPPORTINTERFACE
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~IPSupportInterface();
#endif
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RakPeerHelper& operator=(RakPeerHelper const&) = delete;
    RakPeerHelper(RakPeerHelper const&)            = delete;
    RakPeerHelper()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RakPeerHelper\@\@QEAA\@AEAVIPSupportInterface\@0\@\@Z
     */
    MCAPI RakPeerHelper(class RakPeerHelper::IPSupportInterface&);
    /**
     * @symbol ?getConnectionIndex\@RakPeerHelper\@\@QEBAHAEBVGameConnectionInfo\@Social\@\@\@Z
     */
    MCAPI int getConnectionIndex(class Social::GameConnectionInfo const&) const;
    /**
     * @symbol ?getIPv4BoundPort\@RakPeerHelper\@\@QEBAGXZ
     */
    MCAPI unsigned short getIPv4BoundPort() const;
    /**
     * @symbol ?getIPv4ConnectionIndex\@RakPeerHelper\@\@QEBAHXZ
     */
    MCAPI int getIPv4ConnectionIndex() const;
    /**
     * @symbol ?getIPv6BoundPort\@RakPeerHelper\@\@QEBAGXZ
     */
    MCAPI unsigned short getIPv6BoundPort() const;
    /**
     * @symbol ?isIPv4Supported\@RakPeerHelper\@\@QEBA_NXZ
     */
    MCAPI bool isIPv4Supported() const;
    /**
     * @symbol ?isIPv6Supported\@RakPeerHelper\@\@QEBA_NXZ
     */
    MCAPI bool isIPv6Supported() const;
    /**
     * @symbol
     * ?peerStartup\@RakPeerHelper\@\@QEAA?AW4StartupResult\@RakNet\@\@PEAVRakPeerInterface\@3\@AEBUConnectionDefinition\@\@W4PeerPurpose\@1\@\@Z
     */
    MCAPI enum class RakNet::StartupResult peerStartup(
        class RakNet::RakPeerInterface*,
        struct ConnectionDefinition const&,
        enum class RakPeerHelper::PeerPurpose
    );
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?LogIPSupport\@RakPeerHelper\@\@AEAAXW4PeerPurpose\@1\@\@Z
     */
    MCAPI void LogIPSupport(enum class RakPeerHelper::PeerPurpose);
    /**
     * @symbol ?_resetToIPv6Only\@RakPeerHelper\@\@AEAAXV?$span\@USocketDescriptor\@RakNet\@\@$01\@gsl\@\@AEAH\@Z
     */
    MCAPI void _resetToIPv6Only(class gsl::span<struct RakNet::SocketDescriptor, 2>, int&);
    /**
     * @symbol
     * ?_startupInternal\@RakPeerHelper\@\@AEAA?AW4StartupResult\@RakNet\@\@V?$not_null\@PEAVRakPeerInterface\@RakNet\@\@\@gsl\@\@AEBUConnectionDefinition\@\@PEAUSocketDescriptor\@3\@AEAHH\@Z
     */
    MCAPI enum class RakNet::StartupResult _startupInternal(
        class gsl::not_null<class RakNet::RakPeerInterface*>,
        struct ConnectionDefinition const&,
        struct RakNet::SocketDescriptor*,
        int&,
        int
    );
    // NOLINTEND
};
