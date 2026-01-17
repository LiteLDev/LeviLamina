#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/WorkExecutionMode.h"
#include "mc/deps/cohtml/WorkType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class ScriptCompiler; }
namespace cohtml { class System; }
namespace cohtml { struct SystemSettings; }
namespace renoir { struct GPUMemoryInfo; }
// clang-format on

namespace cohtml {

class Library {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Library() = default;

    virtual ::cohtml::System* CreateSystem(::cohtml::SystemSettings const&) = 0;

    virtual void StopWorkers() = 0;

    virtual void Uninitialize(bool) = 0;

    virtual void* GetFeatureInterface(uint) = 0;

    virtual void ExecuteWork(::cohtml::WorkType, ::cohtml::WorkExecutionMode, int) = 0;

    virtual void* ReservedMethod(void*, void*) = 0;

    virtual ::cohtml::ScriptCompiler* CreateScriptCompiler() = 0;

    virtual ::renoir::GPUMemoryInfo* GetGPUMemoryStats() const = 0;

    virtual void ResetGPUMemoryTrackerPeaks() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
