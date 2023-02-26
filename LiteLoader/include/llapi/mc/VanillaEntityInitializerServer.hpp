/**
 * @file  VanillaEntityInitializerServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  ?create\@VanillaEntityInitializerServer\@\@SA?AV?$unique_ptr\@VIEntityInitializer\@\@U?$default_delete\@VIEntityInitializer\@\@\@std\@\@\@std\@\@AEBURegistrationOptions\@VanillaSystemsRegistration\@\@\@Z
     */
    MCAPI static std::unique_ptr<class IEntityInitializer> create(struct VanillaSystemsRegistration::RegistrationOptions const &);
    /**
     * @symbol  ?initECSMovement\@VanillaEntityInitializerServer\@\@SAXV?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@AEAVEntityContext\@\@AEBV4\@\@Z
     */
    MCAPI static void initECSMovement(std::unique_ptr<class Actor>, class EntityContext &, class EntityContext const &);
    /**
     * @symbol  ?initSideBySideComparison\@VanillaEntityInitializerServer\@\@SAXV?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@AEAVEntityContext\@\@AEBV4\@\@Z
     */
    MCAPI static void initSideBySideComparison(std::unique_ptr<class Actor>, class EntityContext &, class EntityContext const &);

};