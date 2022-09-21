/**
 * @file  MC/BlockDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDefinition.
 *
 */
struct BlockDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITION
public:
    struct BlockDefinition& operator=(struct BlockDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0BlockDefinition@@QEAA@XZ
     */
    MCAPI BlockDefinition();
    /**
     * @hash   -334841147
     * @symbol ??0BlockDefinition@@QEAA@AEBU0@@Z
     */
    MCAPI BlockDefinition(struct BlockDefinition const &);
    /**
     * @hash   -361841940
     * @symbol ??1BlockDefinition@@QEAA@XZ
     */
    MCAPI ~BlockDefinition();
    /**
     * @hash   1251703253
     * @symbol ?createBlockAbstractCerealSchema@BlockDefinition@@SA?AUSchema@reflection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static struct reflection::Schema createBlockAbstractCerealSchema(std::string const &);
    /**
     * @hash   842277177
     * @symbol ?registerBlockDefinitionTypes@BlockDefinition@@SAXXZ
     */
    MCAPI static void registerBlockDefinitionTypes();
    /**
     * @hash   -5037274
     * @symbol ?upgradeJson@BlockDefinition@@SA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@V?$optional@VSemVersion@@@3@@Z
     */
    MCAPI static bool upgradeJson(std::string &, class Core::Path const &, class std::optional<class SemVersion>);

//private:

};