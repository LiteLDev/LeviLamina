/**
 * @file  RakWebSocket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~RakWebSocket();
    /**
     * @hash   1842597068
     * @vftbl  1
     * @symbol  ?connect\@RakWebSocket\@\@UEAA?AW4WSConnectionResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual enum class WSConnectionResult connect(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   1421809539
     * @vftbl  2
     * @symbol  ?connect\@RakWebSocket\@\@UEAA?AW4WSConnectionResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual enum class WSConnectionResult connect(std::string const &);
    /**
     * @hash   -2091437850
     * @vftbl  3
     * @symbol  ?isReady\@RakWebSocket\@\@UEBA_NXZ
     */
    virtual bool isReady() const;
    /**
     * @hash   -398787007
     * @vftbl  4
     * @symbol  ?setOnMessageReceivedHandler\@RakWebSocket\@\@UEAAXAEBV?$function\@$$A6AXAEBVRakWebSocketDataFrame\@\@\@Z\@std\@\@\@Z
     */
    virtual void setOnMessageReceivedHandler(class std::function<void (class RakWebSocketDataFrame const &)> const &);
    /**
     * @hash   818669054
     * @vftbl  5
     * @symbol  ?setOnCloseHandler\@RakWebSocket\@\@UEAAXAEBV?$function\@$$A6AXW4CloseStatusCode\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    virtual void setOnCloseHandler(class std::function<void (enum class CloseStatusCode, std::string const &)> const &);
    /**
     * @hash   812903075
     * @vftbl  6
     * @symbol  ?setOnConnectedHandler\@RakWebSocket\@\@UEAAXAEBV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    virtual void setOnConnectedHandler(class std::function<void (std::string const &)> const &);
    /**
     * @hash   -189126151
     * @vftbl  7
     * @symbol  ?tick\@RakWebSocket\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -400294103
     * @vftbl  8
     * @symbol  ?_updateState\@RakWebSocketClient\@\@MEAAXXZ
     */
    virtual void _updateState() = 0;
    /**
     * @hash   1983950249
     * @vftbl  9
     * @symbol  ?_genMaskingKey\@RakWebSocketClient\@\@MEBAIXZ
     */
    virtual unsigned int _genMaskingKey() const = 0;
    /**
     * @hash   1185217265
     * @symbol  ??0RakWebSocket\@\@QEAA\@V?$unique_ptr\@VTcpProxy\@\@U?$default_delete\@VTcpProxy\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy>, bool);
    /**
     * @hash   865051758
     * @symbol  ?close\@RakWebSocket\@\@QEAAX_N0\@Z
     */
    MCAPI void close(bool, bool);
    /**
     * @hash   -1359785774
     * @symbol  ?getUri\@RakWebSocket\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getUri() const;
    /**
     * @hash   -334673166
     * @symbol  ?isDisconnected\@RakWebSocket\@\@QEBA_NXZ
     */
    MCAPI bool isDisconnected() const;
    /**
     * @hash   851716921
     * @symbol  ?send\@RakWebSocket\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool send(std::string const &);
    /**
     * @hash   573793534
     * @symbol  ?sendBinary\@RakWebSocket\@\@QEAA_NPEBE_K\@Z
     */
    MCAPI bool sendBinary(unsigned char const *, unsigned __int64);

//protected:
    /**
     * @hash   -1739714910
     * @symbol  ?_close\@RakWebSocket\@\@IEAAXW4CloseStatusCode\@\@\@Z
     */
    MCAPI void _close(enum class CloseStatusCode);
    /**
     * @hash   1938742635
     * @symbol  ?_createWebSocketKey\@RakWebSocket\@\@IEAAXXZ
     */
    MCAPI void _createWebSocketKey();
    /**
     * @hash   -1102708116
     * @symbol  ?_fail\@RakWebSocket\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CloseStatusCode\@\@\@Z
     */
    MCAPI void _fail(std::string const &, enum class CloseStatusCode);
    /**
     * @hash   1782713409
     * @symbol  ?_generateBase64SHA1Key\@RakWebSocket\@\@IEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string _generateBase64SHA1Key(std::string const &);
    /**
     * @hash   -1451096368
     * @symbol  ?_invokeOnCloseHandler\@RakWebSocket\@\@IEAAXXZ
     */
    MCAPI void _invokeOnCloseHandler();
    /**
     * @hash   -349416131
     * @symbol  ?_processClosingFrames\@RakWebSocket\@\@IEAAXAEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void _processClosingFrames(class RakNet::BitStream &);
    /**
     * @hash   365912890
     * @symbol  ?_processClosingHandshake\@RakWebSocket\@\@IEAAX_N\@Z
     */
    MCAPI void _processClosingHandshake(bool);
    /**
     * @hash   1643283880
     * @symbol  ?_processDataFrames\@RakWebSocket\@\@IEAAXAEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void _processDataFrames(class RakNet::BitStream &);
    /**
     * @hash   1687032858
     * @symbol  ?_processOpenHandshakePackets\@RakWebSocket\@\@IEAAXAEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void _processOpenHandshakePackets(class RakNet::BitStream &);
    /**
     * @hash   -1760528665
     * @symbol  ?_processPacket\@RakWebSocket\@\@IEAA_NAEBV?$function\@$$A6AXAEAVBitStream\@RakNet\@\@\@Z\@std\@\@_N\@Z
     */
    MCAPI bool _processPacket(class std::function<void (class RakNet::BitStream &)> const &, bool);
    /**
     * @hash   -204681752
     * @symbol  ?_reset\@RakWebSocket\@\@IEAAXXZ
     */
    MCAPI void _reset();
    /**
     * @hash   1396708709
     * @symbol  ?_sendControlFrame\@RakWebSocket\@\@IEAA_NPEBE_KW4OpCode\@\@\@Z
     */
    MCAPI bool _sendControlFrame(unsigned char const *, unsigned __int64, enum class OpCode);
    /**
     * @hash   -1726993630
     * @symbol  ?_sendDataFrame\@RakWebSocket\@\@IEAA_NPEBEIW4OpCode\@\@_N\@Z
     */
    MCAPI bool _sendDataFrame(unsigned char const *, unsigned int, enum class OpCode, bool);
    /**
     * @hash   -855462586
     * @symbol  ?_sendNonControlFrame\@RakWebSocket\@\@IEAA_NPEBE_KW4OpCode\@\@\@Z
     */
    MCAPI bool _sendNonControlFrame(unsigned char const *, unsigned __int64, enum class OpCode);
    /**
     * @hash   771719307
     * @symbol  ?_splitWebSocketURI\@RakWebSocket\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@11\@Z
     */
    MCAPI void _splitWebSocketURI(std::string const &, std::string &, std::string &, std::string &);
    /**
     * @hash   465953393
     * @symbol  ?_subProcessHttpResponse\@RakWebSocket\@\@IEAAXAEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void _subProcessHttpResponse(class RakNet::BitStream &);
    /**
     * @hash   -1980673210
     * @symbol  ?_validateFields\@RakWebSocket\@\@IEAAXXZ
     */
    MCAPI void _validateFields();
    /**
     * @hash   787009468
     * @symbol  ?_validateWebSocketURI\@RakWebSocket\@\@IEAA_NXZ
     */
    MCAPI bool _validateWebSocketURI();

protected:

};