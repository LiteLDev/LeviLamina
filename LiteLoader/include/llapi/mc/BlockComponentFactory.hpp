/**
 * @file  BlockComponentFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockComponentFactory.
 *
 */
class BlockComponentFactory {

#define AFTER_EXTRA
// Add Member There
public:
struct Constructor {
    Constructor() = delete;
    Constructor(Constructor const&) = delete;
    Constructor(Constructor const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTFACTORY
public:
    class BlockComponentFactory& operator=(class BlockComponentFactory const &) = delete;
    BlockComponentFactory(class BlockComponentFactory const &) = delete;
    BlockComponentFactory() = delete;
#endif

public:
    /**
     * @symbol ??0BlockComponentFactory\@\@QEAA\@AEBVExperiments\@\@\@Z
     */
    MCAPI BlockComponentFactory(class Experiments const &);
    /**
     * @symbol ?initializeFactory\@BlockComponentFactory\@\@QEAAXAEBVExperiments\@\@\@Z
     */
    MCAPI void initializeFactory(class Experiments const &);
    /**
     * @symbol ?addAllComponentUpgrades\@BlockComponentFactory\@\@SAXAEAVCerealDocumentUpgrader\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader &, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindAllComponentSchemas\@BlockComponentFactory\@\@SAXAEAVSchemaFactory\@cereal\@\@AEBVSemVersion\@\@AEAUReflectionCtx\@3\@\@Z
     */
    MCAPI static void bindAllComponentSchemas(class cereal::SchemaFactory &, class SemVersion const &, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?getPropRegisteredCerealComponents\@BlockComponentFactory\@\@SAAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockComponentFactory\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockComponentFactory\@\@\@std\@\@\@2\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class std::unordered_map<std::string, struct BlockComponentFactory::Constructor, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct BlockComponentFactory::Constructor>>> & getPropRegisteredCerealComponents(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?getPropRegisteredDeprecatedCerealComponents\@BlockComponentFactory\@\@SAAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> & getPropRegisteredDeprecatedCerealComponents(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?registerAllCerealDescriptions\@BlockComponentFactory\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void registerAllCerealDescriptions(struct cereal::ReflectionCtx &);

//private:
    /**
     * @symbol ?getEnTTMetaType\@BlockComponentFactory\@\@CA?AVmeta_type\@entt\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class entt::meta_type getEnTTMetaType(struct cereal::ReflectionCtx &);

private:

};
