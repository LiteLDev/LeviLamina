/**
 * @file  CerealItemComponentFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol ?addAllComponentUpgrades\@CerealItemComponentFactory\@\@SAXAEAVCerealDocumentUpgrader\@\@\@Z
     */
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader &);
    /**
     * @symbol ?bindAllComponentSchemas\@CerealItemComponentFactory\@\@SAXAEAVSchemaFactory\@reflection\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static void bindAllComponentSchemas(class reflection::SchemaFactory &, class SemVersion const &);
    /**
     * @symbol ?constructItemComponent\@CerealItemComponentFactory\@\@SA?AV?$shared_ptr\@VItemComponent\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::shared_ptr<class ItemComponent> constructItemComponent(std::string const &);
    /**
     * @symbol ?getItemContext\@CerealItemComponentFactory\@\@SAPEAVComponentItem\@\@XZ
     */
    MCAPI static class ComponentItem * getItemContext();
    /**
     * @symbol ?getReleasedMinFormatVersionForAnyComponent\@CerealItemComponentFactory\@\@SA?AV?$optional\@VSemVersion\@\@\@std\@\@XZ
     */
    MCAPI static class std::optional<class SemVersion> getReleasedMinFormatVersionForAnyComponent();
    /**
     * @symbol ?isRegisteredComponent\@CerealItemComponentFactory\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isRegisteredComponent(std::string const &);

//private:
    /**
     * @symbol ?updateReleasedMinFormatVersionForAnyComponent\@CerealItemComponentFactory\@\@CAXVSemVersion\@\@\@Z
     */
    MCAPI static void updateReleasedMinFormatVersionForAnyComponent(class SemVersion);

private:
    /**
     * @symbol ?mItemContext\@CerealItemComponentFactory\@\@0PEAVComponentItem\@\@EA
     */
    MCAPI static class ComponentItem * mItemContext;
    /**
     * @symbol ?mRegisteredComponents\@CerealItemComponentFactory\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@CerealItemComponentFactory\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@CerealItemComponentFactory\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, struct CerealItemComponentFactory::Constructor, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct CerealItemComponentFactory::Constructor>>> mRegisteredComponents;
    /**
     * @symbol ?mReleasedMinFormatVersionForAnyComponent\@CerealItemComponentFactory\@\@0V?$optional\@VSemVersion\@\@\@std\@\@A
     */
    MCAPI static class std::optional<class SemVersion> mReleasedMinFormatVersionForAnyComponent;

};
