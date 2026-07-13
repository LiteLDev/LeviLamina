#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace mce::framebuilder { class FrameBuilder; }
// clang-format on

namespace mce::framebuilder {

class FrameBuilderFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::mce::framebuilder::FrameBuilder> createFrameBuilder(
        ::WorkerPool*                                       rendererWorkerPool,
        ::gsl::span<::std::reference_wrapper<::WorkerPool>> helperPools,
        ::Scheduler&                                        scheduler
    );
    // NOLINTEND
};

} // namespace mce::framebuilder
