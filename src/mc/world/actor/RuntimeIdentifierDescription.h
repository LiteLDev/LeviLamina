#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RuntimeIdentifierDescription {
public:
    // prevent constructor by default
    RuntimeIdentifierDescription& operator=(RuntimeIdentifierDescription const&);
    RuntimeIdentifierDescription(RuntimeIdentifierDescription const&);
    RuntimeIdentifierDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RuntimeIdentifierDescription();

    // vIndex: 1
    virtual char const* getJsonName() const;

    MCAPI void parse(class Json::Value const& root);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
