/**
 * @file  Attribute.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0Attribute\@\@QEAA\@AEBVHashedString\@\@W4RedefinitionMode\@\@_N\@Z
     */
    MCAPI Attribute(class HashedString const &, enum class RedefinitionMode, bool);
    /**
     * @symbol  ?getIDValue\@Attribute\@\@QEBA?BIXZ
     */
    MCAPI unsigned int const getIDValue() const;
    /**
     * @symbol  ?getName\@Attribute\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol  ?getRedefinitionMode\@Attribute\@\@QEBA?AW4RedefinitionMode\@\@XZ
     */
    MCAPI enum class RedefinitionMode getRedefinitionMode() const;
    /**
     * @symbol  ?isClientSyncable\@Attribute\@\@QEBA_NXZ
     */
    MCAPI bool isClientSyncable() const;
    /**
     * @symbol  ??8Attribute\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Attribute const &) const;
    /**
     * @symbol  ?getByName\@Attribute\@\@SAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI static class Attribute & getByName(class HashedString const &);

};