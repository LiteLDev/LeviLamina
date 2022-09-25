/**
 * @file  HC_WEBSOCKET.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure HC_WEBSOCKET.
 *
 */
struct HC_WEBSOCKET {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HC_WEBSOCKET
public:
    struct HC_WEBSOCKET& operator=(struct HC_WEBSOCKET const &) = delete;
    HC_WEBSOCKET(struct HC_WEBSOCKET const &) = delete;
    HC_WEBSOCKET() = delete;
#endif

public:
    /**
     * @hash   -1447969611
     * @symbol ?AddRef@HC_WEBSOCKET@@QEAAXXZ
     */
    MCAPI void AddRef();
    /**
     * @hash   -1027494854
     * @symbol ?Connect@HC_WEBSOCKET@@QEAAJPEBD0PEAUXAsyncBlock@@@Z
     */
    MCAPI long Connect(char const *, char const *, struct XAsyncBlock *);
    /**
     * @hash   -428423131
     * @symbol ?DecRef@HC_WEBSOCKET@@QEAAXXZ
     */
    MCAPI void DecRef();
    /**
     * @hash   1075410715
     * @symbol ?Disconnect@HC_WEBSOCKET@@QEAAJXZ
     */
    MCAPI long Disconnect();
    /**
     * @hash   1059707281
     * @symbol ?Headers@HC_WEBSOCKET@@QEBAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@V12@Uhttp_header_compare@@V?$http_stl_allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@V12@@std@@@@@std@@XZ
     */
    MCAPI class std::map<class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>, struct http_header_compare, class http_stl_allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>>>> const & Headers() const;
    /**
     * @hash   -2099493488
     * @symbol ?ProxyDecryptsHttps@HC_WEBSOCKET@@QEBA?B_NXZ
     */
    MCAPI bool const ProxyDecryptsHttps() const;
    /**
     * @hash   -1297154047
     * @symbol ?ProxyUri@HC_WEBSOCKET@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@XZ
     */
    MCAPI class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const & ProxyUri() const;
    /**
     * @hash   1420638793
     * @symbol ?Send@HC_WEBSOCKET@@QEAAJPEBDPEAUXAsyncBlock@@@Z
     */
    MCAPI long Send(char const *, struct XAsyncBlock *);
    /**
     * @hash   -1389884540
     * @symbol ?BinaryMessageFunc@HC_WEBSOCKET@@SAXPEAU1@PEBEIPEAX@Z
     */
    MCAPI static void BinaryMessageFunc(struct HC_WEBSOCKET *, unsigned char const *, unsigned int, void *);
    /**
     * @hash   590858384
     * @symbol ?CloseFunc@HC_WEBSOCKET@@SAXPEAU1@W4HCWebSocketCloseStatus@@PEAX@Z
     */
    MCAPI static void CloseFunc(struct HC_WEBSOCKET *, enum HCWebSocketCloseStatus, void *);
    /**
     * @hash   -864957427
     * @symbol ?MessageFunc@HC_WEBSOCKET@@SAXPEAU1@PEBDPEAX@Z
     */
    MCAPI static void MessageFunc(struct HC_WEBSOCKET *, char const *, void *);

};