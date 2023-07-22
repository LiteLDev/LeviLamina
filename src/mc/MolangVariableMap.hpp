/**
 * @file  MolangVariableMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0MolangVariableMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap const &);
    /**
     * @symbol  ??0MolangVariableMap\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap &&);
    /**
     * @symbol  ?clear\@MolangVariableMap\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MolangVariableMap & clear();
    /**
     * @symbol  ?getConstScriptArgReference\@MolangVariableMap\@\@QEBAPEBUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@\@Z
     */
    MCAPI struct MolangScriptArg const * getConstScriptArgReference(enum class MolangVariableIndex const &) const;
    /**
     * @symbol  ?getMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@AEA_N\@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(enum class MolangVariableIndex const &, bool &) const;
    /**
     * @symbol  ?getMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@AEB_KAEA_N\@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64 const &, bool &) const;
    /**
     * @symbol  ?getMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@_KPEBD\@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64, char const *) const;
    /**
     * @symbol  ?getNonConstScriptArgReference\@MolangVariableMap\@\@QEAAPEAUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@\@Z
     */
    MCAPI struct MolangScriptArg * getNonConstScriptArgReference(enum class MolangVariableIndex const &);
    /**
     * @symbol  ?getOrAddNonConstScriptArgReference\@MolangVariableMap\@\@QEAAPEAUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@\@Z
     */
    MCAPI struct MolangScriptArg * getOrAddNonConstScriptArgReference(enum class MolangVariableIndex const &);
    /**
     * @symbol  ?getPublicMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@AEBW4MolangVariableIndex\@\@AEA_N\@Z
     */
    MCAPI struct MolangScriptArg const & getPublicMolangVariable(enum class MolangVariableIndex const &, bool &) const;
    /**
     * @symbol  ?getVariables\@MolangVariableMap\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VMolangVariable\@\@U?$default_delete\@VMolangVariable\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VMolangVariable\@\@U?$default_delete\@VMolangVariable\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class MolangVariable>> const & getVariables() const;
    /**
     * @symbol  ??4MolangVariableMap\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap const &);
    /**
     * @symbol  ??4MolangVariableMap\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap &&);
    /**
     * @symbol  ?setMolangStructMember\@MolangVariableMap\@\@QEAAXAEBVHashedString\@\@0AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangStructMember(class HashedString const &, class HashedString const &, struct MolangScriptArg const &);
    /**
     * @symbol  ?setMolangVariable\@MolangVariableMap\@\@QEAAXAEBVHashedString\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @symbol  ?setMolangVariable\@MolangVariableMap\@\@QEAAXW4MolangVariableIndex\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(enum class MolangVariableIndex, struct MolangScriptArg const &);
    /**
     * @symbol  ?setMolangVariable\@MolangVariableMap\@\@QEAAX_KPEBDAEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(unsigned __int64, char const *, struct MolangScriptArg const &);
    /**
     * @symbol  ?setMolangVariableSettings\@MolangVariableMap\@\@QEAAXAEBUMolangVariableSettings\@\@\@Z
     */
    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const &);
    /**
     * @symbol  ??1MolangVariableMap\@\@QEAA\@XZ
     */
    MCAPI ~MolangVariableMap();

//private:
    /**
     * @symbol  ?_getMolangVariable\@MolangVariableMap\@\@AEBAPEBVMolangVariable\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI class MolangVariable const * _getMolangVariable(enum class MolangVariableIndex) const;
    /**
     * @symbol  ?_getOrAddMolangVariable\@MolangVariableMap\@\@AEAAPEAVMolangVariable\@\@AEB_KPEBD_N\@Z
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(unsigned __int64 const &, char const *, bool);
    /**
     * @symbol  ?_getOrAddMolangVariable\@MolangVariableMap\@\@AEAAPEAVMolangVariable\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(enum class MolangVariableIndex);

private:

};