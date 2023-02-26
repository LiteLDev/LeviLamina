/**
 * @file  HC_WEBSOCKET.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?AddRef\@HC_WEBSOCKET\@\@QEAAXXZ
     */
    MCAPI void AddRef();
    /**
     * @symbol  ?Connect\@HC_WEBSOCKET\@\@QEAAJPEBD0PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long Connect(char const *, char const *, struct XAsyncBlock *);
    /**
     * @symbol  ?DecRef\@HC_WEBSOCKET\@\@QEAAXXZ
     */
    MCAPI void DecRef();
    /**
     * @symbol  ?Disconnect\@HC_WEBSOCKET\@\@QEAAJXZ
     */
    MCAPI long Disconnect();
    /**
     * @symbol  ?Headers\@HC_WEBSOCKET\@\@QEBAAEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@V12\@Uhttp_header_compare\@\@V?$http_stl_allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@V12\@\@std\@\@\@\@\@std\@\@XZ
     */
    MCAPI class std::map<class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>, struct http_header_compare, class http_stl_allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>>>> const & Headers() const;
    /**
     * @symbol  ?ProxyDecryptsHttps\@HC_WEBSOCKET\@\@QEBA?B_NXZ
     */
    MCAPI bool const ProxyDecryptsHttps() const;
    /**
     * @symbol  ?ProxyUri\@HC_WEBSOCKET\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const & ProxyUri() const;
    /**
     * @symbol  ?Send\@HC_WEBSOCKET\@\@QEAAJPEBDPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long Send(char const *, struct XAsyncBlock *);
    /**
     * @symbol  ?Uri\@HC_WEBSOCKET\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const & Uri() const;
    /**
     * @symbol  ?BinaryMessageFunc\@HC_WEBSOCKET\@\@SAXPEAU1\@PEBEIPEAX\@Z
     */
    MCAPI static void BinaryMessageFunc(struct HC_WEBSOCKET *, unsigned char const *, unsigned int, void *);
    /**
     * @symbol  ?CloseFunc\@HC_WEBSOCKET\@\@SAXPEAU1\@W4HCWebSocketCloseStatus\@\@PEAX\@Z
     */
    MCAPI static void CloseFunc(struct HC_WEBSOCKET *, enum class HCWebSocketCloseStatus, void *);
    /**
     * @symbol  ?MessageFunc\@HC_WEBSOCKET\@\@SAXPEAU1\@PEBDPEAX\@Z
     */
    MCAPI static void MessageFunc(struct HC_WEBSOCKET *, char const *, void *);

};