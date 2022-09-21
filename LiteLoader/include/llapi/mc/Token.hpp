/**
 * @file  MC/Token.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure Token.
 *
 */
struct Token {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOKEN
public:
    struct Token& operator=(struct Token const &) = delete;
    Token(struct Token const &) = delete;
    Token() = delete;
#endif

public:
    /**
     * @hash   -1536585764
     * @symbol ??0Token@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI Token(std::string const &);
    /**
     * @hash   -1512153949
     * @symbol ?getText@Token@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string const & getText(std::string const &) const;
    /**
     * @hash   1562490469
     * @symbol ??1Token@@QEAA@XZ
     */
    MCAPI ~Token();
    /**
     * @hash   -1995375987
     * @symbol ?tokenize@Token@@SA?AV?$vector@UToken@@V?$allocator@UToken@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static std::vector<struct Token> tokenize(std::string const &);

//protected:
    /**
     * @hash   -278608965
     * @symbol ?_parseRandom@Token@@IEAA_NXZ
     */
    MCAPI bool _parseRandom();

};