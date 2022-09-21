/**
 * @file  MC/MolangVariableMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MolangVariableMap.
 *
 */
class MolangVariableMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGVARIABLEMAP
public:
    MolangVariableMap() = delete;
#endif

public:
    /**
     * @hash   -703947487
     * @symbol ??0MolangVariableMap@@QEAA@AEBV0@@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap const &);
    /**
     * @hash   -510170823
     * @symbol ??0MolangVariableMap@@QEAA@$$QEAV0@@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap &&);
    /**
     * @hash   -332387027
     * @symbol ?clear@MolangVariableMap@@QEAAAEAV1@XZ
     */
    MCAPI class MolangVariableMap & clear();
    /**
     * @hash   -289688746
     * @symbol ?getConstScriptArgReference@MolangVariableMap@@QEBAPEBUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
     */
    MCAPI struct MolangScriptArg const * getConstScriptArgReference(enum MolangVariableIndex const &) const;
    /**
     * @hash   674854773
     * @symbol ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEBW4MolangVariableIndex@@AEA_N@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(enum MolangVariableIndex const &, bool &) const;
    /**
     * @hash   -1580586973
     * @symbol ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEB_KAEA_N@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64 const &, bool &) const;
    /**
     * @hash   -17205022
     * @symbol ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@_KPEBD@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64, char const *) const;
    /**
     * @hash   1527086872
     * @symbol ?getNonConstScriptArgReference@MolangVariableMap@@QEAAPEAUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
     */
    MCAPI struct MolangScriptArg * getNonConstScriptArgReference(enum MolangVariableIndex const &);
    /**
     * @hash   -1140617290
     * @symbol ?getOrAddNonConstScriptArgReference@MolangVariableMap@@QEAAPEAUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
     */
    MCAPI struct MolangScriptArg * getOrAddNonConstScriptArgReference(enum MolangVariableIndex const &);
    /**
     * @hash   1176647797
     * @symbol ?getPublicMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEBW4MolangVariableIndex@@AEA_N@Z
     */
    MCAPI struct MolangScriptArg const & getPublicMolangVariable(enum MolangVariableIndex const &, bool &) const;
    /**
     * @hash   415336379
     * @symbol ?getVariables@MolangVariableMap@@QEBAAEBV?$vector@V?$unique_ptr@VMolangVariable@@U?$default_delete@VMolangVariable@@@std@@@std@@V?$allocator@V?$unique_ptr@VMolangVariable@@U?$default_delete@VMolangVariable@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class MolangVariable>> const & getVariables() const;
    /**
     * @hash   163606060
     * @symbol ??4MolangVariableMap@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap const &);
    /**
     * @hash   -232153580
     * @symbol ??4MolangVariableMap@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap &&);
    /**
     * @hash   1144745136
     * @symbol ?setMolangStructMember@MolangVariableMap@@QEAAXAEBVHashedString@@0AEBUMolangScriptArg@@@Z
     */
    MCAPI void setMolangStructMember(class HashedString const &, class HashedString const &, struct MolangScriptArg const &);
    /**
     * @hash   1429884587
     * @symbol ?setMolangVariable@MolangVariableMap@@QEAAXAEBVHashedString@@AEBUMolangScriptArg@@@Z
     */
    MCAPI void setMolangVariable(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @hash   -163520869
     * @symbol ?setMolangVariable@MolangVariableMap@@QEAAXW4MolangVariableIndex@@AEBUMolangScriptArg@@@Z
     */
    MCAPI void setMolangVariable(enum MolangVariableIndex, struct MolangScriptArg const &);
    /**
     * @hash   1327404648
     * @symbol ?setMolangVariable@MolangVariableMap@@QEAAX_KPEBDAEBUMolangScriptArg@@@Z
     */
    MCAPI void setMolangVariable(unsigned __int64, char const *, struct MolangScriptArg const &);
    /**
     * @hash   -1940799846
     * @symbol ?setMolangVariableSettings@MolangVariableMap@@QEAAXAEBUMolangVariableSettings@@@Z
     */
    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const &);
    /**
     * @hash   596641404
     * @symbol ??1MolangVariableMap@@QEAA@XZ
     */
    MCAPI ~MolangVariableMap();

//private:
    /**
     * @hash   -130054059
     * @symbol ?_getMolangVariable@MolangVariableMap@@AEBAPEBVMolangVariable@@W4MolangVariableIndex@@@Z
     */
    MCAPI class MolangVariable const * _getMolangVariable(enum MolangVariableIndex) const;
    /**
     * @hash   -92584069
     * @symbol ?_getOrAddMolangVariable@MolangVariableMap@@AEAAPEAVMolangVariable@@AEB_KPEBD_N@Z
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(unsigned __int64 const &, char const *, bool);
    /**
     * @hash   280197427
     * @symbol ?_getOrAddMolangVariable@MolangVariableMap@@AEAAPEAVMolangVariable@@W4MolangVariableIndex@@@Z
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(enum MolangVariableIndex);

private:

};