#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PropertyMetadata {
public:
    // PropertyMetadata inner types define
    enum class ContainedType {};

public:
    // prevent constructor by default
    PropertyMetadata& operator=(PropertyMetadata const&) = delete;
    PropertyMetadata(PropertyMetadata const&)            = delete;
    PropertyMetadata()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1PropertyMetadata\@\@QEAA\@XZ
     */
    MCAPI ~PropertyMetadata();
    // NOLINTEND
};
