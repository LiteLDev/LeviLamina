/**
 * @file  SerializedPersonaPieceHandle.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SerializedPersonaPieceHandle.
 *
 */
class SerializedPersonaPieceHandle {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZEDPERSONAPIECEHANDLE
public:
    class SerializedPersonaPieceHandle& operator=(class SerializedPersonaPieceHandle const &) = delete;
    SerializedPersonaPieceHandle(class SerializedPersonaPieceHandle const &) = delete;
    SerializedPersonaPieceHandle() = delete;
#endif

public:
    /**
     * @hash   1025796594
     * @symbol ??0SerializedPersonaPieceHandle@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PieceType@persona@@VUUID@mce@@_N0@Z
     */
    MCAPI SerializedPersonaPieceHandle(std::string const &, enum persona::PieceType, class mce::UUID, bool, std::string const &);

};