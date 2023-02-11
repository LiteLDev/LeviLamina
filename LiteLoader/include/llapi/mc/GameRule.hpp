/**
 * @file  GameRule.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1335271336
     * @symbol  ??0GameRule\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI GameRule(std::string const &, bool);
    /**
     * @hash   855429749
     * @symbol  ??0GameRule\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI GameRule(class GameRule &&);
    /**
     * @hash   -330892287
     * @symbol  ??0GameRule\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI GameRule(class GameRule const &);
    /**
     * @hash   1905627348
     * @symbol  ?allowUseInCommand\@GameRule\@\@QEBA_NXZ
     */
    MCAPI bool allowUseInCommand() const;
    /**
     * @hash   483265068
     * @symbol  ?canBeModifiedByPlayer\@GameRule\@\@QEBA_NXZ
     */
    MCAPI bool canBeModifiedByPlayer() const;
    /**
     * @hash   966730564
     * @symbol  ?getBool\@GameRule\@\@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @hash   -426193242
     * @symbol  ?getFloat\@GameRule\@\@QEBAMXZ
     */
    MCAPI float getFloat() const;
    /**
     * @hash   504394904
     * @symbol  ?getInt\@GameRule\@\@QEBAHXZ
     */
    MCAPI int getInt() const;
    /**
     * @hash   -1328635748
     * @symbol  ?getName\@GameRule\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   217376333
     * @symbol  ?getType\@GameRule\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class GameRule::Type getType() const;
    /**
     * @hash   219973454
     * @symbol  ?getValue\@GameRule\@\@QEBAAEBTValue\@1\@XZ
     */
    MCAPI union GameRule::Value const & getValue() const;
    /**
     * @hash   348086792
     * @symbol  ??4GameRule\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class GameRule & operator=(class GameRule &&);
    /**
     * @hash   -694269346
     * @symbol  ?requiresCheats\@GameRule\@\@QEBA_NXZ
     */
    MCAPI bool requiresCheats() const;
    /**
     * @hash   1434200045
     * @symbol  ?resetType\@GameRule\@\@QEAAXW4Type\@1\@\@Z
     */
    MCAPI void resetType(enum class GameRule::Type);
    /**
     * @hash   -1604037209
     * @symbol  ?setBool\@GameRule\@\@QEAA_N_NPEA_NPEAVValidationError\@1\@\@Z
     */
    MCAPI bool setBool(bool, bool *, class GameRule::ValidationError *);
    /**
     * @hash   -861557079
     * @symbol  ?setFloat\@GameRule\@\@QEAA_NMPEA_NPEAVValidationError\@1\@\@Z
     */
    MCAPI bool setFloat(float, bool *, class GameRule::ValidationError *);
    /**
     * @hash   -2103389455
     * @symbol  ?setInt\@GameRule\@\@QEAA_NHPEA_NPEAVValidationError\@1\@\@Z
     */
    MCAPI bool setInt(int, bool *, class GameRule::ValidationError *);
    /**
     * @hash   43698691
     * @symbol  ?setTagDataNotFoundCallback\@GameRule\@\@QEAAAEAV1\@V?$function\@$$A6AXAEAVGameRule\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class GameRule & setTagDataNotFoundCallback(class std::function<void (class GameRule &)>);
    /**
     * @hash   -1060223419
     * @symbol  ?setValidateValueCallback\@GameRule\@\@QEAAAEAV1\@V?$function\@$$A6A_NAEBTValue\@GameRule\@\@PEAVValidationError\@2\@\@Z\@std\@\@\@Z
     */
    MCAPI class GameRule & setValidateValueCallback(class std::function<bool (union GameRule::Value const &, class GameRule::ValidationError *)>);
    /**
     * @hash   -2140300296
     * @symbol  ??1GameRule\@\@QEAA\@XZ
     */
    MCAPI ~GameRule();

//protected:
    /**
     * @hash   -1926947597
     * @symbol  ?_setDefaultValue\@GameRule\@\@IEAAAEAV1\@H\@Z
     */
    MCAPI class GameRule & _setDefaultValue(int);
    /**
     * @hash   -518814376
     * @symbol  ?_setDefaultValue\@GameRule\@\@IEAAAEAV1\@_N\@Z
     */
    MCAPI class GameRule & _setDefaultValue(bool);

//private:
    /**
     * @hash   58523989
     * @symbol  ?_set\@GameRule\@\@AEAA_NAEBTValue\@1\@PEA_NPEAVValidationError\@1\@\@Z
     */
    MCAPI bool _set(union GameRule::Value const &, bool *, class GameRule::ValidationError *);

protected:

private:

};