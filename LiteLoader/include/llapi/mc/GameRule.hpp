/**
 * @file  GameRule.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -2121769112
     * @symbol ??0GameRule@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI GameRule(std::string const &, bool);
    /**
     * @hash   1783109957
     * @symbol ??0GameRule@@QEAA@$$QEAV0@@Z
     */
    MCAPI GameRule(class GameRule &&);
    /**
     * @hash   -422748511
     * @symbol ??0GameRule@@QEAA@AEBV0@@Z
     */
    MCAPI GameRule(class GameRule const &);
    /**
     * @hash   -1537217404
     * @symbol ?allowUseInCommand@GameRule@@QEBA_NXZ
     */
    MCAPI bool allowUseInCommand() const;
    /**
     * @hash   -302617668
     * @symbol ?canBeModifiedByPlayer@GameRule@@QEBA_NXZ
     */
    MCAPI bool canBeModifiedByPlayer() const;
    /**
     * @hash   1817315508
     * @symbol ?getBool@GameRule@@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @hash   -691721386
     * @symbol ?getFloat@GameRule@@QEBAMXZ
     */
    MCAPI float getFloat() const;
    /**
     * @hash   253381704
     * @symbol ?getInt@GameRule@@QEBAHXZ
     */
    MCAPI int getInt() const;
    /**
     * @hash   -1425258532
     * @symbol ?getName@GameRule@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   85434877
     * @symbol ?getType@GameRule@@QEBA?AW4Type@1@XZ
     */
    MCAPI enum class GameRule::Type getType() const;
    /**
     * @hash   87232446
     * @symbol ?getValue@GameRule@@QEBAAEBTValue@1@XZ
     */
    MCAPI union GameRule::Value const & getValue() const;
    /**
     * @hash   -438410984
     * @symbol ??4GameRule@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class GameRule & operator=(class GameRule &&);
    /**
     * @hash   -1480213586
     * @symbol ?requiresCheats@GameRule@@QEBA_NXZ
     */
    MCAPI bool requiresCheats() const;
    /**
     * @hash   648255805
     * @symbol ?resetType@GameRule@@QEAAXW4Type@1@@Z
     */
    MCAPI void resetType(enum class GameRule::Type);
    /**
     * @hash   1904985847
     * @symbol ?setBool@GameRule@@QEAA_N_NPEA_NPEAVValidationError@1@@Z
     */
    MCAPI bool setBool(bool, bool *, class GameRule::ValidationError *);
    /**
     * @hash   -1647501319
     * @symbol ?setFloat@GameRule@@QEAA_NMPEA_NPEAVValidationError@1@@Z
     */
    MCAPI bool setFloat(float, bool *, class GameRule::ValidationError *);
    /**
     * @hash   1405633601
     * @symbol ?setInt@GameRule@@QEAA_NHPEA_NPEAVValidationError@1@@Z
     */
    MCAPI bool setInt(int, bool *, class GameRule::ValidationError *);
    /**
     * @hash   -741722765
     * @symbol ?setTagDataNotFoundCallback@GameRule@@QEAAAEAV1@V?$function@$$A6AXAEAVGameRule@@@Z@std@@@Z
     */
    MCAPI class GameRule & setTagDataNotFoundCallback(class std::function<void (class GameRule &)>);
    /**
     * @hash   -1845660251
     * @symbol ?setValidateValueCallback@GameRule@@QEAAAEAV1@V?$function@$$A6A_NAEBTValue@GameRule@@PEAVValidationError@2@@Z@std@@@Z
     */
    MCAPI class GameRule & setValidateValueCallback(class std::function<bool (union GameRule::Value const &, class GameRule::ValidationError *)>);
    /**
     * @hash   2061918968
     * @symbol ??1GameRule@@QEAA@XZ
     */
    MCAPI ~GameRule();

//protected:
    /**
     * @hash   1582183091
     * @symbol ?_setDefaultValue@GameRule@@IEAAAEAV1@H@Z
     */
    MCAPI class GameRule & _setDefaultValue(int);
    /**
     * @hash   -1304666360
     * @symbol ?_setDefaultValue@GameRule@@IEAAAEAV1@_N@Z
     */
    MCAPI class GameRule & _setDefaultValue(bool);

//private:
    /**
     * @hash   -727312619
     * @symbol ?_set@GameRule@@AEAA_NAEBTValue@1@PEA_NPEAVValidationError@1@@Z
     */
    MCAPI bool _set(union GameRule::Value const &, bool *, class GameRule::ValidationError *);

protected:

private:

};