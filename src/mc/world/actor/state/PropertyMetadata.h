#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PropertyMetadata {
public:
    // PropertyMetadata inner types declare
    // clang-format off

    // clang-format on

    // PropertyMetadata inner types define
    enum class ContainedType {};

public:
    // prevent constructor by default
    PropertyMetadata& operator=(PropertyMetadata const&) = delete;
    PropertyMetadata(PropertyMetadata const&)            = delete;
    PropertyMetadata()                                   = delete;

public:
    /**
     * @symbol ??1PropertyMetadata\@\@QEAA\@XZ
     */
    MCAPI ~PropertyMetadata(); // NOLINT
};
