/**
 * @file  GameRule.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameRule.
 *
 */
class GameRule {

#define AFTER_EXTRA
// Add Member There
public:
union Value;
class ValidationError {
public:
    ValidationError() = delete;
    ValidationError(ValidationError const&) = delete;
    ValidationError(ValidationError const&&) = delete;
};
enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULE
public:
    class GameRule& operator=(class GameRule const &) = delete;
    GameRule() = delete;
#endif

public:
    /**
     * @symbol  ??0GameRule\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI GameRule(std::string const &, bool);
    /**
     * @symbol  ??0GameRule\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI GameRule(class GameRule &&);
    /**
     * @symbol  ??0GameRule\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI GameRule(class GameRule const &);
    /**
     * @symbol  ?allowUseInCommand\@GameRule\@\@QEBA_NXZ
     */
    MCAPI bool allowUseInCommand() const;
    /**
     * @symbol  ?canBeModifiedByPlayer\@GameRule\@\@QEBA_NXZ
     */
    MCAPI bool canBeModifiedByPlayer() const;
    /**
     * @symbol  ?getBool\@GameRule\@\@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @symbol  ?getFloat\@GameRule\@\@QEBAMXZ
     */
    MCAPI float getFloat() const;
    /**
     * @symbol  ?getInt\@GameRule\@\@QEBAHXZ
     */
    MCAPI int getInt() const;
    /**
     * @symbol  ?getName\@GameRule\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol  ?getType\@GameRule\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class GameRule::Type getType() const;
    /**
     * @symbol  ?getValue\@GameRule\@\@QEBAAEBTValue\@1\@XZ
     */
    MCAPI union GameRule::Value const & getValue() const;
    /**
     * @symbol  ??4GameRule\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class GameRule & operator=(class GameRule &&);
    /**
     * @symbol  ?requiresCheats\@GameRule\@\@QEBA_NXZ
     */
    MCAPI bool requiresCheats() const;
    /**
     * @symbol  ?resetType\@GameRule\@\@QEAAXW4Type\@1\@\@Z
     */
    MCAPI void resetType(enum class GameRule::Type);
    /**
     * @symbol  ?setBool\@GameRule\@\@QEAA_N_NPEA_NPEAVValidationError\@1\@\@Z
     */
    MCAPI bool setBool(bool, bool *, class GameRule::ValidationError *);
    /**
     * @symbol  ?setFloat\@GameRule\@\@QEAA_NMPEA_NPEAVValidationError\@1\@\@Z
     */
    MCAPI bool setFloat(float, bool *, class GameRule::ValidationError *);
    /**
     * @symbol  ?setInt\@GameRule\@\@QEAA_NHPEA_NPEAVValidationError\@1\@\@Z
     */
    MCAPI bool setInt(int, bool *, class GameRule::ValidationError *);
    /**
     * @symbol  ?setTagDataNotFoundCallback\@GameRule\@\@QEAAAEAV1\@V?$function\@$$A6AXAEAVGameRule\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class GameRule & setTagDataNotFoundCallback(class std::function<void (class GameRule &)>);
    /**
     * @symbol  ?setValidateValueCallback\@GameRule\@\@QEAAAEAV1\@V?$function\@$$A6A_NAEBTValue\@GameRule\@\@PEAVValidationError\@2\@\@Z\@std\@\@\@Z
     */
    MCAPI class GameRule & setValidateValueCallback(class std::function<bool (union GameRule::Value const &, class GameRule::ValidationError *)>);
    /**
     * @symbol  ??1GameRule\@\@QEAA\@XZ
     */
    MCAPI ~GameRule();

//protected:
    /**
     * @symbol  ?_setDefaultValue\@GameRule\@\@IEAAAEAV1\@H\@Z
     */
    MCAPI class GameRule & _setDefaultValue(int);
    /**
     * @symbol  ?_setDefaultValue\@GameRule\@\@IEAAAEAV1\@_N\@Z
     */
    MCAPI class GameRule & _setDefaultValue(bool);

//private:
    /**
     * @symbol  ?_set\@GameRule\@\@AEAA_NAEBTValue\@1\@PEA_NPEAVValidationError\@1\@\@Z
     */
    MCAPI bool _set(union GameRule::Value const &, bool *, class GameRule::ValidationError *);

protected:

private:

};