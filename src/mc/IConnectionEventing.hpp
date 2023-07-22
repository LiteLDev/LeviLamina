/**
 * @file  IConnectionEventing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IConnectionEventing.
 *
 */
class IConnectionEventing {

#define AFTER_EXTRA
// Add Member There
public:
enum class ServerConnectionOutcome;
enum class PlayerJoinWorldAttemptState;
enum class ConnectionFailureReason;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONNECTIONEVENTING
public:
    class IConnectionEventing& operator=(class IConnectionEventing const &) = delete;
    IConnectionEventing(class IConnectionEventing const &) = delete;
    IConnectionEventing() = delete;
#endif

public:

};