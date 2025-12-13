#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
// clang-format on

class IScriptGeneratorStats {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptGeneratorStats() = default;

    virtual void bucketAddedForPlugin() = 0;

    virtual void bucketRemovedForPlugin() = 0;

    virtual void bucketRan(::Scripting::ContextId, uint64) = 0;

    virtual void generatorRan(
        ::Scripting::ContextId,
        uint,
        uint,
        ::std::chrono::microseconds,
        ::std::chrono::microseconds,
        ::std::chrono::microseconds
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
