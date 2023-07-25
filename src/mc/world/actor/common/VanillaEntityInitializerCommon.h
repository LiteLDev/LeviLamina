#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaEntityInitializerCommon {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAENTITYINITIALIZERCOMMON
public:
    VanillaEntityInitializerCommon& operator=(VanillaEntityInitializerCommon const&) = delete;
    VanillaEntityInitializerCommon(VanillaEntityInitializerCommon const&)            = delete;
    VanillaEntityInitializerCommon()                                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?initActorComponents\@VanillaEntityInitializerCommon\@\@SAXW4EntityHost\@\@V?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@AEAVEntityContext\@\@AEBV5\@\@Z
     */
    MCAPI static void
    initActorComponents(enum class EntityHost, std::unique_ptr<class Actor>, class EntityContext&, class EntityContext const&);
    /**
     * @symbol ?initLevelEntityDependentComponents\@VanillaEntityInitializerCommon\@\@SAXAEAVEntityContext\@\@AEBV2\@\@Z
     */
    MCAPI static void initLevelEntityDependentComponents(class EntityContext&, class EntityContext const&);
};
