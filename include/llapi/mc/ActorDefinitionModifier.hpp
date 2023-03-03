/**
 * @file  ActorDefinitionModifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorDefinitionModifier.
 *
 */
struct ActorDefinitionModifier {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONMODIFIER
public:
    ActorDefinitionModifier() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorDefinitionModifier\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorDefinitionModifier(struct ActorDefinitionModifier const &);
    /**
     * @symbol  ??4ActorDefinitionModifier\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorDefinitionModifier & operator=(struct ActorDefinitionModifier const &);
    /**
     * @symbol  ??4ActorDefinitionModifier\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ActorDefinitionModifier & operator=(struct ActorDefinitionModifier &&);
    /**
     * @symbol  ??1ActorDefinitionModifier\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionModifier();

};