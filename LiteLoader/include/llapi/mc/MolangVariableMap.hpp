/**
 * @file  MolangVariableMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1372834239
     * @symbol  ??0MolangVariableMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap const &);
    /**
     * @hash   -1179057575
     * @symbol  ??0MolangVariableMap\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap &&);
    /**
     * @hash   -1001243027
     * @symbol  ?clear\@MolangVariableMap\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MolangVariableMap & clear();
    /**
     * @hash   -958529370
     * @symbol  ?getConstScriptArgReference\@MolangVariableMap\@\@QEBAPEBUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@\@Z
     */
    MCAPI struct MolangScriptArg const * getConstScriptArgReference(enum class MolangVariableIndex const &) const;
    /**
     * @hash   6014149
     * @symbol  ?getMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@AEA_N\@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(enum class MolangVariableIndex const &, bool &) const;
    /**
     * @hash   2045539699
     * @symbol  ?getMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@AEB_KAEA_N\@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64 const &, bool &) const;
    /**
     * @hash   -686045646
     * @symbol  ?getMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@_KPEBD\@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64, char const *) const;
    /**
     * @hash   858246248
     * @symbol  ?getNonConstScriptArgReference\@MolangVariableMap\@\@QEAAPEAUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@\@Z
     */
    MCAPI struct MolangScriptArg * getNonConstScriptArgReference(enum class MolangVariableIndex const &);
    /**
     * @hash   -1809457914
     * @symbol  ?getOrAddNonConstScriptArgReference\@MolangVariableMap\@\@QEAAPEAUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@\@Z
     */
    MCAPI struct MolangScriptArg * getOrAddNonConstScriptArgReference(enum class MolangVariableIndex const &);
    /**
     * @hash   507807173
     * @symbol  ?getPublicMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@AEA_N\@Z
     */
    MCAPI struct MolangScriptArg const & getPublicMolangVariable(enum class MolangVariableIndex const &, bool &) const;
    /**
     * @hash   -450163285
     * @symbol  ?getVariables\@MolangVariableMap\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VMolangVariable\@\@U?$default_delete\@VMolangVariable\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VMolangVariable\@\@U?$default_delete\@VMolangVariable\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class MolangVariable>> const & getVariables() const;
    /**
     * @hash   -505265316
     * @symbol  ??4MolangVariableMap\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap const &);
    /**
     * @hash   -901024956
     * @symbol  ??4MolangVariableMap\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap &&);
    /**
     * @hash   475904512
     * @symbol  ?setMolangStructMember\@MolangVariableMap\@\@QEAAXAEBVHashedString\@\@0AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangStructMember(class HashedString const &, class HashedString const &, struct MolangScriptArg const &);
    /**
     * @hash   761043963
     * @symbol  ?setMolangVariable\@MolangVariableMap\@\@QEAAXAEBVHashedString\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @hash   -832361493
     * @symbol  ?setMolangVariable\@MolangVariableMap\@\@QEAAXW4MolangVariableIndex\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(enum class MolangVariableIndex, struct MolangScriptArg const &);
    /**
     * @hash   658564024
     * @symbol  ?setMolangVariable\@MolangVariableMap\@\@QEAAX_KPEBDAEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(unsigned __int64, char const *, struct MolangScriptArg const &);
    /**
     * @hash   1685326826
     * @symbol  ?setMolangVariableSettings\@MolangVariableMap\@\@QEAAXAEBUMolangVariableSettings\@\@\@Z
     */
    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const &);
    /**
     * @hash   -72245348
     * @symbol  ??1MolangVariableMap\@\@QEAA\@XZ
     */
    MCAPI ~MolangVariableMap();

//private:
    /**
     * @hash   -798910059
     * @symbol  ?_getMolangVariable\@MolangVariableMap\@\@AEBAPEBVMolangVariable\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI class MolangVariable const * _getMolangVariable(enum class MolangVariableIndex) const;
    /**
     * @hash   -761440069
     * @symbol  ?_getOrAddMolangVariable\@MolangVariableMap\@\@AEAAPEAVMolangVariable\@\@AEB_KPEBD_N\@Z
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(unsigned __int64 const &, char const *, bool);
    /**
     * @hash   -388658573
     * @symbol  ?_getOrAddMolangVariable\@MolangVariableMap\@\@AEAAPEAVMolangVariable\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(enum class MolangVariableIndex);

private:

};