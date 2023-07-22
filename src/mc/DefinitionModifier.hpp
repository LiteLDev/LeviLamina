/**
 * @file  DefinitionModifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure DefinitionModifier.
 *
 */
struct DefinitionModifier {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONMODIFIER
public:
    struct DefinitionModifier& operator=(struct DefinitionModifier const &) = delete;
    DefinitionModifier() = delete;
#endif

public:
    /**
     * @symbol  ??0DefinitionModifier\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI DefinitionModifier(struct DefinitionModifier const &);
    /**
     * @symbol  ??1DefinitionModifier\@\@QEAA\@XZ
     */
    MCAPI ~DefinitionModifier();

};