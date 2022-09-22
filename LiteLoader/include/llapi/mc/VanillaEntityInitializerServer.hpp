/**
 * @file  VanillaEntityInitializerServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "VanillaSystemsRegistration.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaEntityInitializerServer.
 *
 */
class VanillaEntityInitializerServer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAENTITYINITIALIZERSERVER
public:
    class VanillaEntityInitializerServer& operator=(class VanillaEntityInitializerServer const &) = delete;
    VanillaEntityInitializerServer(class VanillaEntityInitializerServer const &) = delete;
    VanillaEntityInitializerServer() = delete;
#endif

public:
    /**
     * @hash   876903303
     * @symbol ?commonInitECSMovement@VanillaEntityInitializerServer@@SAXAEBUActorDefinitionIdentifier@@AEAVEntityContext@@AEBV3@@Z
     */
    MCAPI static void commonInitECSMovement(struct ActorDefinitionIdentifier const &, class EntityContext &, class EntityContext const &);
    /**
     * @hash   1227711977
     * @symbol ?commonInitSideBySideComparison@VanillaEntityInitializerServer@@SAXAEBUActorDefinitionIdentifier@@AEAVEntityContext@@AEBV3@@Z
     */
    MCAPI static void commonInitSideBySideComparison(struct ActorDefinitionIdentifier const &, class EntityContext &, class EntityContext const &);
    /**
     * @hash   -2041178089
     * @symbol ?create@VanillaEntityInitializerServer@@SA?AV?$unique_ptr@VIEntityInitializer@@U?$default_delete@VIEntityInitializer@@@std@@@std@@AEBURegistrationOptions@VanillaSystemsRegistration@@@Z
     */
    MCAPI static std::unique_ptr<class IEntityInitializer> create(struct VanillaSystemsRegistration::RegistrationOptions const &);

};