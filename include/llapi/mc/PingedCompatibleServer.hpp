/**
 * @file  PingedCompatibleServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PingedCompatibleServer.
 *
 */
struct PingedCompatibleServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PINGEDCOMPATIBLESERVER
public:
    struct PingedCompatibleServer& operator=(struct PingedCompatibleServer const &) = delete;
    PingedCompatibleServer() = delete;
#endif

public:
    /**
     * @symbol  ??0PingedCompatibleServer\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer const &);
    /**
     * @symbol  ??0PingedCompatibleServer\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer &&);
    /**
     * @symbol  ??4PingedCompatibleServer\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PingedCompatibleServer & operator=(struct PingedCompatibleServer &&);
    /**
     * @symbol  ??1PingedCompatibleServer\@\@QEAA\@XZ
     */
    MCAPI ~PingedCompatibleServer();

};