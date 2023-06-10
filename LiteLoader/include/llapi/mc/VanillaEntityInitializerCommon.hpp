/**
 * @file  VanillaEntityInitializerCommon.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaEntityInitializerCommon.
 *
 */
class VanillaEntityInitializerCommon {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAENTITYINITIALIZERCOMMON
public:
    class VanillaEntityInitializerCommon& operator=(class VanillaEntityInitializerCommon const &) = delete;
    VanillaEntityInitializerCommon(class VanillaEntityInitializerCommon const &) = delete;
    VanillaEntityInitializerCommon() = delete;
#endif

public:
    /**
     * @symbol ?initActorComponents\@VanillaEntityInitializerCommon\@\@SAXW4EntityHost\@\@V?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@AEAVEntityContext\@\@AEBV5\@\@Z
     */
    MCAPI static void initActorComponents(enum class EntityHost, std::unique_ptr<class Actor>, class EntityContext &, class EntityContext const &);
    /**
     * @symbol ?initExperimentalMovement\@VanillaEntityInitializerCommon\@\@SAXAEAVEntityContext\@\@AEBV2\@\@Z
     */
    MCAPI static void initExperimentalMovement(class EntityContext &, class EntityContext const &);
    /**
     * @symbol ?initVanilla\@VanillaEntityInitializerCommon\@\@SAXAEAVEntityContext\@\@AEBV2\@\@Z
     */
    MCAPI static void initVanilla(class EntityContext &, class EntityContext const &);

};
