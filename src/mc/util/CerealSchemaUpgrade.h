#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

class CerealSchemaUpgrade {

public:
    // prevent constructor by default
    CerealSchemaUpgrade& operator=(CerealSchemaUpgrade const&) = delete;
    CerealSchemaUpgrade(CerealSchemaUpgrade const&)            = delete;
    CerealSchemaUpgrade()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@CerealSchemaUpgrade\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREALSCHEMAUPGRADE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CerealSchemaUpgrade(); // NOLINT
#endif
    /**
     * @symbol
     * ??0CerealSchemaUpgrade\@\@QEAA\@VSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI CerealSchemaUpgrade(class SemVersion, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?bindLegacySchema\@CerealSchemaUpgrade\@\@QEAAXAEAVSchemaFactory\@cereal\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void bindLegacySchema(class cereal::SchemaFactory&, std::string const&); // NOLINT
    /**
     * @symbol ?getTargetVersion\@CerealSchemaUpgrade\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& getTargetVersion() const; // NOLINT
    /**
     * @symbol
     * ?registerLegacySchema\@CerealSchemaUpgrade\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void registerLegacySchema(std::string const&); // NOLINT
};
