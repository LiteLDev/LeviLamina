#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PropertyMetadata {
public:
    // PropertyMetadata inner types declare
    // clang-format off

    // clang-format on

    // PropertyMetadata inner types define
    enum class ContainedType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYMETADATA
public:
    PropertyMetadata& operator=(PropertyMetadata const&) = delete;
    PropertyMetadata(PropertyMetadata const&)            = delete;
    PropertyMetadata()                                   = delete;
#endif

public:
    /**
     * @symbol ??1PropertyMetadata\@\@QEAA\@XZ
     */
    MCAPI ~PropertyMetadata();
};
