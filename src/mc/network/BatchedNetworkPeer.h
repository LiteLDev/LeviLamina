#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkPeer.h"

class BatchedNetworkPeer : public ::NetworkPeer {
public:
    // BatchedNetworkPeer inner types declare
    // clang-format off
    struct DataCallback;
    // clang-format on

    // BatchedNetworkPeer inner types define
    struct DataCallback {

    public:
        // prevent constructor by default
        DataCallback& operator=(DataCallback const&) = delete;
        DataCallback(DataCallback const&)            = delete;
        DataCallback()                               = delete;

    public:
        /**
         * @symbol ??0DataCallback\@BatchedNetworkPeer\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI DataCallback(struct BatchedNetworkPeer::DataCallback&&); // NOLINT
        /**
         * @symbol ??4DataCallback\@BatchedNetworkPeer\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct BatchedNetworkPeer::DataCallback& operator=(struct BatchedNetworkPeer::DataCallback&&); // NOLINT
        /**
         * @symbol ??1DataCallback\@BatchedNetworkPeer\@\@QEAA\@XZ
         */
        MCAPI ~DataCallback(); // NOLINT
    };

public:
    // prevent constructor by default
    BatchedNetworkPeer& operator=(BatchedNetworkPeer const&) = delete;
    BatchedNetworkPeer(BatchedNetworkPeer const&)            = delete;
    BatchedNetworkPeer()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?sendPacket\@BatchedNetworkPeer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
     */
    virtual void
    sendPacket(std::string const&, enum class NetworkPeer::Reliability, enum class Compressibility); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?receivePacket\@BatchedNetworkPeer\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@5\@\@Z
     */
    virtual enum class NetworkPeer::DataStatus
    receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getNetworkStatus\@BatchedNetworkPeer\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?update\@BatchedNetworkPeer\@\@UEAAXXZ
     */
    virtual void update(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?flush\@BatchedNetworkPeer\@\@UEAAX$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void flush(class std::function<void(void)>&&); // NOLINT
    /**
     * @symbol ??0BatchedNetworkPeer\@\@QEAA\@V?$shared_ptr\@VNetworkPeer\@\@\@std\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI BatchedNetworkPeer(class std::shared_ptr<class NetworkPeer>, class Scheduler&); // NOLINT
    /**
     * @symbol ?setAsyncEnabled\@BatchedNetworkPeer\@\@QEAAX_N\@Z
     */
    MCAPI void setAsyncEnabled(bool); // NOLINT

    // private:
    /**
     * @symbol ?_startSendTask\@BatchedNetworkPeer\@\@AEAAXXZ
     */
    MCAPI void _startSendTask(); // NOLINT

private:
};
