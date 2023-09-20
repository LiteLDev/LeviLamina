/**
 * @file  CerealItemComponentFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealItemComponentFactory.
 *
 */
class CerealItemComponentFactory {

#define AFTER_EXTRA
// Add Member There
public:
struct Constructor {
    Constructor() = delete;
    Constructor(Constructor const&) = delete;
    Constructor(Constructor const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALITEMCOMPONENTFACTORY
public:
    class CerealItemComponentFactory& operator=(class CerealItemComponentFactory const &) = delete;
    CerealItemComponentFactory(class CerealItemComponentFactory const &) = delete;
    CerealItemComponentFactory() = delete;
#endif

public:
    /**
     * @symbol ?addAllComponentUpgrades\@CerealItemComponentFactory\@\@SAXAEAVCerealDocumentUpgrader\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader &, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindAllComponentSchemas\@CerealItemComponentFactory\@\@SAXAEAVSchemaFactory\@cereal\@\@AEBVSemVersion\@\@AEAUReflectionCtx\@3\@\@Z
     */
    MCAPI static void bindAllComponentSchemas(class cereal::SchemaFactory &, class SemVersion const &, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?constructItemComponent\@CerealItemComponentFactory\@\@SA?AV?$shared_ptr\@VItemComponent\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class ItemComponent> constructItemComponent(std::string const &, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?deprecateComponentStartingFromVersion\@CerealItemComponentFactory\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSemVersion\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void deprecateComponentStartingFromVersion(std::string const &, class SemVersion, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?getReleasedMinFormatVersionForAnyComponent\@CerealItemComponentFactory\@\@SA?AV?$optional\@VSemVersion\@\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class std::optional<class SemVersion> getReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?isComponentBasedItemSchema\@CerealItemComponentFactory\@\@SA_NAEBVSemVersion\@\@AEBVValue\@Json\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static bool isComponentBasedItemSchema(class SemVersion const &, class Json::Value const &, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?isRegisteredComponent\@CerealItemComponentFactory\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static bool isRegisteredComponent(std::string const &, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?registerDeprecatedComponent\@CerealItemComponentFactory\@\@SAX$$QEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void registerDeprecatedComponent(std::string const &&, std::string const &&, struct cereal::ReflectionCtx &);

//private:
    /**
     * @symbol ?getEnTTMetaType\@CerealItemComponentFactory\@\@CA?AVmeta_type\@entt\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class entt::meta_type getEnTTMetaType(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?getPropDeprecatedComponents\@CerealItemComponentFactory\@\@CAAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSemVersion\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSemVersion\@\@\@std\@\@\@2\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class std::unordered_map<std::string, class SemVersion, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class SemVersion>>> & getPropDeprecatedComponents(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?getPropRegisteredComponents\@CerealItemComponentFactory\@\@CAAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@CerealItemComponentFactory\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@CerealItemComponentFactory\@\@\@std\@\@\@2\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class std::unordered_map<std::string, struct CerealItemComponentFactory::Constructor, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct CerealItemComponentFactory::Constructor>>> & getPropRegisteredComponents(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?getPropReleasedMinFormatVersionForAnyComponent\@CerealItemComponentFactory\@\@CAAEAV?$optional\@VSemVersion\@\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class std::optional<class SemVersion> & getPropReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?updateReleasedMinFormatVersionForAnyComponentIfLower\@CerealItemComponentFactory\@\@CAXVSemVersion\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void updateReleasedMinFormatVersionForAnyComponentIfLower(class SemVersion, struct cereal::ReflectionCtx &);

private:

};
