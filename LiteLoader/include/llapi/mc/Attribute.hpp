/**
 * @file  Attribute.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Attribute.
 *
 */
class Attribute {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTE
public:
    class Attribute& operator=(class Attribute const &) = delete;
    Attribute(class Attribute const &) = delete;
    Attribute() = delete;
#endif

public:
    /**
     * @hash   617229437
     * @symbol  ??0Attribute\@\@QEAA\@AEBVHashedString\@\@W4RedefinitionMode\@\@_N\@Z
     */
    MCAPI Attribute(class HashedString const &, enum class RedefinitionMode, bool);
    /**
     * @hash   -1768252032
     * @symbol  ?getIDValue\@Attribute\@\@QEBA?BIXZ
     */
    MCAPI unsigned int const getIDValue() const;
    /**
     * @hash   -1010400906
     * @symbol  ?getName\@Attribute\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   -1064352228
     * @symbol  ?getRedefinitionMode\@Attribute\@\@QEBA?AW4RedefinitionMode\@\@XZ
     */
    MCAPI enum class RedefinitionMode getRedefinitionMode() const;
    /**
     * @hash   516847560
     * @symbol  ?isClientSyncable\@Attribute\@\@QEBA_NXZ
     */
    MCAPI bool isClientSyncable() const;
    /**
     * @hash   -815064453
     * @symbol  ??8Attribute\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Attribute const &) const;
    /**
     * @hash   2036712004
     * @symbol  ?getByName\@Attribute\@\@SAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI static class Attribute & getByName(class HashedString const &);

};