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
    // vIndex: 0
    virtual ~IScriptGeneratorStats() = default;

    // vIndex: 1
    virtual void bucketAddedForPlugin() = 0;

    // vIndex: 2
    virtual void bucketRemovedForPlugin() = 0;

    // vIndex: 3
    virtual void bucketRan(::Scripting::ContextId, uint64) = 0;

    // vIndex: 4
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
