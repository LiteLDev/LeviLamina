#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocket {

public:
    // prevent constructor by default
    RakWebSocket& operator=(RakWebSocket const&) = delete;
    RakWebSocket(RakWebSocket const&)            = delete;
    RakWebSocket()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?connect\@RakWebSocket\@\@UEAA?AW4WSConnectionResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual enum class WSConnectionResult connect(std::string const&, std::vector<std::string> const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?connect\@RakWebSocket\@\@UEAA?AW4WSConnectionResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual enum class WSConnectionResult connect(std::string const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?isReady\@RakWebSocket\@\@UEBA_NXZ
     */
    virtual bool isReady() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?setOnMessageReceivedHandler\@RakWebSocket\@\@UEAAXAEBV?$function\@$$A6AXAEBVRakWebSocketDataFrame\@\@\@Z\@std\@\@\@Z
     */
    virtual void
    setOnMessageReceivedHandler(class std::function<void(class RakWebSocketDataFrame const&)> const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?setOnCloseHandler\@RakWebSocket\@\@UEAAXAEBV?$function\@$$A6AXW4CloseStatusCode\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    virtual void
    setOnCloseHandler(class std::function<void(enum class CloseStatusCode, std::string const&)> const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?setOnConnectedHandler\@RakWebSocket\@\@UEAAXAEBV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    virtual void setOnConnectedHandler(class std::function<void(std::string const&)> const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@RakWebSocket\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?_updateState\@RakWebSocketClient\@\@MEAAXXZ
     */
    virtual void _updateState() = 0; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?_genMaskingKey\@RakWebSocketClient\@\@MEBAIXZ
     */
    virtual unsigned int _genMaskingKey() const = 0; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKWEBSOCKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakWebSocket(); // NOLINT
#endif
    /**
     * @symbol
     * ??0RakWebSocket\@\@QEAA\@V?$unique_ptr\@VTcpProxy\@\@U?$default_delete\@VTcpProxy\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy>, bool); // NOLINT
    /**
     * @symbol
     * ?send\@RakWebSocket\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool send(std::string const&); // NOLINT
    /**
     * @symbol ?sendBinary\@RakWebSocket\@\@QEAA_NPEBE_K\@Z
     */
    MCAPI bool sendBinary(unsigned char const*, unsigned __int64); // NOLINT

    // protected:
    /**
     * @symbol ?_close\@RakWebSocket\@\@IEAAXW4CloseStatusCode\@\@\@Z
     */
    MCAPI void _close(enum class CloseStatusCode); // NOLINT
    /**
     * @symbol ?_createWebSocketKey\@RakWebSocket\@\@IEAAXXZ
     */
    MCAPI void _createWebSocketKey(); // NOLINT
    /**
     * @symbol
     * ?_fail\@RakWebSocket\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CloseStatusCode\@\@\@Z
     */
    MCAPI void _fail(std::string const&, enum class CloseStatusCode); // NOLINT
    /**
     * @symbol
     * ?_generateBase64SHA1Key\@RakWebSocket\@\@IEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string _generateBase64SHA1Key(std::string const&); // NOLINT
    /**
     * @symbol ?_invokeOnCloseHandler\@RakWebSocket\@\@IEAAXXZ
     */
    MCAPI void _invokeOnCloseHandler(); // NOLINT
    /**
     * @symbol ?_processClosingHandshake\@RakWebSocket\@\@IEAAX_N\@Z
     */
    MCAPI void _processClosingHandshake(bool); // NOLINT
    /**
     * @symbol ?_processDataFrames\@RakWebSocket\@\@IEAAXAEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void _processDataFrames(class RakNet::BitStream&); // NOLINT
    /**
     * @symbol ?_processPacket\@RakWebSocket\@\@IEAA_NAEBV?$function\@$$A6AXAEAVBitStream\@RakNet\@\@\@Z\@std\@\@_N\@Z
     */
    MCAPI bool _processPacket(class std::function<void(class RakNet::BitStream&)> const&, bool); // NOLINT
    /**
     * @symbol ?_reset\@RakWebSocket\@\@IEAAXXZ
     */
    MCAPI void _reset(); // NOLINT
    /**
     * @symbol ?_sendControlFrame\@RakWebSocket\@\@IEAA_NPEBE_KW4OpCode\@\@\@Z
     */
    MCAPI bool _sendControlFrame(unsigned char const*, unsigned __int64, enum class OpCode); // NOLINT
    /**
     * @symbol ?_sendDataFrame\@RakWebSocket\@\@IEAA_NPEBEIW4OpCode\@\@_N\@Z
     */
    MCAPI bool _sendDataFrame(unsigned char const*, unsigned int, enum class OpCode, bool); // NOLINT
    /**
     * @symbol ?_sendNonControlFrame\@RakWebSocket\@\@IEAA_NPEBE_KW4OpCode\@\@\@Z
     */
    MCAPI bool _sendNonControlFrame(unsigned char const*, unsigned __int64, enum class OpCode); // NOLINT
    /**
     * @symbol
     * ?_splitWebSocketURI\@RakWebSocket\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@11\@Z
     */
    MCAPI void _splitWebSocketURI(std::string const&, std::string&, std::string&, std::string&); // NOLINT
    /**
     * @symbol ?_subProcessHttpResponse\@RakWebSocket\@\@IEAAXAEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void _subProcessHttpResponse(class RakNet::BitStream&); // NOLINT
    /**
     * @symbol ?_validateFields\@RakWebSocket\@\@IEAAXXZ
     */
    MCAPI void _validateFields(); // NOLINT
    /**
     * @symbol ?_validateWebSocketURI\@RakWebSocket\@\@IEAA_NXZ
     */
    MCAPI bool _validateWebSocketURI(); // NOLINT

protected:
};
