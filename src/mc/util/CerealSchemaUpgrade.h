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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@CerealSchemaUpgrade\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREALSCHEMAUPGRADE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CerealSchemaUpgrade();
#endif
    /**
     * @symbol
     * ??0CerealSchemaUpgrade\@\@QEAA\@VSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI CerealSchemaUpgrade(class SemVersion, std::string const&, std::string const&);
    /**
     * @symbol
     * ?bindLegacySchema\@CerealSchemaUpgrade\@\@QEAAXAEAVSchemaFactory\@cereal\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void bindLegacySchema(class cereal::SchemaFactory&, std::string const&);
    /**
     * @symbol ?getTargetVersion\@CerealSchemaUpgrade\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& getTargetVersion() const;
    /**
     * @symbol
     * ?registerLegacySchema\@CerealSchemaUpgrade\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void registerLegacySchema(std::string const&);
    // NOLINTEND
};
