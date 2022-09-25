/**
 * @file  PackError.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackError.
 *
 */
class PackError {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKERROR
public:
    class PackError& operator=(class PackError const &) = delete;
    PackError() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PackError();
    /**
     * @hash   1152788388
     * @vftbl  1
     * @symbol ?getLocErrorMessage@PackError@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getLocErrorMessage() const;
    /**
     * @hash   195454247
     * @vftbl  2
     * @symbol ?getLocErrorMessageMap@PackLoadError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
     */
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getLocErrorMessageMap() const = 0;
    /**
     * @hash   -667188531
     * @vftbl  3
     * @symbol ?getEventErrorMessageMap@PackLoadError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
     */
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getEventErrorMessageMap() const = 0;
    /**
     * @hash   -2136234892
     * @symbol ??0PackError@@QEAA@W4PackErrorType@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI PackError(enum PackErrorType, std::vector<std::string> const &);
    /**
     * @hash   2079405793
     * @symbol ??0PackError@@QEAA@AEBV0@@Z
     */
    MCAPI PackError(class PackError const &);
    /**
     * @hash   1766628941
     * @symbol ?getErrorParameters@PackError@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> const & getErrorParameters() const;
    /**
     * @hash   1751947232
     * @symbol ?getEventErrorMessage@PackError@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getEventErrorMessage() const;
    /**
     * @hash   2087411050
     * @symbol ?serialize@PackError@@QEAAXAEAVValue@Json@@@Z
     */
    MCAPI void serialize(class Json::Value &);

};