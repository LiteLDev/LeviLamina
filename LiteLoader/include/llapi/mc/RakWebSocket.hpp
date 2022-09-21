/**
 * @file  MC/RakWebSocket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakWebSocket.
 *
 */
class RakWebSocket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKET
public:
    class RakWebSocket& operator=(class RakWebSocket const &) = delete;
    RakWebSocket(class RakWebSocket const &) = delete;
    RakWebSocket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RakWebSocket();
    /**
     * @hash   -1400882468
     * @vftbl  1
     * @symbol ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     */
    virtual enum WSConnectionResult connect(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   -1821654621
     * @vftbl  2
     * @symbol ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual enum WSConnectionResult connect(std::string const &);
    /**
     * @hash   -1039934714
     * @vftbl  3
     * @symbol ?isReady@RakWebSocket@@UEBA_NXZ
     */
    virtual bool isReady() const;
    /**
     * @hash   652516241
     * @vftbl  4
     * @symbol ?setOnMessageReceivedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBVRakWebSocketDataFrame@@@Z@std@@@Z
     */
    virtual void setOnMessageReceivedHandler(class std::function<void (class RakWebSocketDataFrame const &)> const &);
    /**
     * @hash   1870156814
     * @vftbl  5
     * @symbol ?setOnCloseHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXW4CloseStatusCode@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     */
    virtual void setOnCloseHandler(class std::function<void (enum CloseStatusCode, std::string const &)> const &);
    /**
     * @hash   1864298579
     * @vftbl  6
     * @symbol ?setOnConnectedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     */
    virtual void setOnConnectedHandler(class std::function<void (std::string const &)> const &);
    /**
     * @hash   862084841
     * @vftbl  7
     * @symbol ?tick@RakWebSocket@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -400294103
     * @vftbl  8
     * @symbol ?_updateState@RakWebSocketClient@@MEAAXXZ
     */
    virtual void _updateState() = 0;
    /**
     * @hash   1983950249
     * @vftbl  9
     * @symbol ?_genMaskingKey@RakWebSocketClient@@MEBAIXZ
     */
    virtual unsigned int _genMaskingKey() const = 0;
    /**
     * @hash   -2056863055
     * @symbol ??0RakWebSocket@@QEAA@V?$unique_ptr@VTcpProxy@@U?$default_delete@VTcpProxy@@@std@@@std@@_N@Z
     */
    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy>, bool);
    /**
     * @hash   1916478014
     * @symbol ?close@RakWebSocket@@QEAAX_N0@Z
     */
    MCAPI void close(bool, bool);
    /**
     * @hash   -308282638
     * @symbol ?getUri@RakWebSocket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getUri() const;
    /**
     * @hash   716829970
     * @symbol ?isDisconnected@RakWebSocket@@QEBA_NXZ
     */
    MCAPI bool isDisconnected() const;
    /**
     * @hash   1903220057
     * @symbol ?send@RakWebSocket@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool send(std::string const &);
    /**
     * @hash   1625281294
     * @symbol ?sendBinary@RakWebSocket@@QEAA_NPEBE_K@Z
     */
    MCAPI bool sendBinary(unsigned char const *, unsigned __int64);

//protected:
    /**
     * @hash   -686874062
     * @symbol ?_close@RakWebSocket@@IEAAXW4CloseStatusCode@@@Z
     */
    MCAPI void _close(enum CloseStatusCode);
    /**
     * @hash   -1303230053
     * @symbol ?_createWebSocketKey@RakWebSocket@@IEAAXXZ
     */
    MCAPI void _createWebSocketKey();
    /**
     * @hash   -49698132
     * @symbol ?_fail@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CloseStatusCode@@@Z
     */
    MCAPI void _fail(std::string const &, enum CloseStatusCode);
    /**
     * @hash   -1459243903
     * @symbol ?_generateBase64SHA1Key@RakWebSocket@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string _generateBase64SHA1Key(std::string const &);
    /**
     * @hash   703501597
     * @symbol ?_processClosingFrames@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     */
    MCAPI void _processClosingFrames(class RakNet::BitStream &);
    /**
     * @hash   1418830618
     * @symbol ?_processClosingHandshake@RakWebSocket@@IEAAX_N@Z
     */
    MCAPI void _processClosingHandshake(bool);
    /**
     * @hash   -1598704184
     * @symbol ?_processDataFrames@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     */
    MCAPI void _processDataFrames(class RakNet::BitStream &);
    /**
     * @hash   -1554985958
     * @symbol ?_processOpenHandshakePackets@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     */
    MCAPI void _processOpenHandshakePackets(class RakNet::BitStream &);
    /**
     * @hash   -707595561
     * @symbol ?_processPacket@RakWebSocket@@IEAA_NAEBV?$function@$$A6AXAEAVBitStream@RakNet@@@Z@std@@_N@Z
     */
    MCAPI bool _processPacket(class std::function<void (class RakNet::BitStream &)> const &, bool);
    /**
     * @hash   848220600
     * @symbol ?_reset@RakWebSocket@@IEAAXXZ
     */
    MCAPI void _reset();
    /**
     * @hash   -1845371611
     * @symbol ?_sendControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
     */
    MCAPI bool _sendControlFrame(unsigned char const *, unsigned __int64, enum OpCode);
    /**
     * @hash   -674183534
     * @symbol ?_sendDataFrame@RakWebSocket@@IEAA_NPEBEIW4OpCode@@_N@Z
     */
    MCAPI bool _sendDataFrame(unsigned char const *, unsigned int, enum OpCode, bool);
    /**
     * @hash   197347510
     * @symbol ?_sendNonControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
     */
    MCAPI bool _sendNonControlFrame(unsigned char const *, unsigned __int64, enum OpCode);
    /**
     * @hash   1824514027
     * @symbol ?_splitWebSocketURI@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@11@Z
     */
    MCAPI void _splitWebSocketURI(std::string const &, std::string &, std::string &, std::string &);
    /**
     * @hash   1518409841
     * @symbol ?_subProcessHttpResponse@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     */
    MCAPI void _subProcessHttpResponse(class RakNet::BitStream &);
    /**
     * @hash   -928232138
     * @symbol ?_validateFields@RakWebSocket@@IEAAXXZ
     */
    MCAPI void _validateFields();
    /**
     * @hash   1838835500
     * @symbol ?_validateWebSocketURI@RakWebSocket@@IEAA_NXZ
     */
    MCAPI bool _validateWebSocketURI();

protected:

};