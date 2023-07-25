#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
namespace persona { enum class PieceType; }
// clang-format on

class SerializedPersonaPieceHandle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZEDPERSONAPIECEHANDLE
public:
    SerializedPersonaPieceHandle(SerializedPersonaPieceHandle const&) = delete;
    SerializedPersonaPieceHandle()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ??0SerializedPersonaPieceHandle\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PieceType\@persona\@\@VUUID\@mce\@\@_N0\@Z
     */
    MCAPI
    SerializedPersonaPieceHandle(std::string const&, enum class persona::PieceType, class mce::UUID, bool, std::string const&);
    /**
     * @symbol ??4SerializedPersonaPieceHandle\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class SerializedPersonaPieceHandle& operator=(class SerializedPersonaPieceHandle const&);
};
