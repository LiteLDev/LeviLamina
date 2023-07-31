#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

class CerealItemComponentFactory {
public:
    // CerealItemComponentFactory inner types declare
    // clang-format off
    struct Constructor;
    // clang-format on

    // CerealItemComponentFactory inner types define
    struct Constructor {

    public:
        // prevent constructor by default
        Constructor& operator=(Constructor const&) = delete;
        Constructor(Constructor const&)            = delete;
        Constructor()                              = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??4Constructor\@CerealItemComponentFactory\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct CerealItemComponentFactory::Constructor&
        operator=(struct CerealItemComponentFactory::Constructor&&);
        /**
         * @symbol ??1Constructor\@CerealItemComponentFactory\@\@QEAA\@XZ
         */
        MCAPI ~Constructor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    CerealItemComponentFactory& operator=(CerealItemComponentFactory const&) = delete;
    CerealItemComponentFactory(CerealItemComponentFactory const&)            = delete;
    CerealItemComponentFactory()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addAllComponentUpgrades\@CerealItemComponentFactory\@\@SAXAEAVCerealDocumentUpgrader\@\@\@Z
     */
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader&);
    /**
     * @symbol
     * ?bindAllComponentSchemas\@CerealItemComponentFactory\@\@SAXAEAVSchemaFactory\@cereal\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static void bindAllComponentSchemas(class cereal::SchemaFactory&, class SemVersion const&);
    /**
     * @symbol
     * ?constructItemComponent\@CerealItemComponentFactory\@\@SA?AV?$shared_ptr\@VItemComponent\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::shared_ptr<class ItemComponent> constructItemComponent(std::string const&);
    /**
     * @symbol ?getItemContext\@CerealItemComponentFactory\@\@SAPEAVComponentItem\@\@XZ
     */
    MCAPI static class ComponentItem* getItemContext();
    /**
     * @symbol
     * ?getReleasedMinFormatVersionForAnyComponent\@CerealItemComponentFactory\@\@SA?AV?$optional\@VSemVersion\@\@\@std\@\@XZ
     */
    MCAPI static std::optional<class SemVersion> getReleasedMinFormatVersionForAnyComponent();
    /**
     * @symbol
     * ?isRegisteredComponent\@CerealItemComponentFactory\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isRegisteredComponent(std::string const&);
    /**
     * @symbol
     * ?registerDeprecatedComponent\@CerealItemComponentFactory\@\@SAX$$QEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI static void registerDeprecatedComponent(std::string const&&, std::string const&&);
    /**
     * @symbol ?resetItemContext\@CerealItemComponentFactory\@\@SAXXZ
     */
    MCAPI static void resetItemContext();
    /**
     * @symbol ?setItemContext\@CerealItemComponentFactory\@\@SAXPEAVComponentItem\@\@\@Z
     */
    MCAPI static void setItemContext(class ComponentItem*);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?updateReleasedMinFormatVersionForAnyComponentIfLower\@CerealItemComponentFactory\@\@CAXVSemVersion\@\@\@Z
     */
    MCAPI static void updateReleasedMinFormatVersionForAnyComponentIfLower(class SemVersion);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mDeprecatedComponents\@CerealItemComponentFactory\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSemVersion\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSemVersion\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unordered_map<std::string, class SemVersion> mDeprecatedComponents;
    /**
     * @symbol ?mItemContext\@CerealItemComponentFactory\@\@0PEAVComponentItem\@\@EA
     */
    MCAPI static class ComponentItem* mItemContext;
    /**
     * @symbol
     * ?mRegisteredComponents\@CerealItemComponentFactory\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@CerealItemComponentFactory\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@CerealItemComponentFactory\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unordered_map<std::string, struct CerealItemComponentFactory::Constructor> mRegisteredComponents;
    /**
     * @symbol
     * ?mReleasedMinFormatVersionForAnyComponent\@CerealItemComponentFactory\@\@0V?$optional\@VSemVersion\@\@\@std\@\@A
     */
    MCAPI static std::optional<class SemVersion> mReleasedMinFormatVersionForAnyComponent;
    // NOLINTEND
};
