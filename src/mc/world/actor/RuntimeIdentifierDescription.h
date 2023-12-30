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
    // vIndex: 0, symbol: ??1RuntimeIdentifierDescription@@UEAA@XZ
    virtual ~RuntimeIdentifierDescription();

    // vIndex: 1, symbol: ?getJsonName@RuntimeIdentifierDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // symbol: ?parse@RuntimeIdentifierDescription@@QEAAXAEBVValue@Json@@@Z
    MCAPI void parse(class Json::Value const& root);

    // NOLINTEND
};
