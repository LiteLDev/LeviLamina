#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/PacketObserver.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetStatistics; }
// clang-format on

class NetworkStatistics : public ::PacketObserver {

public:
    // prevent constructor by default
    NetworkStatistics& operator=(NetworkStatistics const&) = delete;
    NetworkStatistics(NetworkStatistics const&)            = delete;
    NetworkStatistics()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?packetSentTo\@NetworkStatistics\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@I\@Z
     */
    virtual void packetSentTo(class NetworkIdentifier const&, class Packet const&, unsigned int);
    /**
     * @vftbl 2
     * @symbol ?packetReceivedFrom\@NetworkStatistics\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@I\@Z
     */
    virtual void packetReceivedFrom(class NetworkIdentifier const&, class Packet const&, unsigned int);
    /**
     * @vftbl 3
     * @symbol
     * ?dataSentTo\@NetworkStatistics\@\@UEAAXAEBVNetworkIdentifier\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void dataSentTo(class NetworkIdentifier const&, std::string_view);
    /**
     * @vftbl 4
     * @symbol
     * ?dataReceivedFrom\@NetworkStatistics\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void dataReceivedFrom(class NetworkIdentifier const&, std::string const&);
    /**
     * @vftbl 5
     * @symbol ?reset\@NetworkStatistics\@\@UEAAXXZ
     */
    virtual void reset();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKSTATISTICS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkStatistics();
#endif
    /**
     * @symbol
     * ??0NetworkStatistics\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VNetworkSystem\@\@\@Bedrock\@\@\@gsl\@\@W4TrackerType\@\@$$QEAV?$function\@$$A6A_NAEAURakNetStatistics\@RakNet\@\@\@Z\@std\@\@V?$not_null\@V?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@\@2\@\@Z
     */
    MCAPI
    NetworkStatistics(class gsl::not_null<class Bedrock::NonOwnerPointer<class NetworkSystem>>, enum class TrackerType, std::function<bool(struct RakNet::RakNetStatistics&)>&&, class gsl::not_null<class Bedrock::NonOwnerPointer<class NetworkDebugManager>>);
    /**
     * @symbol
     * ?getVerboseInfo\@NetworkStatistics\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getVerboseInfo() const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_clearCSVStats\@NetworkStatistics\@\@AEAAXXZ
     */
    MCAPI void _clearCSVStats();
    /**
     * @symbol ?_initRakNetProfileTracking\@NetworkStatistics\@\@AEAAXXZ
     */
    MCAPI void _initRakNetProfileTracking();
    // NOLINTEND
};
