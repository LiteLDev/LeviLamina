/**
 * @file  NetworkSessionOwner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetworkSessionOwner {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSESSIONOWNER
public:
    class NetworkSessionOwner& operator=(class NetworkSessionOwner const &) = delete;
    NetworkSessionOwner(class NetworkSessionOwner const &) = delete;
#endif

public:
    /**
     * @symbol ??0NetworkSessionOwner\@\@QEAA\@XZ
     */
    MCAPI NetworkSessionOwner();
    /**
     * @symbol ?getTransportLayer\@NetworkSessionOwner\@\@QEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer getTransportLayer() const;

};
