#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class EntityTypes {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYTYPES
public:
    EntityTypes& operator=(EntityTypes const&) = delete;
    EntityTypes(EntityTypes const&)            = delete;
    EntityTypes()                              = delete;
#endif

public:
    /**
     * @symbol ?parseJson\@EntityTypes\@\@QEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool parseJson(class Json::Value const&);
    /**
     * @symbol ??1EntityTypes\@\@QEAA\@XZ
     */
    MCAPI ~EntityTypes();
};
