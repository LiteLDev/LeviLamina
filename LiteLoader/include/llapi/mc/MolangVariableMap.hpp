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
     * @symbol ??0MolangVariableMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap const &);
    /**
     * @symbol ??0MolangVariableMap\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MolangVariableMap(class MolangVariableMap &&);
    /**
     * @symbol ?clear\@MolangVariableMap\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MolangVariableMap & clear();
    /**
     * @symbol ?getMolangVariable\@MolangVariableMap\@\@QEBAAEBUMolangScriptArg\@\@_KPEBD\@Z
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64, char const *) const;
    /**
     * @symbol ??4MolangVariableMap\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap const &);
    /**
     * @symbol ??4MolangVariableMap\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap &&);
    /**
     * @symbol ?setMolangStructMember\@MolangVariableMap\@\@QEAAXAEBVHashedString\@\@0AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangStructMember(class HashedString const &, class HashedString const &, struct MolangScriptArg const &);
    /**
     * @symbol ?setMolangVariable\@MolangVariableMap\@\@QEAAXAEBVHashedString\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @symbol ?setMolangVariable\@MolangVariableMap\@\@QEAAX_KPEBDAEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(unsigned __int64, char const *, struct MolangScriptArg const &);
    /**
     * @symbol ?setMolangVariable\@MolangVariableMap\@\@QEAAXW4MolangVariableIndex\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI void setMolangVariable(enum class MolangVariableIndex, struct MolangScriptArg const &);
    /**
     * @symbol ?setMolangVariableSettings\@MolangVariableMap\@\@QEAAXAEBUMolangVariableSettings\@\@\@Z
     */
    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const &);
    /**
     * @symbol ??1MolangVariableMap\@\@QEAA\@XZ
     */
    MCAPI ~MolangVariableMap();

//private:
    /**
     * @symbol ?_getMolangVariable\@MolangVariableMap\@\@AEBAPEBVMolangVariable\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI class MolangVariable const * _getMolangVariable(enum class MolangVariableIndex) const;
    /**
     * @symbol ?_getOrAddMolangVariable\@MolangVariableMap\@\@AEAAPEAVMolangVariable\@\@AEB_KPEBD_N\@Z
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(unsigned __int64 const &, char const *, bool);
    /**
     * @symbol ?_getOrAddMolangVariable\@MolangVariableMap\@\@AEAAPEAVMolangVariable\@\@W4MolangVariableIndex\@\@\@Z
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(enum class MolangVariableIndex);

private:

};
