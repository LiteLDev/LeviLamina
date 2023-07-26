/**
 * @file  PackCapability.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PackCapability {

#define AFTER_EXTRA
public:
    enum class TrustLevel;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKCAPABILITY
public:
    class PackCapability& operator=(class PackCapability const &) = delete;
    PackCapability(class PackCapability const &) = delete;
    PackCapability() = delete;
#endif

public:
    /**
     * @symbol  ??1PackCapability\@\@QEAA\@XZ
     */
    MCAPI ~PackCapability();

};