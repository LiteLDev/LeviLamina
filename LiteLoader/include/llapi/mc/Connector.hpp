/**
 * @file  MC/Connector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Connector.
 *
 */
class Connector {

#define AFTER_EXTRA
// Add Member There
public:
class ConnectionStateListener {
public:
    ConnectionStateListener() = delete;
    ConnectionStateListener(ConnectionStateListener const&) = delete;
    ConnectionStateListener(ConnectionStateListener const&&) = delete;
};
struct NatPunchInfo {
    NatPunchInfo() = delete;
    NatPunchInfo(NatPunchInfo const&) = delete;
    NatPunchInfo(NatPunchInfo const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTOR
public:
    class Connector& operator=(class Connector const &) = delete;
    Connector(class Connector const &) = delete;
    Connector() = delete;
#endif

public:

};