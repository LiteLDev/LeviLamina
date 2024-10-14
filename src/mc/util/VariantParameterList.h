#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/FilterSubject.h"

class VariantParameterList {
public:
    // prevent constructor by default
    VariantParameterList& operator=(VariantParameterList const&);
    VariantParameterList(VariantParameterList const&);

public:
    // NOLINTBEGIN
    MCAPI VariantParameterList();

    MCAPI bool hasParameter(::Puv::Legacy::FilterSubject parameter) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
