/**
 * @file  DiffListPair.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure DiffListPair.
 *
 */
struct DiffListPair {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIFFLISTPAIR
public:
    struct DiffListPair& operator=(struct DiffListPair const &) = delete;
    DiffListPair(struct DiffListPair const &) = delete;
    DiffListPair() = delete;
#endif

public:
    /**
     * @symbol  ??0DiffListPair\@\@QEAA\@_NPEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI DiffListPair(bool, class ActorDefinitionDescriptor *);

};