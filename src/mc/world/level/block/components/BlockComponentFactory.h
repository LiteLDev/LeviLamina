#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

class BlockComponentFactory {
public:
    // BlockComponentFactory inner types declare
    // clang-format off
    struct Constructor;
    // clang-format on

    // BlockComponentFactory inner types define
    struct Constructor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTFACTORY_CONSTRUCTOR
    public:
        Constructor(Constructor const&) = delete;
        Constructor()                   = delete;
#endif

    public:
        /**
         * @symbol ??4Constructor\@BlockComponentFactory\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct BlockComponentFactory::Constructor& operator=(struct BlockComponentFactory::Constructor const&);
        /**
         * @symbol ??1Constructor\@BlockComponentFactory\@\@QEAA\@XZ
         */
        MCAPI ~Constructor();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTFACTORY
public:
    BlockComponentFactory& operator=(BlockComponentFactory const&) = delete;
    BlockComponentFactory(BlockComponentFactory const&)            = delete;
    BlockComponentFactory()                                        = delete;
#endif

public:
    /**
     * @symbol ??0BlockComponentFactory\@\@QEAA\@AEBVExperiments\@\@\@Z
     */
    MCAPI BlockComponentFactory(class Experiments const&);
    /**
     * @symbol ?initializeFactory\@BlockComponentFactory\@\@QEAAXAEBVExperiments\@\@\@Z
     */
    MCAPI void initializeFactory(class Experiments const&);
    /**
     * @symbol ?addAllComponentUpgrades\@BlockComponentFactory\@\@SAXAEAVCerealDocumentUpgrader\@\@\@Z
     */
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader&);
    /**
     * @symbol ?bindAllComponentSchemas\@BlockComponentFactory\@\@SAXAEAVSchemaFactory\@cereal\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static void bindAllComponentSchemas(class cereal::SchemaFactory&, class SemVersion const&);
    /**
     * @symbol
     * ?mRegisteredCerealComponents\@BlockComponentFactory\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockComponentFactory\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockComponentFactory\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        std::string,
        struct BlockComponentFactory::Constructor,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, struct BlockComponentFactory::Constructor>>>
        mRegisteredCerealComponents;
    /**
     * @symbol
     * ?mRegisteredDeprecatedCerealComponents\@BlockComponentFactory\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        std::string,
        std::string,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, std::string>>>
        mRegisteredDeprecatedCerealComponents;
    /**
     * @symbol ?registerAllCerealDescriptions\@BlockComponentFactory\@\@SAXXZ
     */
    MCAPI static void registerAllCerealDescriptions();
    /**
     * @symbol
     * ?registerComponentUpgrade\@BlockComponentFactory\@\@SAXAEAVCerealDocumentUpgrader\@\@V?$shared_ptr\@VCerealSchemaUpgrade\@\@\@std\@\@\@Z
     */
    MCAPI static void
    registerComponentUpgrade(class CerealDocumentUpgrader&, class std::shared_ptr<class CerealSchemaUpgrade>);
};
