/**
 * @file  NetworkSession.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetworkSession {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSESSION
public:
    class NetworkSession& operator=(class NetworkSession const &) = delete;
    NetworkSession(class NetworkSession const &) = delete;
    NetworkSession() = delete;
#endif

public:
    /**
     * @symbol ??0NetworkSession\@\@QEAA\@W4TransportLayer\@\@\@Z
     */
    MCAPI NetworkSession(enum class TransportLayer);
    /**
     * @symbol ?getTransportLayer\@NetworkSession\@\@QEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer getTransportLayer() const;

};
