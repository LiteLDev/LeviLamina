/**
 * @file  ActorDefinitionModifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
    struct ActorDefinitionModifier& operator=(struct ActorDefinitionModifier const &) = delete;
    ActorDefinitionModifier() = delete;
#endif

public:
    /**
     * @hash   675853957
     * @symbol ??0ActorDefinitionModifier@@QEAA@AEBU0@@Z
     */
    MCAPI ActorDefinitionModifier(struct ActorDefinitionModifier const &);
    /**
     * @hash   -1266156450
     * @symbol ??4ActorDefinitionModifier@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct ActorDefinitionModifier & operator=(struct ActorDefinitionModifier &&);
    /**
     * @hash   -2019873653
     * @symbol ??1ActorDefinitionModifier@@QEAA@XZ
     */
    MCAPI ~ActorDefinitionModifier();

};